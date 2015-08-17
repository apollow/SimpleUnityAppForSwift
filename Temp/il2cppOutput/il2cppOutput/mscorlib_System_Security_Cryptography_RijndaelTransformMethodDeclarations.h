#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t1207;
// System.Security.Cryptography.Rijndael
struct Rijndael_t759;
// System.Byte[]
struct ByteU5BU5D_t112;
// System.UInt32[]
struct UInt32U5BU5D_t617;

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RijndaelTransform__ctor_m6888 (RijndaelTransform_t1207 * __this, Rijndael_t759 * ___algo, bool ___encryption, ByteU5BU5D_t112* ___key, ByteU5BU5D_t112* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
extern "C" void RijndaelTransform__cctor_m6889 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
extern "C" void RijndaelTransform_Clear_m6890 (RijndaelTransform_t1207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
extern "C" void RijndaelTransform_ECB_m6891 (RijndaelTransform_t1207 * __this, ByteU5BU5D_t112* ___input, ByteU5BU5D_t112* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
extern "C" uint32_t RijndaelTransform_SubByte_m6892 (RijndaelTransform_t1207 * __this, uint32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt128_m6893 (RijndaelTransform_t1207 * __this, ByteU5BU5D_t112* ___indata, ByteU5BU5D_t112* ___outdata, UInt32U5BU5D_t617* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt192_m6894 (RijndaelTransform_t1207 * __this, ByteU5BU5D_t112* ___indata, ByteU5BU5D_t112* ___outdata, UInt32U5BU5D_t617* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt256_m6895 (RijndaelTransform_t1207 * __this, ByteU5BU5D_t112* ___indata, ByteU5BU5D_t112* ___outdata, UInt32U5BU5D_t617* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt128_m6896 (RijndaelTransform_t1207 * __this, ByteU5BU5D_t112* ___indata, ByteU5BU5D_t112* ___outdata, UInt32U5BU5D_t617* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt192_m6897 (RijndaelTransform_t1207 * __this, ByteU5BU5D_t112* ___indata, ByteU5BU5D_t112* ___outdata, UInt32U5BU5D_t617* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt256_m6898 (RijndaelTransform_t1207 * __this, ByteU5BU5D_t112* ___indata, ByteU5BU5D_t112* ___outdata, UInt32U5BU5D_t617* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
