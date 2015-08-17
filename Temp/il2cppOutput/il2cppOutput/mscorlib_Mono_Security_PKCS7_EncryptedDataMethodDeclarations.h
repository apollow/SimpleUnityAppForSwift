#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t860;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t859;
// System.Byte[]
struct ByteU5BU5D_t112;
// Mono.Security.ASN1
struct ASN1_t847;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m4682 (EncryptedData_t860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m4683 (EncryptedData_t860 * __this, ASN1_t847 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t859 * EncryptedData_get_EncryptionAlgorithm_m4684 (EncryptedData_t860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t112* EncryptedData_get_EncryptedContent_m4685 (EncryptedData_t860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
