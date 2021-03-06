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

#include "ion/port/environment.h"

#include <string>

#include "third_party/googletest/googletest/include/gtest/gtest.h"

TEST(System, EnvironmentVariables) {
  EXPECT_EQ(std::string(),
            ion::port::GetEnvironmentVariableValue("test_var_name"));

  ion::port::SetEnvironmentVariableValue("test_var_name", "value");
  EXPECT_EQ(std::string("value"),
            ion::port::GetEnvironmentVariableValue("test_var_name"));

  ion::port::SetEnvironmentVariableValue("test_var_name", "another value");
  EXPECT_EQ(std::string("another value"),
            ion::port::GetEnvironmentVariableValue("test_var_name"));

  ion::port::SetEnvironmentVariableValue("test_var_name", "");
  EXPECT_EQ(std::string(),
            ion::port::GetEnvironmentVariableValue("test_var_name"));

  EXPECT_EQ(std::string(),
            ion::port::GetEnvironmentVariableValue("not_a real! var"));
}
