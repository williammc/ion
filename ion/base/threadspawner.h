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

#ifndef ION_BASE_THREADSPAWNER_H_
#define ION_BASE_THREADSPAWNER_H_

#include <string>

#include "ion/port/threadutils.h"

namespace ion {
namespace base {

// A ThreadSpawner instance launches a new thread in its constructor and waits
// for the thread to finish in its destructor.
class ThreadSpawner {
 public:
  // Creates a ThreadSpawner instance that runs the given function. The thread
  // is given the specified name if thread naming is supported.
  ThreadSpawner(const std::string& name, port::ThreadFuncPtr func_ptr);
  ThreadSpawner(const std::string& name, const port::ThreadStdFunc& func);

  // The destructor calls Join() to wait for the thread to finish.
  ~ThreadSpawner();

  // Waits for the thread to finish. This is called automatically by the
  // destructor.
  void Join();

  // Returns the name of the thread supplied to the constructor.
  const std::string& GetName() const { return name_; }

  // Returns the ThreadId for the thread. This will be port::kInvalidThreadId
  // if the thread has not yet spawned, if there was an error spawning the
  // thread, or if Join() has already completed.
  port::ThreadId GetId() const { return id_; }

 private:
  // Spawns a thread, returning the id. Names the thread if supported.
  port::ThreadId Spawn();

  // Thread name.
  const std::string name_;
  // Stores the spawned function as an std::function so it persists for the
  // lifetime of the thread.
  const port::ThreadStdFunc func_;
  // Stores the ThreadId generated when the thread is spawned. This will be
  // port::kInvalidThreadId if there is an error spawning the thread.
  port::ThreadId id_;
};

}  // namespace base
}  // namespace ion

#endif  // ION_BASE_THREADSPAWNER_H_
