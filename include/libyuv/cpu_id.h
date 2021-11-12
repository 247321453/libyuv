/*
 *  Copyright 2011 The LibYuv Project Authors. All rights reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS. All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#ifndef INCLUDE_LIBYUV_CPU_ID_H_
#define INCLUDE_LIBYUV_CPU_ID_H_

#include "libyuv/basic_types.h"

#ifdef __cplusplus
namespace libyuv {
extern "C" {
#endif

//TestCpuFlag(kCpuHasNEON)
#if defined(__ARM_NEON__) && (defined(__arm__) || defined(__aarch64__))
static bool Cpu_Has_NEON = true;
#else
static bool Cpu_Has_NEON = false;
#endif

//Cpu_Has_ERMS
static bool Cpu_Has_ERMS = false;
//Cpu_Has_FMA3
static bool Cpu_Has_FMA3 = false;

#if defined(__x86_64__) || defined(__i386__)
static bool Cpu_Has_X86 = true;
static bool Cpu_Has_AVX = true;
static bool Cpu_Has_AVX2 = true;
static bool Cpu_Has_SSSE2 = true;
static bool Cpu_Has_SSSE3 = true;
static bool Cpu_Has_SSE41 = true;
static bool Cpu_Has_SSE42 = true;
#else
//Cpu_Has_X86
static bool Cpu_Has_X86 = false;
//Cpu_Has_AVX
static bool Cpu_Has_AVX = false;
//Cpu_Has_AVX2
static bool Cpu_Has_AVX2 = false;
//Cpu_Has_SSSE2
static bool Cpu_Has_SSSE2 = false;
//Cpu_Has_SSSE3
static bool Cpu_Has_SSSE3 = false;
//Cpu_Has_SSE41
static bool Cpu_Has_SSE41 = false;
//Cpu_Has_SSE42
static bool Cpu_Has_SSE42 = false;
#endif

#ifdef __cplusplus
}  // extern "C"
}  // namespace libyuv
#endif

#endif  // INCLUDE_LIBYUV_CPU_ID_H_
