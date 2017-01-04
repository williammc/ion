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

#ifndef ION_BASE_ARGCOUNT_H_
#define ION_BASE_ARGCOUNT_H_

// ION_ARGCOUNT(__VA_ARGS__) returns the number of arguments passed to it, up to
// 64 arguments. See:
// http://groups.google.com/group/comp.std.c/browse_thread/thread/77ee8c8f92e4a3fbugfc464319b1ee5?pli=1  NOLINT

// This expansion is unfortunately necessary because of a bug in VS2010 that
// does not expand __VA_ARGS__ properly when passed to another macro.
#define ION_ARGCOUNT_EXPAND(x) x

// These macros allow a macro name to be concatenated.
#define ION_ARGCOUNT_CONCAT(a, b) a##b
#define ION_ARGCOUNT_XCONCAT(a, b) ION_ARGCOUNT_CONCAT(a, b)

#define ION_ARGCOUNT(...) \
  ION_ARGCOUNT_EXPAND(ION_ARGCOUNT_(__VA_ARGS__, ION_ARGCOUNT_RSEQ_N()))
#define ION_ARGCOUNT_(...) ION_ARGCOUNT_EXPAND(ION_ARGCOUNTN(__VA_ARGS__))
#define ION_ARGCOUNTN(                                     \
          _1, _2, _3, _4, _5, _6, _7, _8, _9, _10,         \
         _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, \
         _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, \
         _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, \
         _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, \
         _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, \
         _61, _62, _63, N, ...) N
#define ION_ARGCOUNT_RSEQ_N()                    \
         63, 62, 61, 60,                         \
         59, 58, 57, 56, 55, 54, 53, 52, 51, 50, \
         49, 48, 47, 46, 45, 44, 43, 42, 41, 40, \
         39, 38, 37, 36, 35, 34, 33, 32, 31, 30, \
         29, 28, 27, 26, 25, 24, 23, 22, 21, 20, \
         19, 18, 17, 16, 15, 14, 13, 12, 11, 10, \
         9, 8, 7, 6, 5, 4, 3, 2, 1, 0

#endif  // ION_BASE_ARGCOUNT_H_
