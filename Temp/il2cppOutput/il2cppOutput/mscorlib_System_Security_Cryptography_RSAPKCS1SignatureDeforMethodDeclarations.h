#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct RSAPKCS1SignatureDeformatter_t753;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t443;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t112;

// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor()
extern "C" void RSAPKCS1SignatureDeformatter__ctor_m6871 (RSAPKCS1SignatureDeformatter_t753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1SignatureDeformatter__ctor_m3340 (RSAPKCS1SignatureDeformatter_t753 * __this, AsymmetricAlgorithm_t443 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void RSAPKCS1SignatureDeformatter_SetHashAlgorithm_m6872 (RSAPKCS1SignatureDeformatter_t753 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1SignatureDeformatter_SetKey_m6873 (RSAPKCS1SignatureDeformatter_t753 * __this, AsymmetricAlgorithm_t443 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSAPKCS1SignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool RSAPKCS1SignatureDeformatter_VerifySignature_m6874 (RSAPKCS1SignatureDeformatter_t753 * __this, ByteU5BU5D_t112* ___rgbHash, ByteU5BU5D_t112* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
