/**
Copyright 2017 Google Inc. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS-IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

*/

#include "ion/port/fileutils.h"

#if defined(ION_PLATFORM_WINDOWS)
#include <windows.h>
#endif

#include "ion/base/stringutils.h"
#include "ion/port/string.h"
#include "ion/port/timer.h"
#include "third_party/googletest/googletest/include/gtest/gtest.h"

TEST(FileUtils, GetCanonicalFilePath) {
  using ion::port::GetCanonicalFilePath;

#if defined(ION_PLATFORM_WINDOWS)
  EXPECT_EQ("this/is/a/file/path",
            GetCanonicalFilePath("this/is\\a/file\\path"));
  EXPECT_EQ("/leading/and/trailing/",
            GetCanonicalFilePath("\\leading\\and\\trailing\\"));
  EXPECT_EQ("this/has/no/changes/",
            GetCanonicalFilePath("this/has/no/changes/"));

#else
  EXPECT_EQ("this/is\\a/file\\path",
            GetCanonicalFilePath("this/is\\a/file\\path"));
  EXPECT_EQ("\\leading\\and\\trailing\\",
            GetCanonicalFilePath("\\leading\\and\\trailing\\"));
  EXPECT_EQ("this/has/no/changes/",
            GetCanonicalFilePath("this/has/no/changes/"));
#endif
}

// NaCl has no file support.
#if !defined(ION_PLATFORM_NACL)
TEST(FileUtils, GetCurrentWorkingDirectory) {
  std::string dir;
#if defined(ION_PLATFORM_WINDOWS)
  WCHAR pwd[MAX_PATH];
  ::GetCurrentDirectoryW(MAX_PATH, pwd);
  dir = ion::port::GetCanonicalFilePath(ion::port::WideToUtf8(pwd));
#else
  static const int kPathLength = 2048;
  char path[kPathLength];
  getcwd(path, kPathLength);
  dir = path;
#endif
  // This is a rather trivial test, but there are few ways to test this that
  // will work on all platforms.
  EXPECT_EQ(dir, ion::port::GetCurrentWorkingDirectory());
}

// Test that the file modification time returned by GetFileModificationTime
// matches the system clock.
TEST(FileUtils, GetTemporaryFileModificationTimeMatchesSystemTime) {
  using ion::port::GetFileModificationTime;
  using ion::port::GetTemporaryFilename;
  using ion::port::OpenFile;

  const std::string path = GetTemporaryFilename();
  EXPECT_FALSE(path.empty());

  // Open the file, write to it, and close it.
  const std::string data("Some string\nto write\n");
  FILE* fp = OpenFile(path, "wb");
  EXPECT_FALSE(fp == nullptr);
  EXPECT_EQ(data.length(),
            fwrite(data.c_str(), sizeof(data[0]), data.length(), fp));
  fclose(fp);
  fp = nullptr;

  // Get the file's modification time; it should be close to the system clock's
  // now.  Since this does a disk write, expect a generous 1 minute accuracy.
  const std::chrono::system_clock::time_point now =
      std::chrono::system_clock::now();
  std::chrono::system_clock::time_point file_timestamp;
  EXPECT_TRUE(GetFileModificationTime(path, &file_timestamp));
  EXPECT_GE(std::chrono::minutes(1), now - file_timestamp);
  EXPECT_GE(std::chrono::minutes(1), file_timestamp - now);
}

TEST(FileUtils, GetTemporaryDirectory) {
  const std::string temp_directory = ion::port::GetTemporaryDirectory();
  EXPECT_FALSE(temp_directory.empty());

  const std::string temp_file = ion::port::GetTemporaryFilename();
  const std::size_t last_slash = temp_file.find_last_of('/');
  const std::string temp_prefix = temp_file.substr(0, last_slash);
  EXPECT_EQ(temp_prefix, temp_directory);
}

