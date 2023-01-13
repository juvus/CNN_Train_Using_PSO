/**
 * ================================================================================
 * @file include/utils.h
 * @author Dmitry Safonov (juvusoft@gmail.com)
 * @brief Header file with different common deffinitions. This header file could be
 * included many times. 
 * @version 0.1
 * @date 2022-12-22
 * ================================================================================ 
 */

#ifndef CNN_PSO_PROJECT_UTILS_H_
#define CNN_PSO_PROJECT_UTILS_H_

#include <cfloat>
#include <cstdint>

// Redefined types.
typedef int8_t s8;  // 8 bits (1 byte) signed integer. [-128, 127].
typedef uint8_t u8;  // 8 bits (1 byte) unsigned integer. [0, 255].
typedef int16_t s16;  // 16 bits (2 bytes) signed integer. [-32768, 32767].
typedef uint16_t u16;  // 16 bits (2 bytes) unsigned integer. [0, 65535].
typedef int32_t s32;  // 32 bits (4 bytes) signed integer. [-2147483648, 2147483647].
typedef uint32_t u32;  // 32 bits (4 bytes) unsigned integer. [0, 4294967295].
typedef int64_t s64;  // 64 bits (8 bytes) signed integer. [-2^(64-1), 2^(64-1)-1].
typedef uint64_t u64;  // 64 bits (8 bytes) unsigned integer. [0, 2^64].
typedef float f32;  // 32 bits floating point number. [1.2E-38, 3.4E+38]. 8 signif. digits.
typedef double f64;  // 64 bits floating point number. [2.3E-308, 1.7E+308]. 16 signif. digits.

// Macro to suppress "unused function parameter".
#define UNUSED(x) (void)(x)

#endif  // CNN_PSO_PROJECT_UTILS_H_
