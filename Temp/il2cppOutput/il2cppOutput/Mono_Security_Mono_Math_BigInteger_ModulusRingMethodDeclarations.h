#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t633;
// Mono.Math.BigInteger
struct BigInteger_t632;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m2492 (ModulusRing_t633 * __this, BigInteger_t632 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m2493 (ModulusRing_t633 * __this, BigInteger_t632 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t632 * ModulusRing_Multiply_m2494 (ModulusRing_t633 * __this, BigInteger_t632 * ___a, BigInteger_t632 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t632 * ModulusRing_Difference_m2495 (ModulusRing_t633 * __this, BigInteger_t632 * ___a, BigInteger_t632 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t632 * ModulusRing_Pow_m2496 (ModulusRing_t633 * __this, BigInteger_t632 * ___a, BigInteger_t632 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t632 * ModulusRing_Pow_m2497 (ModulusRing_t633 * __this, uint32_t ___b, BigInteger_t632 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
