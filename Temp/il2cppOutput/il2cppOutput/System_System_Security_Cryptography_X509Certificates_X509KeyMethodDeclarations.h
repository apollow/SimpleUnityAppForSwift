#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
struct X509KeyUsageExtension_t475;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t444;
// System.Byte[]
struct ByteU5BU5D_t112;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags
#include "System_System_Security_Cryptography_X509Certificates_X509Key_0.h"
// System.Security.Cryptography.AsnDecodeStatus
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor()
extern "C" void X509KeyUsageExtension__ctor_m1730 (X509KeyUsageExtension_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C" void X509KeyUsageExtension__ctor_m1731 (X509KeyUsageExtension_t475 * __this, AsnEncodedData_t444 * ___encodedKeyUsage, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags,System.Boolean)
extern "C" void X509KeyUsageExtension__ctor_m1732 (X509KeyUsageExtension_t475 * __this, int32_t ___keyUsages, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::get_KeyUsages()
extern "C" int32_t X509KeyUsageExtension_get_KeyUsages_m1733 (X509KeyUsageExtension_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C" void X509KeyUsageExtension_CopyFrom_m1734 (X509KeyUsageExtension_t475 * __this, AsnEncodedData_t444 * ___encodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::GetValidFlags(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags)
extern "C" int32_t X509KeyUsageExtension_GetValidFlags_m1735 (X509KeyUsageExtension_t475 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Decode(System.Byte[])
extern "C" int32_t X509KeyUsageExtension_Decode_m1736 (X509KeyUsageExtension_t475 * __this, ByteU5BU5D_t112* ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Encode()
extern "C" ByteU5BU5D_t112* X509KeyUsageExtension_Encode_m1737 (X509KeyUsageExtension_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::ToString(System.Boolean)
extern "C" String_t* X509KeyUsageExtension_ToString_m1738 (X509KeyUsageExtension_t475 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
