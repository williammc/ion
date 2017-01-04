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

#ifndef ION_IMAGE_TESTS_IMAGE_BYTES_H_
#define ION_IMAGE_TESTS_IMAGE_BYTES_H_

// This file contains image data for tests. Each image is stored as an array of
// bytes.

#include "base/integral_types.h"
#include "ion/base/static_assert.h"

namespace ion {
namespace image {
namespace testing {

// This represents an 8x8 RGB image in JPEG format with 4 horizontal stripes of
// red, green, yellow, and blue.
static const uint8 kJpeg8x8ImageBytes[] = {
  0xff, 0xd8, 0xff, 0xe0, 0x00, 0x10, 0x4a, 0x46, 0x49, 0x46, 0x00, 0x01,
  0x01, 0x01, 0x00, 0x48, 0x00, 0x48, 0x00, 0x00, 0xff, 0xfe, 0x00, 0x13,
  0x43, 0x72, 0x65, 0x61, 0x74, 0x65, 0x64, 0x20, 0x77, 0x69, 0x74, 0x68,
  0x20, 0x47, 0x49, 0x4d, 0x50, 0xff, 0xdb, 0x00, 0x43, 0x00, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0xff, 0xdb, 0x00, 0x43, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xff,
  0xc0, 0x00, 0x11, 0x08, 0x00, 0x08, 0x00, 0x08, 0x03, 0x01, 0x22, 0x00,
  0x02, 0x11, 0x01, 0x03, 0x11, 0x01, 0xff, 0xc4, 0x00, 0x15, 0x00, 0x01,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x06, 0xff, 0xc4, 0x00, 0x1b, 0x10, 0x01, 0x00,
  0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x02, 0x07, 0x08, 0x18, 0x59, 0x98, 0xd5, 0xff, 0xc4,
  0x00, 0x14, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xff, 0xc4, 0x00, 0x24,
  0x11, 0x00, 0x00, 0x03, 0x05, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x08, 0x11, 0x21, 0x41, 0x62,
  0x67, 0x00, 0x09, 0x12, 0x27, 0x28, 0x47, 0x48, 0x71, 0xf0, 0xff, 0xda,
  0x00, 0x0c, 0x03, 0x01, 0x00, 0x02, 0x11, 0x03, 0x11, 0x00, 0x3f, 0x00,
  0xa1, 0xb6, 0x3a, 0x18, 0xc8, 0x14, 0x1a, 0xd3, 0x32, 0x7a, 0xc0, 0x1c,
  0x61, 0x73, 0x59, 0x24, 0xed, 0x46, 0x2c, 0x18, 0x6e, 0x19, 0x61, 0x1c,
  0x34, 0x62, 0x61, 0xb0, 0xf0, 0x16, 0x21, 0xfc, 0xec, 0xd1, 0x37, 0xe1,
  0xc9, 0x15, 0x51, 0x25, 0x74, 0xf3, 0x3b, 0x6f, 0xff, 0xd9
};

// This represents an 8x8 RGB image in JPEG gray format.
static const uint8 kJpeg8x8GrayImageBytes[] = {
  0xff, 0xd8, 0xff, 0xe0, 0x00, 0x10, 0x4a, 0x46, 0x49, 0x46, 0x00, 0x01,
  0x01, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0xff, 0xdb, 0x00, 0x43,
  0x00, 0x0c, 0x09, 0x09, 0x0b, 0x09, 0x08, 0x0c, 0x0b, 0x0a, 0x0b, 0x0e,
  0x0d, 0x0c, 0x0f, 0x13, 0x1f, 0x14, 0x13, 0x11, 0x11, 0x13, 0x26, 0x1b,
  0x1d, 0x17, 0x1f, 0x2d, 0x28, 0x30, 0x2f, 0x2c, 0x28, 0x2c, 0x2b, 0x32,
  0x38, 0x48, 0x3d, 0x32, 0x35, 0x44, 0x36, 0x2b, 0x2c, 0x3e, 0x55, 0x3f,
  0x44, 0x4a, 0x4c, 0x50, 0x51, 0x50, 0x30, 0x3c, 0x58, 0x5e, 0x57, 0x4e,
  0x5e, 0x48, 0x4f, 0x50, 0x4d, 0xff, 0xc0, 0x00, 0x0b, 0x08, 0x00, 0x08,
  0x00, 0x08, 0x01, 0x01, 0x11, 0x00, 0xff, 0xc4, 0x00, 0x14, 0x00, 0x01,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x06, 0xff, 0xc4, 0x00, 0x1e, 0x10, 0x00, 0x01, 0x04,
  0x01, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x01, 0x02, 0x03, 0x04, 0x06, 0x11, 0x00, 0x05, 0x12, 0x21, 0x61,
  0xff, 0xda, 0x00, 0x08, 0x01, 0x01, 0x00, 0x00, 0x3f, 0x00, 0x4f, 0x59,
  0xbf, 0xed, 0x96, 0x17, 0x53, 0x1b, 0x0a, 0x8d, 0x2d, 0x44, 0xf1, 0x69,
  0x7d, 0xe4, 0x78, 0x75, 0xff, 0xd9
};

// This represents a 48x48 Luminance Alpha image in PNG format with a monochrome
// picture of a bus that came from Google Maps.  STBLIB cannot handle this
// image. It is used to test that Ion still manages to decode it (using
// Lodepng).
static const uint8 kPngLumAlpha48x48ImageBytes[] = {
  0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,
  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
  0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x30,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x79, 0xc4,
  0x2a, 0x00, 0x00, 0x00, 0x02, 0x74, 0x52, 0x4e,
  0x53, 0x00, 0x00, 0x76, 0x93, 0xcd, 0x38, 0x00,
  0x00, 0x00, 0x34, 0x49, 0x44, 0x41, 0x54, 0x78,
  0x01, 0x63, 0xa0, 0x0d, 0x90, 0xff, 0x01, 0xa6,
  0xfe, 0xff, 0x07, 0x91, 0x8c, 0xff, 0xff, 0x37,
  0x60, 0x52, 0x0d, 0x8c, 0x48, 0x14, 0x73, 0x03,
  0xe3, 0x01, 0x22, 0xa9, 0xff, 0xff, 0xb1, 0x50,
  0xfd, 0x1f, 0xa1, 0x14, 0x4e, 0x25, 0x0c, 0x05,
  0x7c, 0x0c, 0xa8, 0x14, 0x4d, 0x00, 0x00, 0x11,
  0x1e, 0x2a, 0xb5, 0x39, 0x96, 0xa8, 0x18, 0x00,
  0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae,
  0x42, 0x60, 0x82, 0x00,
};

// This represents an 8x8 RGB image in PNG format with rectangles of different
// colors. The extra colors are needed for this to keep the PNG from having
// 4-bit palette entries, which STBLIB cannot handle.
static const uint8 kPngRgb8x8ImageBytes[] = {
  0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
  0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x08,
  0x08, 0x03, 0x00, 0x00, 0x00, 0xf3, 0xd1, 0x4e, 0xb9, 0x00, 0x00, 0x00,
  0x04, 0x67, 0x41, 0x4d, 0x41, 0x00, 0x00, 0xb1, 0x8f, 0x0b, 0xfc, 0x61,
  0x05, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 0x42, 0x00, 0xae, 0xce,
  0x1c, 0xe9, 0x00, 0x00, 0x00, 0x20, 0x63, 0x48, 0x52, 0x4d, 0x00, 0x00,
  0x7a, 0x26, 0x00, 0x00, 0x80, 0x84, 0x00, 0x00, 0xfa, 0x00, 0x00, 0x00,
  0x80, 0xe8, 0x00, 0x00, 0x75, 0x30, 0x00, 0x00, 0xea, 0x60, 0x00, 0x00,
  0x3a, 0x98, 0x00, 0x00, 0x17, 0x70, 0x9c, 0xba, 0x51, 0x3c, 0x00, 0x00,
  0x00, 0xc0, 0x50, 0x4c, 0x54, 0x45, 0x2f, 0xd0, 0xac, 0x3d, 0xc4, 0xa5,
  0xc3, 0x38, 0x58, 0xd0, 0x3c, 0x5e, 0xdc, 0xf1, 0xec, 0xdd, 0xf1, 0xec,
  0xce, 0x3e, 0x5f, 0xcc, 0x2e, 0x52, 0xeb, 0x45, 0x2e, 0xdb, 0x4e, 0x3b,
  0x21, 0xb0, 0xc4, 0x22, 0xbe, 0xd3, 0xf1, 0xeb, 0xf1, 0xf1, 0xec, 0xf1,
  0x26, 0xbc, 0xd1, 0x14, 0xb7, 0xce, 0xff, 0x5e, 0xde, 0xec, 0x63, 0xd0,
  0x0f, 0x9b, 0x2c, 0x10, 0xa2, 0x2e, 0xf2, 0xb4, 0xf0, 0xf2, 0xb4, 0xf0,
  0x14, 0xa1, 0x31, 0x00, 0xa0, 0x20, 0x6b, 0xde, 0x48, 0x6f, 0xd0, 0x52,
  0x8f, 0x2c, 0xad, 0x99, 0x2e, 0xb9, 0xdf, 0xec, 0xd7, 0xe0, 0xed, 0xd7,
  0x98, 0x31, 0xb7, 0x92, 0x20, 0xb4, 0x07, 0x26, 0x9f, 0x1b, 0x35, 0x9a,
  0xe5, 0xca, 0x63, 0xf7, 0xdb, 0x6a, 0xf0, 0xf6, 0xed, 0xf1, 0xf6, 0xee,
  0xf3, 0xd8, 0x6b, 0xf4, 0xd5, 0x5f, 0x3e, 0xa6, 0x48, 0x49, 0xa1, 0x51,
  0xb6, 0x5c, 0xae, 0xc2, 0x62, 0xb9, 0xce, 0xe6, 0xd2, 0xcf, 0xe6, 0xd2,
  0xbf, 0x63, 0xb7, 0xbe, 0x57, 0xb5, 0xc0, 0x98, 0x18, 0xb6, 0x95, 0x29,
  0x46, 0x68, 0xd7, 0x4a, 0x70, 0xe8, 0xee, 0xf1, 0xf2, 0xee, 0xf2, 0xf3,
  0x4c, 0x71, 0xe4, 0x3e, 0x65, 0xe3, 0x31, 0x89, 0xcf, 0x3e, 0x88, 0xc3,
  0xc1, 0x75, 0x39, 0xcf, 0x7d, 0x3d, 0xdd, 0xe8, 0xf1, 0xde, 0xe8, 0xf1,
  0xcd, 0x7d, 0x3f, 0xcb, 0x74, 0x2f, 0xf8, 0x47, 0x43, 0xce, 0x00, 0x00,
  0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x13, 0x00, 0x00,
  0x0b, 0x13, 0x01, 0x00, 0x9a, 0x9c, 0x18, 0x00, 0x00, 0x00, 0x50, 0x49,
  0x44, 0x41, 0x54, 0x08, 0xd7, 0x63, 0x60, 0x60, 0x64, 0x62, 0x66, 0x61,
  0x65, 0x63, 0x67, 0xe0, 0xe0, 0xe4, 0xe2, 0xe6, 0xe1, 0xe5, 0xe3, 0x67,
  0x10, 0x10, 0x14, 0x12, 0x16, 0x11, 0x15, 0x13, 0x67, 0x90, 0x90, 0x94,
  0x92, 0x96, 0x91, 0x95, 0x93, 0x67, 0x50, 0x50, 0x54, 0x52, 0x56, 0x51,
  0x55, 0x53, 0x67, 0xd0, 0xd0, 0xd4, 0xd2, 0xd6, 0xd1, 0xd5, 0xd3, 0x67,
  0x30, 0x30, 0x34, 0x32, 0x36, 0x31, 0x35, 0x33, 0x67, 0xb0, 0xb0, 0xb4,
  0xb2, 0xb6, 0xb1, 0xb5, 0xb3, 0x07, 0x00, 0xbb, 0xf8, 0x07, 0xe1, 0x8c,
  0xae, 0x9b, 0x20, 0x00, 0x00, 0x00, 0x19, 0x74, 0x45, 0x58, 0x74, 0x43,
  0x6f, 0x6d, 0x6d, 0x65, 0x6e, 0x74, 0x00, 0x43, 0x72, 0x65, 0x61, 0x74,
  0x65, 0x64, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x47, 0x49, 0x4d, 0x50,
  0x57, 0x81, 0x0e, 0x17, 0x00, 0x00, 0x00, 0x25, 0x74, 0x45, 0x58, 0x74,
  0x64, 0x61, 0x74, 0x65, 0x3a, 0x63, 0x72, 0x65, 0x61, 0x74, 0x65, 0x00,
  0x32, 0x30, 0x31, 0x33, 0x2d, 0x30, 0x34, 0x2d, 0x32, 0x35, 0x54, 0x31,
  0x31, 0x3a, 0x35, 0x35, 0x3a, 0x30, 0x32, 0x2d, 0x30, 0x37, 0x3a, 0x30,
  0x30, 0x0f, 0xfa, 0x27, 0xc4, 0x00, 0x00, 0x00, 0x25, 0x74, 0x45, 0x58,
  0x74, 0x64, 0x61, 0x74, 0x65, 0x3a, 0x6d, 0x6f, 0x64, 0x69, 0x66, 0x79,
  0x00, 0x32, 0x30, 0x31, 0x33, 0x2d, 0x30, 0x34, 0x2d, 0x32, 0x35, 0x54,
  0x31, 0x31, 0x3a, 0x35, 0x35, 0x3a, 0x30, 0x32, 0x2d, 0x30, 0x37, 0x3a,
  0x30, 0x30, 0x7e, 0xa7, 0x9f, 0x78, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45,
  0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

// This represents an 8x8 16-bit RGB image in PNG format with
// pixels of random colors.
static const uint8 kPng16Rgb8x8ImageBytes[] = {
  0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
  0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x08,
  0x10, 0x02, 0x00, 0x00, 0x00, 0x1b, 0xfd, 0xf5, 0x9f, 0x00, 0x00, 0x00,
  0x07, 0x74, 0x49, 0x4d, 0x45, 0x07, 0xe0, 0x05, 0x05, 0x16, 0x1d, 0x33,
  0x7d, 0xb9, 0x1c, 0xa8, 0x00, 0x00, 0x01, 0x93, 0x49, 0x44, 0x41, 0x54,
  0x18, 0x95, 0x01, 0x88, 0x01, 0x77, 0xfe, 0x00, 0x21, 0x06, 0x34, 0x88,
  0xe7, 0xff, 0xf9, 0xff, 0xca, 0xd8, 0xe3, 0x7b, 0xa1, 0x0e, 0x9f, 0xa5,
  0x49, 0xcf, 0x3e, 0x83, 0xcd, 0x8c, 0xae, 0x33, 0xd1, 0xad, 0xb4, 0x78,
  0x11, 0x8d, 0x27, 0x0f, 0x78, 0xb2, 0xd1, 0x0e, 0x60, 0xe8, 0x03, 0x13,
  0x68, 0x34, 0x8a, 0xc7, 0xff, 0x8e, 0x27, 0x4a, 0x02, 0xf5, 0x3b, 0xa1,
  0x21, 0x9c, 0xce, 0x74, 0x50, 0xbc, 0x6b, 0xce, 0xf5, 0x81, 0xcf, 0x45,
  0xc7, 0xe1, 0x6e, 0x32, 0xaa, 0x8c, 0x53, 0x2b, 0x90, 0xab, 0x0e, 0xbc,
  0xae, 0x3f, 0xbb, 0xe9, 0xfe, 0xd7, 0xec, 0xe3, 0x8e, 0x0c, 0x51, 0xfe,
  0x2d, 0xe4, 0x96, 0xec, 0xb8, 0xf1, 0x8b, 0x0f, 0xc9, 0x04, 0x76, 0x46,
  0x08, 0xe5, 0x7c, 0xef, 0x5d, 0x33, 0x12, 0xb3, 0xf1, 0x2c, 0xf2, 0xe4,
  0x17, 0x25, 0x4a, 0x43, 0x4c, 0x01, 0x80, 0xfd, 0x30, 0xca, 0x05, 0x8f,
  0x1e, 0xaf, 0xc1, 0xbf, 0xda, 0x40, 0x3a, 0x02, 0xc9, 0x4f, 0x8d, 0xb4,
  0xd9, 0xd2, 0x4e, 0x33, 0xd5, 0x9e, 0x9d, 0x90, 0x19, 0x36, 0x03, 0x0b,
  0x14, 0x9c, 0x5a, 0xe1, 0x3a, 0x48, 0x2d, 0xe7, 0x89, 0xc2, 0x31, 0x3b,
  0xa6, 0x0c, 0x69, 0xcf, 0x6a, 0xc2, 0x91, 0x3e, 0x62, 0x8b, 0xec, 0xc0,
  0xf4, 0xbf, 0x6f, 0xc3, 0x6c, 0x14, 0xc0, 0xb1, 0x1a, 0x75, 0xe5, 0x78,
  0x3c, 0xf7, 0x13, 0xfe, 0xcf, 0xdf, 0xca, 0x67, 0xee, 0x36, 0x5e, 0x02,
  0xad, 0xcd, 0x93, 0x9a, 0xd4, 0x2c, 0xf0, 0x1c, 0x25, 0xdc, 0x66, 0x0b,
  0x63, 0xb1, 0x27, 0xdf, 0xc2, 0x55, 0xe2, 0x5f, 0x7e, 0x16, 0xe4, 0xef,
  0x52, 0x40, 0xef, 0xd8, 0xf0, 0x4e, 0x4f, 0xcb, 0xc0, 0x18, 0x78, 0x96,
  0xb4, 0x8b, 0x5f, 0x92, 0x2e, 0x02, 0x9c, 0x35, 0xb9, 0x09, 0xae, 0xe6,
  0x01, 0xb9, 0x3b, 0x45, 0xf5, 0xba, 0xdd, 0x53, 0x0c, 0x07, 0x23, 0x14,
  0x2c, 0xfb, 0x47, 0x1b, 0x8d, 0xcf, 0x7d, 0x93, 0xf3, 0xf4, 0x95, 0x13,
  0x2b, 0x8d, 0xec, 0x28, 0x8e, 0x7b, 0x6b, 0xfa, 0xfe, 0x8f, 0x4f, 0x53,
  0x30, 0x6c, 0xb4, 0x26, 0x64, 0x47, 0xb0, 0x01, 0x17, 0x8f, 0x39, 0x1f,
  0x2d, 0x03, 0x36, 0x58, 0x9d, 0xad, 0xf3, 0xcf, 0x0c, 0x9b, 0x55, 0xe4,
  0xcd, 0x20, 0xce, 0x18, 0xdb, 0x28, 0x2d, 0xe2, 0x62, 0xa8, 0xa2, 0x90,
  0x39, 0xc8, 0x58, 0xf1, 0x98, 0xad, 0xbb, 0x8b, 0x95, 0x6b, 0x7c, 0x0a,
  0xe6, 0x9f, 0x99, 0xd9, 0x38, 0xea, 0x14, 0x09, 0x55, 0xd1, 0xc7, 0xb2,
  0x79, 0xfe, 0x00, 0xb7, 0x9b, 0x7c, 0xe5, 0x1e, 0x1a, 0x4b, 0xb6, 0xf9,
  0x43, 0xe9, 0xef, 0x9a, 0xea, 0x10, 0x5b, 0xa9, 0x0b, 0xcf, 0x0c, 0xea,
  0x00, 0x44, 0x51, 0xab, 0x04, 0x0f, 0x68, 0xaf, 0x12, 0x38, 0x68, 0xb3,
  0x2b, 0xa7, 0xb4, 0xe6, 0x5b, 0x3f, 0xa3, 0x72, 0xf6, 0xae, 0x1c, 0x31,
  0x17, 0xae, 0xfc, 0xe7, 0x05, 0xc4, 0x6e, 0x41, 0x06, 0x3b, 0x86, 0x00,
  0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82,
};

// This represents an 8x8 RGBA image in PNG format with 4 horizontal stripes of
// red, green, yellow, and blue, with the center 2x2 semi-transparent.
static const uint8 kPngRgba8x8ImageBytes[] = {
  0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
  0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x08,
  0x08, 0x03, 0x00, 0x00, 0x00, 0xf3, 0xd1, 0x4e, 0xb9, 0x00, 0x00, 0x00,
  0x04, 0x67, 0x41, 0x4d, 0x41, 0x00, 0x00, 0xb1, 0x8f, 0x0b, 0xfc, 0x61,
  0x05, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 0x42, 0x00, 0xae, 0xce,
  0x1c, 0xe9, 0x00, 0x00, 0x00, 0x20, 0x63, 0x48, 0x52, 0x4d, 0x00, 0x00,
  0x7a, 0x26, 0x00, 0x00, 0x80, 0x84, 0x00, 0x00, 0xfa, 0x00, 0x00, 0x00,
  0x80, 0xe8, 0x00, 0x00, 0x75, 0x30, 0x00, 0x00, 0xea, 0x60, 0x00, 0x00,
  0x3a, 0x98, 0x00, 0x00, 0x17, 0x70, 0x9c, 0xba, 0x51, 0x3c, 0x00, 0x00,
  0x00, 0x60, 0x50, 0x4c, 0x54, 0x45, 0xc2, 0x36, 0x3b, 0xcc, 0x30, 0x3e,
  0xcd, 0x2f, 0x3f, 0x1a, 0x9a, 0x08, 0x29, 0x91, 0x0d, 0x2e, 0x8e, 0x0e,
  0x1c, 0xb5, 0x09, 0x1b, 0xb6, 0x09, 0x1a, 0xb6, 0x08, 0xdb, 0xed, 0x44,
  0xdc, 0xee, 0x43, 0xdc, 0xee, 0x43, 0xdf, 0xe4, 0x65, 0xd0, 0xdb, 0x71,
  0xcc, 0xd8, 0x74, 0x40, 0x7d, 0xe4, 0x37, 0x77, 0xeb, 0x36, 0x76, 0xec,
  0xdd, 0x26, 0x44, 0xdd, 0x26, 0x44, 0xdc, 0x26, 0x43, 0xdc, 0x26, 0x43,
  0xc1, 0x37, 0x3b, 0x18, 0x9b, 0x07, 0x1c, 0xb5, 0x09, 0xdb, 0xed, 0x44,
  0xe0, 0xe5, 0x64, 0x42, 0x7e, 0xe3, 0x27, 0x6d, 0xf8, 0x27, 0x6d, 0xf8,
  0x28, 0x6d, 0xf8, 0x28, 0x6d, 0xf8, 0xfa, 0x0d, 0xdd, 0xc1, 0x00, 0x00,
  0x00, 0x12, 0x74, 0x52, 0x4e, 0x53, 0xfd, 0xf2, 0xf0, 0xf2, 0x9c, 0x8d,
  0xf0, 0x8d, 0x7d, 0xf0, 0x8d, 0x7d, 0xf2, 0x9c, 0x8d, 0xfd, 0xf2, 0xf0,
  0x1d, 0xe7, 0x20, 0x7b, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73,
  0x00, 0x00, 0x0b, 0x13, 0x00, 0x00, 0x0b, 0x13, 0x01, 0x00, 0x9a, 0x9c,
  0x18, 0x00, 0x00, 0x00, 0x46, 0x49, 0x44, 0x41, 0x54, 0x08, 0xd7, 0x0d,
  0xc5, 0x59, 0x02, 0x80, 0x10, 0x14, 0x00, 0xc0, 0x67, 0xcf, 0x1a, 0x22,
  0x3b, 0xf7, 0xbf, 0x65, 0xcd, 0xcf, 0x40, 0x7c, 0x52, 0xce, 0xe9, 0x89,
  0xf0, 0x02, 0xc2, 0x18, 0xfd, 0x15, 0x42, 0x19, 0xa3, 0xa4, 0x40, 0xe5,
  0xe2, 0xba, 0x04, 0xaf, 0xd0, 0xa4, 0xd2, 0x5a, 0xc9, 0x06, 0xdd, 0x58,
  0xe7, 0xac, 0xe9, 0x30, 0x6e, 0x1f, 0x82, 0xbf, 0x07, 0xcc, 0xb5, 0xcf,
  0xd9, 0x6b, 0x7e, 0x75, 0xa2, 0x03, 0xe1, 0x7c, 0x0e, 0xa5, 0xf3, 0x00,
  0x00, 0x00, 0x19, 0x74, 0x45, 0x58, 0x74, 0x43, 0x6f, 0x6d, 0x6d, 0x65,
  0x6e, 0x74, 0x00, 0x43, 0x72, 0x65, 0x61, 0x74, 0x65, 0x64, 0x20, 0x77,
  0x69, 0x74, 0x68, 0x20, 0x47, 0x49, 0x4d, 0x50, 0x57, 0x81, 0x0e, 0x17,
  0x00, 0x00, 0x00, 0x25, 0x74, 0x45, 0x58, 0x74, 0x64, 0x61, 0x74, 0x65,
  0x3a, 0x63, 0x72, 0x65, 0x61, 0x74, 0x65, 0x00, 0x32, 0x30, 0x31, 0x33,
  0x2d, 0x30, 0x34, 0x2d, 0x32, 0x35, 0x54, 0x31, 0x30, 0x3a, 0x30, 0x35,
  0x3a, 0x34, 0x33, 0x2d, 0x30, 0x37, 0x3a, 0x30, 0x30, 0x81, 0x06, 0x57,
  0x4d, 0x00, 0x00, 0x00, 0x25, 0x74, 0x45, 0x58, 0x74, 0x64, 0x61, 0x74,
  0x65, 0x3a, 0x6d, 0x6f, 0x64, 0x69, 0x66, 0x79, 0x00, 0x32, 0x30, 0x31,
  0x33, 0x2d, 0x30, 0x34, 0x2d, 0x32, 0x35, 0x54, 0x31, 0x30, 0x3a, 0x30,
  0x35, 0x3a, 0x34, 0x33, 0x2d, 0x30, 0x37, 0x3a, 0x30, 0x30, 0xf0, 0x5b,
  0xef, 0xf1, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42,
  0x60, 0x82
};


// Expected RGB data bytes after converting the sample 8x8 JPEG data.
static const uint8 kExpectedJpegBytes[] = {
  0xd4, 0x2b, 0x42, 0xd4, 0x2b, 0x42, 0xd6, 0x2a, 0x40, 0xd6, 0x2a, 0x40,
  0xd4, 0x2b, 0x42, 0xd4, 0x2b, 0x42, 0xd6, 0x2a, 0x42, 0xd6, 0x2a, 0x42,
  0xa1, 0x49, 0x31, 0xa1, 0x49, 0x31, 0xa3, 0x49, 0x31, 0xa3, 0x49, 0x31,
  0xa1, 0x49, 0x31, 0xa1, 0x49, 0x31, 0xa3, 0x49, 0x31, 0xa3, 0x49, 0x31,
  0x39, 0x87, 0x10, 0x3b, 0x86, 0x10, 0x3b, 0x86, 0x10, 0x3b, 0x86, 0x10,
  0x3b, 0x86, 0x10, 0x3b, 0x86, 0x10, 0x3b, 0x86, 0x10, 0x3b, 0x86, 0x10,
  0x2a, 0xa3, 0x00, 0x2a, 0xa3, 0x00, 0x2c, 0xa2, 0x00, 0x2c, 0xa2, 0x00,
  0x2a, 0xa3, 0x00, 0x2a, 0xa3, 0x00, 0x2c, 0xa2, 0x00, 0x2c, 0xa2, 0x00,
  0xd0, 0xfc, 0x5d, 0xd0, 0xfc, 0x5d, 0xd0, 0xfc, 0x5d, 0xd0, 0xfc, 0x5d,
  0xd0, 0xfc, 0x5d, 0xd0, 0xfc, 0x5d, 0xd0, 0xfc, 0x5d, 0xd0, 0xfc, 0x5d,
  0xd8, 0xef, 0x97, 0xd8, 0xef, 0x97, 0xd8, 0xef, 0x97, 0xd8, 0xef, 0x97,
  0xd8, 0xef, 0x97, 0xd8, 0xef, 0x97, 0xd8, 0xef, 0x97, 0xda, 0xee, 0x99,
  0x46, 0x7a, 0xb3, 0x46, 0x7a, 0xb3, 0x46, 0x7a, 0xb3, 0x46, 0x7a, 0xb3,
  0x46, 0x7a, 0xb3, 0x46, 0x7a, 0xb3, 0x46, 0x7a, 0xb3, 0x47, 0x79, 0xb4,
  0x27, 0x6c, 0xeb, 0x27, 0x6c, 0xeb, 0x28, 0x6b, 0xed, 0x28, 0x6b, 0xed,
  0x27, 0x6c, 0xeb, 0x27, 0x6c, 0xeb, 0x28, 0x6b, 0xed, 0x28, 0x6b, 0xed,
};

// Expected RGB data bytes after converting the sample 8x8 PNG RGB data.
static const uint8 kExpectedPngRgbBytes[] = {
  0x2f, 0xd0, 0xac, 0x3d, 0xc4, 0xa5, 0xc3, 0x38, 0x58, 0xd0, 0x3c, 0x5e,
  0xdc, 0xf1, 0xec, 0xdd, 0xf1, 0xec, 0xce, 0x3e, 0x5f, 0xcc, 0x2e, 0x52,
  0xeb, 0x45, 0x2e, 0xdb, 0x4e, 0x3b, 0x21, 0xb0, 0xc4, 0x22, 0xbe, 0xd3,
  0xf1, 0xeb, 0xf1, 0xf1, 0xec, 0xf1, 0x26, 0xbc, 0xd1, 0x14, 0xb7, 0xce,
  0xff, 0x5e, 0xde, 0xec, 0x63, 0xd0, 0x0f, 0x9b, 0x2c, 0x10, 0xa2, 0x2e,
  0xf2, 0xb4, 0xf0, 0xf2, 0xb4, 0xf0, 0x14, 0xa1, 0x31, 0x00, 0xa0, 0x20,
  0x6b, 0xde, 0x48, 0x6f, 0xd0, 0x52, 0x8f, 0x2c, 0xad, 0x99, 0x2e, 0xb9,
  0xdf, 0xec, 0xd7, 0xe0, 0xed, 0xd7, 0x98, 0x31, 0xb7, 0x92, 0x20, 0xb4,
  0x07, 0x26, 0x9f, 0x1b, 0x35, 0x9a, 0xe5, 0xca, 0x63, 0xf7, 0xdb, 0x6a,
  0xf0, 0xf6, 0xed, 0xf1, 0xf6, 0xee, 0xf3, 0xd8, 0x6b, 0xf4, 0xd5, 0x5f,
  0x3e, 0xa6, 0x48, 0x49, 0xa1, 0x51, 0xb6, 0x5c, 0xae, 0xc2, 0x62, 0xb9,
  0xce, 0xe6, 0xd2, 0xcf, 0xe6, 0xd2, 0xbf, 0x63, 0xb7, 0xbe, 0x57, 0xb5,
  0xc0, 0x98, 0x18, 0xb6, 0x95, 0x29, 0x46, 0x68, 0xd7, 0x4a, 0x70, 0xe8,
  0xee, 0xf1, 0xf2, 0xee, 0xf2, 0xf3, 0x4c, 0x71, 0xe4, 0x3e, 0x65, 0xe3,
  0x31, 0x89, 0xcf, 0x3e, 0x88, 0xc3, 0xc1, 0x75, 0x39, 0xcf, 0x7d, 0x3d,
  0xdd, 0xe8, 0xf1, 0xde, 0xe8, 0xf1, 0xcd, 0x7d, 0x3f, 0xcb, 0x74, 0x2f,
};

// Expected RGB data bytes after converting the sample 8x8 PNG 16-bit
// RGB data.
static const uint8 kExpectedPng16RgbBytes[] = {
  0x06, 0x21, 0x88, 0x34, 0xff, 0xe7, 0xff, 0xf9, 0xd8, 0xca, 0x7b, 0xe3,
  0x0e, 0xa1, 0xa5, 0x9f, 0xcf, 0x49, 0x83, 0x3e, 0x8c, 0xcd, 0x33, 0xae,
  0xad, 0xd1, 0x78, 0xb4, 0x8d, 0x11, 0x0f, 0x27, 0xb2, 0x78, 0x0e, 0xd1,
  0xe8, 0x60, 0x13, 0x03, 0x34, 0x68, 0xc7, 0x8a, 0x8e, 0xff, 0x4a, 0x27,
  0x41, 0x16, 0xa9, 0xd5, 0xcd, 0x83, 0x4f, 0x6d, 0x43, 0x86, 0x70, 0xb1,
  0xdd, 0x22, 0x6c, 0xe4, 0x3d, 0x2a, 0x2d, 0x70, 0xdf, 0x59, 0xc3, 0xd9,
  0xbb, 0x7c, 0x26, 0x70, 0x48, 0x50, 0x0d, 0x10, 0x9e, 0x4f, 0x9c, 0xb4,
  0x39, 0x6c, 0x40, 0x01, 0xca, 0x4c, 0x7f, 0x76, 0x19, 0xf0, 0x13, 0x36,
  0x87, 0x8c, 0x8e, 0xdd, 0xbc, 0xff, 0xba, 0xe9, 0xf6, 0x98, 0x9c, 0xf0,
  0xc1, 0x5f, 0x1b, 0xfb, 0xb3, 0x74, 0x2e, 0xbc, 0x69, 0xd9, 0x8d, 0x09,
  0x4a, 0xc1, 0xd5, 0xf7, 0x07, 0xca, 0x4d, 0x56, 0xd7, 0x31, 0x97, 0x93,
  0x01, 0xf9, 0x70, 0xda, 0xfd, 0x9a, 0xd7, 0xce, 0xd0, 0x8d, 0x49, 0xb3,
  0x57, 0x51, 0xa1, 0x0a, 0x98, 0x60, 0xb5, 0xe5, 0x54, 0x38, 0xcb, 0x6a,
  0x61, 0xdd, 0xa0, 0xa5, 0x29, 0x3e, 0xd8, 0x8e, 0xe6, 0xfd, 0x47, 0xae,
  0x85, 0x67, 0x4c, 0xb9, 0x93, 0x7f, 0x29, 0x72, 0xab, 0x26, 0x7a, 0xfe,
  0x51, 0x2d, 0xa0, 0x77, 0x8a, 0xca, 0x5e, 0x5c, 0xa6, 0xe9, 0xc7, 0xf4,
  0x24, 0xfe, 0x3b, 0x9d, 0xc4, 0x34, 0xd1, 0xd5, 0x30, 0x5d, 0xd6, 0xd0,
  0x12, 0x40, 0x7f, 0xcc, 0x7e, 0x00, 0x37, 0x70, 0xfc, 0x7b, 0x36, 0x92,
  0xc5, 0xb9, 0x24, 0xa8, 0xe1, 0x6f, 0xf4, 0xc1, 0xc3, 0xe6, 0x10, 0x76,
  0xdc, 0xe1, 0x32, 0xd6, 0x8c, 0xf8, 0x93, 0xf8, 0xaf, 0xa2, 0xad, 0xa2,
  0x3b, 0xb9, 0xf5, 0x45, 0xdd, 0xba, 0x47, 0x0c, 0x18, 0x4c, 0x09, 0xce,
  0x8e, 0x07, 0xa5, 0x67, 0x86, 0x9d, 0x81, 0x9a, 0x3a, 0x5b, 0xb1, 0xb0,
  0x6d, 0x27, 0xc8, 0x83, 0x1c, 0x2b, 0x6b, 0x21, 0x17, 0x12, 0x4c, 0x7e,
  0x1f, 0x8d, 0x7b, 0x38, 0xfc, 0xc5, 0x36, 0x8e, 0xb4, 0xc7, 0x29, 0xe4,
  0x75, 0x92, 0x27, 0xbf, 0x3d, 0x50, 0xf9, 0x5b, 0x03, 0xda, 0x43, 0x5c,
  0xdb, 0xff, 0x7c, 0x7b, 0x46, 0xa9, 0x56, 0x2e, 0xeb, 0x0d, 0x43, 0xe5,
  0x52, 0x82, 0x86, 0xe0, 0xba, 0x43, 0xc9, 0xe6, 0x58, 0xf5, 0x22, 0x46,
  0x4d, 0x52, 0x53, 0xce, 0x98, 0x99, 0x12, 0xc5, 0x35, 0x91, 0x5e, 0x37,
  0x9b, 0xb7, 0xe5, 0x7c, 0x1a, 0x1e, 0xb6, 0x4b, 0x43, 0xf9, 0xef, 0xe9,
  0xea, 0x9a, 0x5b, 0x10, 0x0b, 0xa9, 0x0c, 0xcf, 0x00, 0xea, 0x51, 0x44,
  0x04, 0xab, 0x68, 0x0f, 0x12, 0xaf, 0x68, 0x38, 0x2b, 0xb3, 0xb4, 0xa7,
  0x5b, 0xe6, 0xa3, 0x3f, 0xf6, 0x72, 0x1c, 0xae, 0x17, 0x31, 0xfc, 0xae,
};

// Expected RGBA data bytes after converting the sample 8x8 PNG RGBA data.
static const uint8 kExpectedPngRgbaBytes[] = {
  0xdd, 0x26, 0x44, 0xff, 0xdd, 0x26, 0x44, 0xff, 0xdc, 0x26, 0x43, 0xff,
  0xdc, 0x26, 0x43, 0xff, 0xdc, 0x26, 0x43, 0xff, 0xdc, 0x26, 0x43, 0xff,
  0xdd, 0x26, 0x44, 0xff, 0xdd, 0x26, 0x44, 0xff, 0xc1, 0x37, 0x3b, 0xff,
  0xc2, 0x36, 0x3b, 0xfd, 0xcc, 0x30, 0x3e, 0xf2, 0xcd, 0x2f, 0x3f, 0xf0,
  0xcd, 0x2f, 0x3f, 0xf0, 0xcc, 0x30, 0x3e, 0xf2, 0xc2, 0x36, 0x3b, 0xfd,
  0xc1, 0x37, 0x3b, 0xff, 0x18, 0x9b, 0x07, 0xff, 0x1a, 0x9a, 0x08, 0xf2,
  0x29, 0x91, 0x0d, 0x9c, 0x2e, 0x8e, 0x0e, 0x8d, 0x2e, 0x8e, 0x0e, 0x8d,
  0x29, 0x91, 0x0d, 0x9c, 0x1a, 0x9a, 0x08, 0xf2, 0x18, 0x9b, 0x07, 0xff,
  0x1c, 0xb5, 0x09, 0xff, 0x1c, 0xb5, 0x09, 0xf0, 0x1b, 0xb6, 0x09, 0x8d,
  0x1a, 0xb6, 0x08, 0x7d, 0x1a, 0xb6, 0x08, 0x7d, 0x1b, 0xb6, 0x09, 0x8d,
  0x1c, 0xb5, 0x09, 0xf0, 0x1c, 0xb5, 0x09, 0xff, 0xdb, 0xed, 0x44, 0xff,
  0xdb, 0xed, 0x44, 0xf0, 0xdc, 0xee, 0x43, 0x8d, 0xdc, 0xee, 0x43, 0x7d,
  0xdc, 0xee, 0x43, 0x7d, 0xdc, 0xee, 0x43, 0x8d, 0xdb, 0xed, 0x44, 0xf0,
  0xdb, 0xed, 0x44, 0xff, 0xe0, 0xe5, 0x64, 0xff, 0xdf, 0xe4, 0x65, 0xf2,
  0xd0, 0xdb, 0x71, 0x9c, 0xcc, 0xd8, 0x74, 0x8d, 0xcc, 0xd8, 0x74, 0x8d,
  0xd0, 0xdb, 0x71, 0x9c, 0xdf, 0xe4, 0x65, 0xf2, 0xe0, 0xe5, 0x64, 0xff,
  0x42, 0x7e, 0xe3, 0xff, 0x40, 0x7d, 0xe4, 0xfd, 0x37, 0x77, 0xeb, 0xf2,
  0x36, 0x76, 0xec, 0xf0, 0x36, 0x76, 0xec, 0xf0, 0x37, 0x77, 0xeb, 0xf2,
  0x40, 0x7d, 0xe4, 0xfd, 0x42, 0x7e, 0xe3, 0xff, 0x27, 0x6d, 0xf8, 0xff,
  0x27, 0x6d, 0xf8, 0xff, 0x28, 0x6d, 0xf8, 0xff, 0x28, 0x6d, 0xf8, 0xff,
  0x28, 0x6d, 0xf8, 0xff, 0x28, 0x6d, 0xf8, 0xff, 0x27, 0x6d, 0xf8, 0xff,
  0x27, 0x6d, 0xf8, 0xff
};

static const uint8 kInvalidIonRawHeaderBytes[] = {
  'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd',
  0x12, 0x34, 0x56, 0x78, 0x90
};

static const uint8 kRgba8888IonRaw3x3BigEndianHeaderBytes[] = {
  0x89, 0x52, 0x41, 0x57,  /* consts 0x89 'R' 'A' 'W' */
  0x00, 0x01,              /* indicator for Big Endian */
  0x00, 0x00,              /* format indicator for RGBA8888 */
  0x00, 0x00, 0x00, 0x03,  /* width = 3 in 4-byte unsigned Big Endian int */
  0x00, 0x00, 0x00, 0x03   /* height = 3 in 4-byte unsigned Big Endian int */
};

static const uint8 kRgba8888IonRaw3x3LittleEndianHeaderBytes[] = {
  0x89, 0x52, 0x41, 0x57,  /* consts 0x89 'R' 'A' 'W' */
  0x01, 0x00,              /* indicator for Little Endian */
  0x00, 0x00,              /* format indicator for RGBA8888 */
  0x03, 0x00, 0x00, 0x00,  /* width = 3 in 4-byte unsigned Little Endian int */
  0x03, 0x00, 0x00, 0x00   /* height = 3 in 4-byte unsigned Little Endian int */
};

static const uint8 kRgb565IonRaw3x3BigEndianHeaderBytes[] = {
  0x89, 0x52, 0x41, 0x57,  /* consts 0x89 'R' 'A' 'W' */
  0x00, 0x01,              /* indicator for Big Endian */
  0x00, 0x01,              /* format indicator for RGB565 */
  0x00, 0x00, 0x00, 0x03,  /* width = 3 in 4-byte unsigned Big Endian int */
  0x00, 0x00, 0x00, 0x03   /* height = 3 in 4-byte unsigned Big Endian int */
};

static const uint8 kRgb565IonRaw3x3LittleEndianHeaderBytes[] = {
  0x89, 0x52, 0x41, 0x57,  /* consts 0x89 'R' 'A' 'W' */
  0x01, 0x00,              /* indicator for Little Endian */
  0x01, 0x00,              /* format indicator for RGB565 */
  0x03, 0x00, 0x00, 0x00,  /* width = 3 in 4-byte unsigned Little Endian int */
  0x03, 0x00, 0x00, 0x00   /* height = 3 in 4-byte unsigned Little Endian int */
};

static const uint8 kRgba4444IonRaw3x3BigEndianHeaderBytes[] = {
  0x89, 0x52, 0x41, 0x57,  /* consts 0x89 'R' 'A' 'W' */
  0x00, 0x01,              /* indicator for Big Endian */
  0x00, 0x02,              /* format indicator for RGBA4444 */
  0x00, 0x00, 0x00, 0x03,  /* width = 3 in 4-byte unsigned Big Endian int */
  0x00, 0x00, 0x00, 0x03   /* height = 3 in 4-byte unsigned Big Endian int */
};

static const uint8 kRgba4444IonRaw3x3LittleEndianHeaderBytes[] = {
  0x89, 0x52, 0x41, 0x57,  /* consts 0x89 'R' 'A' 'W' */
  0x01, 0x00,              /* indicator for Little Endian */
  0x02, 0x00,              /* format indicator for RGBA4444 */
  0x03, 0x00, 0x00, 0x00,  /* width = 3 in 4-byte unsigned Little Endian int */
  0x03, 0x00, 0x00, 0x00   /* height = 3 in 4-byte unsigned Little Endian int */
};

static const uint8 kAlphaIonRaw3x3BigEndianHeaderBytes[] = {
  0x89, 0x52, 0x41, 0x57,  /* consts 0x89 'R' 'A' 'W' */
  0x00, 0x01,              /* indicator for Big Endian */
  0x00, 0x03,              /* format indicator for 8-bit alpha format */
  0x00, 0x00, 0x00, 0x03,  /* width = 3 in 4-byte unsigned Big Endian int */
  0x00, 0x00, 0x00, 0x03   /* height = 3 in 4-byte unsigned Big Endian int */
};

static const uint8 kAlphaIonRaw3x3LittleEndianHeaderBytes[] = {
  0x89, 0x52, 0x41, 0x57,  /* consts 0x89 'R' 'A' 'W' */
  0x01, 0x00,              /* indicator for Little Endian */
  0x03, 0x00,              /* format indicator for 8-bit alpha format */
  0x03, 0x00, 0x00, 0x00,  /* width = 3 in 4-byte unsigned Little Endian int */
  0x03, 0x00, 0x00, 0x00   /* height = 3 in 4-byte unsigned Little Endian int */
};

static const uint8 kRgba8888IonRawPayloadlessHeaderBytes[] = {
  0x89, 0x52, 0x41, 0x57,  /* consts 0x89 'R' 'A' 'W' */
  0x00, 0x01,              /* indicator for Big Endian */
  0xab, 0xcd,              /* indicator for a not-supported-yet format */
  0x00, 0x00, 0x00, 0x00,  /* width = 0 in 4-byte unsigned Big Endian int */
  0x00, 0x00, 0x00, 0x02   /* height = 2 in 4-byte unsigned Big Endian int */
};

static const uint8 kUnknownIonRawHeaderBytes[] = {
  0x89, 0x52, 0x41, 0x57,  /* consts 0x89 'R' 'A' 'W' */
  0x00, 0x01,              /* indicator for Big Endian */
  0xab, 0xcd,              /* indicator for a not-supported-yet format */
  0x00, 0x00, 0x00, 0x03,  /* width = 3 in 4-byte unsigned Big Endian int */
  0x00, 0x00, 0x00, 0x03   /* height = 3 in 4-byte unsigned Big Endian int */
};

static const uint8 kRgba8888IonRaw2x2ImageBytes[] = {
  0x12, 0x34, 0x56, 0x78,  /* pixel (0,0) */
  0x90, 0xab, 0xcd, 0xef,  /* pixel (0,1) */
  0x87, 0x65, 0x43, 0x21,  /* pixel (1,0) */
  0x11, 0x22, 0x33, 0x44   /* pixel (1,1) */
};

static const uint8 kRgba8888IonRawBigEndian3x3ImageBytes[] = {
  0x12, 0x34, 0x56, 0x78,  /* pixel (0,0) */
  0x90, 0xab, 0xcd, 0xef,  /* pixel (0,1) */
  0xfe, 0xdc, 0xba, 0x09,  /* pixel (0,2) */
  0x87, 0x65, 0x43, 0x21,  /* pixel (1,0) */
  0x11, 0x22, 0x33, 0x44,  /* pixel (1,1) */
  0x55, 0x66, 0x77, 0x88,  /* pixel (1,2) */
  0x99, 0x00, 0xaa, 0xbb,  /* pixel (2,0) */
  0xcc, 0xdd, 0xee, 0xff,  /* pixel (2,1) */
  0x1a, 0x2b, 0x3c, 0x4d   /* pixel (2,2) */
};

static const uint8 kRgba8888IonRawLittleEndian3x3ImageBytes[] = {
  0x78, 0x56, 0x34, 0x12,  /* pixel (0,0) */
  0xef, 0xcd, 0xab, 0x90,  /* pixel (0,1) */
  0x09, 0xba, 0xdc, 0xfe,  /* pixel (0,2) */
  0x21, 0x43, 0x65, 0x87,  /* pixel (1,0) */
  0x44, 0x33, 0x22, 0x11,  /* pixel (1,1) */
  0x88, 0x77, 0x66, 0x55,  /* pixel (1,2) */
  0xbb, 0xaa, 0x00, 0x99,  /* pixel (2,0) */
  0xff, 0xee, 0xdd, 0xcc,  /* pixel (2,1) */
  0x4d, 0x3c, 0x2b, 0x1a   /* pixel (2,2) */
};

ION_STATIC_ASSERT(
    ARRAYSIZE(kRgba8888IonRawBigEndian3x3ImageBytes) ==
    ARRAYSIZE(kRgba8888IonRawLittleEndian3x3ImageBytes),
    "kRgba8888IonRaw{Big|Little}Endian3x3ImageBytes must have the same size");

static const uint8 kRgb565IonRawBigEndian3x3ImageBytes[] = {
  0x12, 0x34, /* pixel (0,0) */
  0x56, 0x78, /* pixel (0,1) */
  0x90, 0xab, /* pixel (0,2) */
  0xcd, 0xef, /* pixel (1,0) */
  0xfe, 0xdc, /* pixel (1,1) */
  0xba, 0x09, /* pixel (1,2) */
  0x87, 0x65, /* pixel (2,0) */
  0x43, 0x21, /* pixel (2,1) */
  0x1a, 0x2b  /* pixel (2,2) */
};

static const uint8 kRgb565IonRawLittleEndian3x3ImageBytes[] = {
  0x34, 0x12, /* pixel (0,0) */
  0x78, 0x56, /* pixel (0,1) */
  0xab, 0x90, /* pixel (0,2) */
  0xef, 0xcd, /* pixel (1,0) */
  0xdc, 0xfe, /* pixel (1,1) */
  0x09, 0xba, /* pixel (1,2) */
  0x65, 0x87, /* pixel (2,0) */
  0x21, 0x43, /* pixel (2,1) */
  0x2b, 0x1a  /* pixel (2,2) */
};

ION_STATIC_ASSERT(
    ARRAYSIZE(kRgb565IonRawBigEndian3x3ImageBytes) ==
    ARRAYSIZE(kRgb565IonRawLittleEndian3x3ImageBytes),
    "kRgb565IonRaw{Big|Little}Endian3x3ImageBytes must have the same size");

static const uint8 kRgba4444IonRawBigEndian3x3ImageBytes[] = {
  0x12, 0x34, /* pixel (0,0) */
  0x56, 0x78, /* pixel (0,1) */
  0x90, 0xab, /* pixel (0,2) */
  0xcd, 0xef, /* pixel (1,0) */
  0xfe, 0xdc, /* pixel (1,1) */
  0xba, 0x09, /* pixel (1,2) */
  0x87, 0x65, /* pixel (2,0) */
  0x43, 0x21, /* pixel (2,1) */
  0x1a, 0x2b  /* pixel (2,2) */
};

static const uint8 kRgba4444IonRawLittleEndian3x3ImageBytes[] = {
  0x34, 0x12, /* pixel (0,0) */
  0x78, 0x56, /* pixel (0,1) */
  0xab, 0x90, /* pixel (0,2) */
  0xef, 0xcd, /* pixel (1,0) */
  0xdc, 0xfe, /* pixel (1,1) */
  0x09, 0xba, /* pixel (1,2) */
  0x65, 0x87, /* pixel (2,0) */
  0x21, 0x43, /* pixel (2,1) */
  0x2b, 0x1a  /* pixel (2,2) */
};

ION_STATIC_ASSERT(
    ARRAYSIZE(kRgba4444IonRawBigEndian3x3ImageBytes) ==
    ARRAYSIZE(kRgba4444IonRawLittleEndian3x3ImageBytes),
    "kRgba4444IonRaw{Big|Little}Endian3x3ImageBytes must have the same size");

static const uint8 kAlphaIonRaw3x3ImageBytes[] = {
  0x12, /* pixel (0,0) */
  0x34, /* pixel (0,1) */
  0x56, /* pixel (0,2) */
  0x78, /* pixel (1,0) */
  0x90, /* pixel (1,1) */
  0xab, /* pixel (1,2) */
  0xcd, /* pixel (2,0) */
  0xef, /* pixel (2,1) */
  0x1a, /* pixel (2,2) */
};

static bool IsLittleEndianSystem() {
  static const uint16 kOne = 1;
  static const uint8* kOneAsBytes = reinterpret_cast<const uint8*>(&kOne);
  static const bool kIsLittleEndianSystem = (kOneAsBytes[0] == 1);
  return kIsLittleEndianSystem;
}

static const size_t kExpectedRgba8888IonRaw3x3ImageSizeInBytes =
    ARRAYSIZE(kRgba8888IonRawBigEndian3x3ImageBytes);

static const size_t kExpectedRgb565IonRaw3x3ImageSizeInBytes =
    ARRAYSIZE(kRgb565IonRawBigEndian3x3ImageBytes);

static const size_t kExpectedRgba4444IonRaw3x3ImageSizeInBytes =
    ARRAYSIZE(kRgba4444IonRawBigEndian3x3ImageBytes);

static const uint8* kExpectedRgba8888IonRaw3x3ImageBytes =
    IsLittleEndianSystem() ? kRgba8888IonRawLittleEndian3x3ImageBytes :
                             kRgba8888IonRawBigEndian3x3ImageBytes;

static const uint8* kExpectedRgb565IonRaw3x3ImageBytes =
    IsLittleEndianSystem() ? kRgb565IonRawLittleEndian3x3ImageBytes :
                             kRgb565IonRawBigEndian3x3ImageBytes;

static const uint8* kExpectedRgba4444IonRaw3x3ImageBytes =
    IsLittleEndianSystem() ? kRgba4444IonRawLittleEndian3x3ImageBytes :
                             kRgba4444IonRawBigEndian3x3ImageBytes;

// These aren't the actual pixel values, but this is easier to see.  To compare
// with this expectation interpret '.' as a 0x00 and '#' as 0xFF.
static const uint8 kExpectedLumAlpha48x48ImageBytes[] =
  "................................................"
  "................................................"
  "................................................"
  "................................................"
  "................................................"
  "................................................"
  "................................................"
  "................................................"
  "................................................"
  "................................................"
  "................................................"
  "................................................"
  "...................##########..................."
  "................################................"
  "...............##################..............."
  "...............##################..............."
  "...............##################..............."
  "...............##..............##..............."
  "...............##..............##..............."
  "..............###..............###.............."
  "..............###..............###.............."
  "..............###..............###.............."
  "..............###..............###.............."
  "..............###..............###.............."
  "..............###..............###.............."
  "..............####################.............."
  "..............####################.............."
  "..............####################.............."
  "..............###...########...###.............."
  "..............###...########...###.............."
  "..............####################.............."
  "..............####################.............."
  "..............####################.............."
  ".................###........###................."
  ".................###........###................."
  ".................###........###................."
  "................................................"
  "................................................"
  "................................................"
  "................................................"
  "................................................"
  "................................................"
  "................................................"
  "................................................"
  "................................................"
  "................................................"
  "................................................"
  "................................................";

}  // namespace testing
}  // namespace image
}  // namespace ion

#endif  // ION_IMAGE_TESTS_IMAGE_BYTES_H_
