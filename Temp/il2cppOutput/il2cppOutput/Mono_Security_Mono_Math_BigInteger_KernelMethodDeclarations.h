#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/Kernel
struct Kernel_t634;
// Mono.Math.BigInteger
struct BigInteger_t632;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t744;
// System.UInt32[]
struct UInt32U5BU5D_t617;
// Mono.Math.BigInteger/Sign
#include "Mono_Security_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t632 * Kernel_AddSameSign_m2498 (Object_t * __this /* static, unused */, BigInteger_t632 * ___bi1, BigInteger_t632 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t632 * Kernel_Subtract_m2499 (Object_t * __this /* static, unused */, BigInteger_t632 * ___big, BigInteger_t632 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_MinusEq_m2500 (Object_t * __this /* static, unused */, BigInteger_t632 * ___big, BigInteger_t632 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_PlusEq_m2501 (Object_t * __this /* static, unused */, BigInteger_t632 * ___bi1, BigInteger_t632 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" int32_t Kernel_Compare_m2502 (Object_t * __this /* static, unused */, BigInteger_t632 * ___bi1, BigInteger_t632 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_SingleByteDivideInPlace_m2503 (Object_t * __this /* static, unused */, BigInteger_t632 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_DwordMod_m2504 (Object_t * __this /* static, unused */, BigInteger_t632 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
extern "C" BigIntegerU5BU5D_t744* Kernel_DwordDivMod_m2505 (Object_t * __this /* static, unused */, BigInteger_t632 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigIntegerU5BU5D_t744* Kernel_multiByteDivide_m2506 (Object_t * __this /* static, unused */, BigInteger_t632 * ___bi1, BigInteger_t632 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t632 * Kernel_LeftShift_m2507 (Object_t * __this /* static, unused */, BigInteger_t632 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t632 * Kernel_RightShift_m2508 (Object_t * __this /* static, unused */, BigInteger_t632 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
extern "C" void Kernel_Multiply_m2509 (Object_t * __this /* static, unused */, UInt32U5BU5D_t617* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t617* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t617* ___d, uint32_t ___dOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
extern "C" void Kernel_MultiplyMod2p32pmod_m2510 (Object_t * __this /* static, unused */, UInt32U5BU5D_t617* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t617* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t617* ___d, int32_t ___dOffset, int32_t ___mod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_modInverse_m2511 (Object_t * __this /* static, unused */, BigInteger_t632 * ___bi, uint32_t ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t632 * Kernel_modInverse_m2512 (Object_t * __this /* static, unused */, BigInteger_t632 * ___bi, BigInteger_t632 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