TEST(FileUtils, GetTemporaryFilenameModificationTimeOpenFileRemoveFile) {
  using ion::port::GetCanonicalFilePath;
  using ion::port::GetFileModificationTime;
  using ion::port::GetTemporaryFilename;
  using ion::port::OpenFile;
  using ion::port::RemoveFile;
  using ion::port::Timer;

  const std::string data("Some string\nto write\n");

  // Create a temporary file to write to and read from.
  const std::string path = GetTemporaryFilename();
  EXPECT_FALSE(path.empty());

  const std::chrono::system_clock::time_point current_time =
      std::chrono::system_clock::now();
  Timer::SleepNSeconds(1);

  // Open the file, write to it, and close it.
  FILE* fp = OpenFile(path, "wb");
  EXPECT_FALSE(fp == nullptr);
  EXPECT_EQ(data.length(),
            fwrite(data.c_str(), sizeof(data[0]), data.length(), fp));
  fclose(fp);
  fp = nullptr;

  // Get the file's modification time, it should be at or after the current
  // time.
  std::chrono::system_clock::time_point timestamp;
  EXPECT_TRUE(GetFileModificationTime(path, &timestamp));
  EXPECT_GE(timestamp, current_time);

  // Open the file, read from it, and close it.
  fp = OpenFile(path, "rb");
  EXPECT_FALSE(fp == nullptr);
  std::string read_data;
  read_data.resize(data.length());
  EXPECT_EQ(read_data.length(),
            fread(&read_data[0], sizeof(data[0]), data.length(), fp));
  EXPECT_EQ(data, read_data);
  fclose(fp);

  EXPECT_TRUE(RemoveFile(path));
  EXPECT_FALSE(GetFileModificationTime(path, &timestamp));

  EXPECT_FALSE(RemoveFile(
      GetCanonicalFilePath("this/path/is/unlikely/to/exist.anywhere")));
  EXPECT_FALSE(GetFileModificationTime(
      GetCanonicalFilePath("this/path/is/unlikely/to/exist.anywhere"),
      &timestamp));
}

TEST(FileUtils, NonAsciiFilename) {
  // Construct a path with some non-ASCII characters by appending to a temp
  // file name.
  const std::string temp_path = ion::port::GetTemporaryFilename();
  const std::string alpha_beta_gamma = "\xCE\xB1\xCE\xB2\xCE\xB3";  // UTF-8
  const std::string path = temp_path + alpha_beta_gamma;

  FILE* fp = ion::port::OpenFile(path, "wb");
  EXPECT_FALSE(fp == nullptr);
  fclose(fp);
  EXPECT_TRUE(ion::port::RemoveFile(path));

  // On Windows, getting a temporary filename generates the file, so we have
  // to clean it up.  On other platforms, this will fail.
  ion::port::RemoveFile(temp_path);
}

TEST(FileUtils, TestListDirectory) {
  using ion::port::OpenFile;
  using ion::port::RemoveFile;
  using ion::port::ListDirectory;
  using ion::port::GetTemporaryDirectory;
  using ion::port::GetTemporaryFilename;

  std::string filename = GetTemporaryFilename();
  FILE* f = OpenFile(filename, "w");
  ASSERT_TRUE(f != nullptr);
  ASSERT_EQ(fclose(f), 0);

  std::vector<std::string> files = ListDirectory(GetTemporaryDirectory());
  bool found = false;
  for (auto it = files.begin(); !found && it != files.end(); ++it)
    found = filename == GetTemporaryDirectory() + "/" + *it;
  EXPECT_TRUE(found) << "Failed to find [" << filename << "] in ["
                     << ion::base::JoinStrings(files, ":") << "]";
  EXPECT_TRUE(RemoveFile(filename));
}

TEST(FileUtils, TestReadDataFromFile) {
  using ion::port::OpenFile;
  using ion::port::RemoveFile;
  using ion::port::ReadDataFromFile;
  using ion::port::GetTemporaryFilename;

  // Create a temporary file and write some data to it.
  const std::string data("Some string\nto write\n");
  const std::string path = GetTemporaryFilename();
  FILE* fp = OpenFile(path, "wb");
  EXPECT_EQ(data.length(),
            fwrite(data.c_str(), sizeof(data[0]), data.length(), fp));
  fclose(fp);
  fp = nullptr;

  // Now read it back into a string.
  std::string output;
  EXPECT_TRUE(ReadDataFromFile(path, &output));
  EXPECT_EQ(data, output);
  EXPECT_TRUE(RemoveFile(path));

  // Also try the failure case where the file isn't available.
  std::string output2;
  EXPECT_FALSE(ReadDataFromFile("blah", &output2));
}

