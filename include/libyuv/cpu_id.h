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

#if defined(__ARM_NEON__) && (defined(__arm__) || defined(__aarch64__))
static bool Cpu_Has_NEON = true;
#endif

static bool Cpu_Has_MSA = false;
static bool Cpu_Has_MMI = false;
static bool Cpu_Has_ERMS = false;

#if defined(__x86_64__) || defined(__i386__)
static bool Cpu_Has_X86 = true;
static bool Cpu_Has_AVX = true;
static bool Cpu_Has_AVX2 = true;
static bool Cpu_Has_SSSE2 = true;
static bool Cpu_Has_SSSE3 = true;
static bool Cpu_Has_SSE42 = true;
#else
static bool Cpu_Has_X86 = false;
static bool Cpu_Has_AVX = false;
static bool Cpu_Has_AVX2 = false;
static bool Cpu_Has_SSSE2 = false;
static bool Cpu_Has_SSSE3 = false;
static bool Cpu_Has_SSE42 = false;
#endif

static bool Cpu_Has_FMA3 = false;

#ifdef __cplusplus
}  // extern "C"
}  // namespace libyuv
#endif

#endif  // INCLUDE_LIBYUV_CPU_ID_H_