TEST(FileUtils, TestReadDataFromFile_EmptyFile) {
  using ion::port::OpenFile;
  using ion::port::RemoveFile;
  using ion::port::ReadDataFromFile;
  using ion::port::GetTemporaryFilename;

  // Create a temporary file that is empty.
  const std::string path = GetTemporaryFilename();
  FILE* fp = OpenFile(path, "wb");
  fclose(fp);
  fp = nullptr;

  // Now read it back into a string.
  std::string output;
  EXPECT_TRUE(ReadDataFromFile(path, &output));
  EXPECT_EQ("", output);
  EXPECT_TRUE(RemoveFile(path));
}

TEST(FileUtils, TestFileExists) {
  using ion::port::FileExists;
  using ion::port::GetTemporaryDirectory;

  // We expect temp directory to already exist.
  const std::string temp_dir = GetTemporaryDirectory();
  EXPECT_TRUE(FileExists(temp_dir));
  EXPECT_FALSE(FileExists("this/path/is/unlikely/to/exist.anywhere"));
}

TEST(FileUtils, TestMakeDirectoryEmpty) {
  EXPECT_FALSE(ion::port::MakeDirectory(""));
}

TEST(FileUtils, TestMakeDirectoryMaxPath) {
  std::string path;
#if defined(ION_PLATFORM_WINDOWS)
  path.resize(MAX_PATH + 1);
#else
  path.resize(PATH_MAX + 1);
#endif
  EXPECT_FALSE(ion::port::MakeDirectory(path));
}

TEST(FileUtils, TestMakeDirectoryExists) {
  using ion::port::GetTemporaryDirectory;
  using ion::port::MakeDirectory;

  // We expect temp directory to already exist.
  EXPECT_TRUE(MakeDirectory(GetTemporaryDirectory()));
}

TEST(FileUtils, TestMakeDirectorySingleDirectory) {
  using ion::port::FileExists;
  using ion::port::GetTemporaryDirectory;
  using ion::port::MakeDirectory;
  using ion::port::RemoveEmptyDirectory;

  const std::string dir_to_create = GetTemporaryDirectory() + "/createdirtest";
  // Make sure it doesn't exist first.
  RemoveEmptyDirectory(dir_to_create);

  EXPECT_TRUE(MakeDirectory(dir_to_create));
  EXPECT_TRUE(FileExists(dir_to_create));

  // Cleanup.
  EXPECT_TRUE(RemoveEmptyDirectory(dir_to_create));
}

TEST(FileUtils, TestMakeDirectoryMultipleDirectories) {
  using ion::port::FileExists;
  using ion::port::GetTemporaryDirectory;
  using ion::port::MakeDirectory;
  using ion::port::RemoveEmptyDirectory;

  // Test 3 directories are created.
  const std::string dir_to_create = GetTemporaryDirectory() + "/one/two/three";
  // Make sure it doesn't exist first.
  RemoveEmptyDirectory(dir_to_create);
  RemoveEmptyDirectory(GetTemporaryDirectory() + "/one/two");
  RemoveEmptyDirectory(GetTemporaryDirectory() + "/one");

  EXPECT_TRUE(MakeDirectory(dir_to_create));
  EXPECT_TRUE(FileExists(dir_to_create));

  // Cleanup.
  EXPECT_TRUE(RemoveEmptyDirectory(dir_to_create));
  EXPECT_TRUE(RemoveEmptyDirectory(GetTemporaryDirectory() + "/one/two"));
  EXPECT_TRUE(RemoveEmptyDirectory(GetTemporaryDirectory() + "/one"));
}

TEST(FileUtils, TestRemoveEmptyDirectory) {
  using ion::port::FileExists;
  using ion::port::GetTemporaryDirectory;
  using ion::port::MakeDirectory;
  using ion::port::RemoveEmptyDirectory;

  const std::string parent_dir = GetTemporaryDirectory() + "/one";
  const std::string dir = parent_dir + "/two";
  EXPECT_TRUE(MakeDirectory(dir));

  // Directory is not empty so expect false.
  EXPECT_FALSE(RemoveEmptyDirectory(parent_dir));

  EXPECT_TRUE(RemoveEmptyDirectory(dir));
  EXPECT_FALSE(FileExists(dir));

  // Now it's empty!
  EXPECT_TRUE(RemoveEmptyDirectory(parent_dir));
  EXPECT_FALSE(FileExists(parent_dir));
}

#endif  // !ION_PLATFORM_NACL
