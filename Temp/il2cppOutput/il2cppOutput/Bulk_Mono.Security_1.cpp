#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_4.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_4MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// Mono.Security.Protocol.Tls.Context
#include "Mono_Security_Mono_Security_Protocol_Tls_Context.h"
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0.h"
// Mono.Security.Protocol.Tls.TlsServerSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsServerSettings.h"
// Mono.Security.X509.X509CertificateCollection
#include "Mono_Security_Mono_Security_X509_X509CertificateCollection.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// Mono.Security.X509.X509Certificate
#include "Mono_Security_Mono_Security_X509_X509Certificate.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// Mono.Security.Protocol.Tls.ClientContext
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientContext.h"
// Mono.Security.X509.Extensions.KeyUsages
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsages.h"
// Mono.Security.X509.Extensions.KeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsageExtensio.h"
// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_ExtendedKeyUsage.h"
// Mono.Security.X509.X509Extension
#include "Mono_Security_Mono_Security_X509_X509Extension.h"
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType_0.h"
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
// Mono.Security.Protocol.Tls.SecurityParameters
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityParameters.h"
// Mono.Security.Protocol.Tls.CipherSuite
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuite.h"
// Mono.Security.X509.X509ExtensionCollection
#include "Mono_Security_Mono_Security_X509_X509ExtensionCollection.h"
// System.String
#include "mscorlib_System_String.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType.h"
// Mono.Security.Protocol.Tls.AlertDescription
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescription.h"
// Mono.Security.Protocol.Tls.ValidationResult
#include "Mono_Security_Mono_Security_Protocol_Tls_ValidationResult.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C.h"
// Mono.Security.X509.X509Chain
#include "Mono_Security_Mono_Security_X509_X509Chain.h"
// Mono.Security.X509.X509ChainStatusFlags
#include "Mono_Security_Mono_Security_X509_X509ChainStatusFlags.h"
// Mono.Security.Protocol.Tls.SslClientStream
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClientStream.h"
// Mono.Security.Protocol.Tls.TlsException
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsException.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Array
#include "mscorlib_System_Array.h"
// Mono.Security.X509.Extensions.SubjectAltNameExtension
#include "Mono_Security_Mono_Security_X509_Extensions_SubjectAltNameEx.h"
// Mono.Security.Protocol.Tls.TlsClientSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsClientSettings.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_Regex.h"
// System.Text.RegularExpressions.MatchCollection
#include "System_System_Text_RegularExpressions_MatchCollection.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_Match.h"
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollection.h"
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0MethodDeclarations.h"
// Mono.Security.Protocol.Tls.Context
#include "Mono_Security_Mono_Security_Protocol_Tls_ContextMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsServerSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsServerSettingsMethodDeclarations.h"
// Mono.Security.X509.X509CertificateCollection
#include "Mono_Security_Mono_Security_X509_X509CertificateCollectionMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsStream
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStreamMethodDeclarations.h"
// Mono.Security.X509.X509Certificate
#include "Mono_Security_Mono_Security_X509_X509CertificateMethodDeclarations.h"
// Mono.Security.Protocol.Tls.SecurityParameters
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityParametersMethodDeclarations.h"
// Mono.Security.Protocol.Tls.CipherSuite
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteMethodDeclarations.h"
// Mono.Security.X509.X509ExtensionCollection
#include "Mono_Security_Mono_Security_X509_X509ExtensionCollectionMethodDeclarations.h"
// Mono.Security.X509.Extensions.KeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsageExtensioMethodDeclarations.h"
// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_ExtendedKeyUsageMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType_0MethodDeclarations.h"
// Mono.Security.Protocol.Tls.ClientContext
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientContextMethodDeclarations.h"
// Mono.Security.Protocol.Tls.SslClientStream
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClientStreamMethodDeclarations.h"
// Mono.Security.Protocol.Tls.ValidationResult
#include "Mono_Security_Mono_Security_Protocol_Tls_ValidationResultMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsException
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsExceptionMethodDeclarations.h"
// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509CMethodDeclarations.h"
// Mono.Security.X509.X509Chain
#include "Mono_Security_Mono_Security_X509_X509ChainMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsClientSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsClientSettingsMethodDeclarations.h"
// Mono.Security.X509.Extensions.SubjectAltNameExtension
#include "Mono_Security_Mono_Security_X509_Extensions_SubjectAltNameExMethodDeclarations.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
// System.Text.RegularExpressions.MatchCollection
#include "System_System_Text_RegularExpressions_MatchCollectionMethodDeclarations.h"
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_GroupMethodDeclarations.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_MatchMethodDeclarations.h"
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollectionMethodDeclarations.h"
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_CaptureMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerCertificate__ctor_m3257 (TlsServerCertificate_t727 * __this, Context_t677 * ___context, ByteU5BU5D_t112* ___buffer, const MethodInfo* method)
{
	{
		Context_t677 * L_0 = ___context;
		ByteU5BU5D_t112* L_1 = ___buffer;
		HandshakeMessage__ctor_m3222(__this, L_0, ((int32_t)11), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Update()
extern "C" void TlsServerCertificate_Update_m3258 (TlsServerCertificate_t727 * __this, const MethodInfo* method)
{
	{
		HandshakeMessage_Update_m3227(__this, /*hidden argument*/NULL);
		Context_t677 * L_0 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		TlsServerSettings_t688 * L_1 = Context_get_ServerSettings_m2925(L_0, /*hidden argument*/NULL);
		X509CertificateCollection_t597 * L_2 = (__this->___certificates_9);
		NullCheck(L_1);
		TlsServerSettings_set_Certificates_m3184(L_1, L_2, /*hidden argument*/NULL);
		Context_t677 * L_3 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		TlsServerSettings_t688 * L_4 = Context_get_ServerSettings_m2925(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		TlsServerSettings_UpdateCertificateRSA_m3193(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsSsl3()
extern "C" void TlsServerCertificate_ProcessAsSsl3_m3259 (TlsServerCertificate_t727 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(24 /* System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsTls1() */, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsTls1()
extern TypeInfo* X509CertificateCollection_t597_il2cpp_TypeInfo_var;
extern TypeInfo* X509Certificate_t454_il2cpp_TypeInfo_var;
extern "C" void TlsServerCertificate_ProcessAsTls1_m3260 (TlsServerCertificate_t727 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		X509CertificateCollection_t597_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(418);
		X509Certificate_t454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(299);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t112* V_3 = {0};
	X509Certificate_t454 * V_4 = {0};
	{
		X509CertificateCollection_t597 * L_0 = (X509CertificateCollection_t597 *)il2cpp_codegen_object_new (X509CertificateCollection_t597_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m2722(L_0, /*hidden argument*/NULL);
		__this->___certificates_9 = L_0;
		V_0 = 0;
		int32_t L_1 = TlsStream_ReadInt24_m3206(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_004d;
	}

IL_0019:
	{
		int32_t L_2 = TlsStream_ReadInt24_m3206(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)3));
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = V_2;
		ByteU5BU5D_t112* L_6 = TlsStream_ReadBytes_m3207(__this, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		ByteU5BU5D_t112* L_7 = V_3;
		X509Certificate_t454 * L_8 = (X509Certificate_t454 *)il2cpp_codegen_object_new (X509Certificate_t454_il2cpp_TypeInfo_var);
		X509Certificate__ctor_m2349(L_8, L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		X509CertificateCollection_t597 * L_9 = (__this->___certificates_9);
		X509Certificate_t454 * L_10 = V_4;
		NullCheck(L_9);
		X509CertificateCollection_Add_m2725(L_9, L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		int32_t L_12 = V_2;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_004d:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0019;
		}
	}
	{
		X509CertificateCollection_t597 * L_15 = (__this->___certificates_9);
		TlsServerCertificate_validateCertificates_m3262(__this, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkCertificateUsage(Mono.Security.X509.X509Certificate)
extern TypeInfo* ClientContext_t682_il2cpp_TypeInfo_var;
extern TypeInfo* KeyUsageExtension_t666_il2cpp_TypeInfo_var;
extern TypeInfo* ExtendedKeyUsageExtension_t663_il2cpp_TypeInfo_var;
extern TypeInfo* NetscapeCertTypeExtension_t668_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral461;
extern Il2CppCodeGenString* _stringLiteral468;
extern Il2CppCodeGenString* _stringLiteral472;
extern Il2CppCodeGenString* _stringLiteral925;
extern Il2CppCodeGenString* _stringLiteral500;
extern "C" bool TlsServerCertificate_checkCertificateUsage_m3261 (TlsServerCertificate_t727 * __this, X509Certificate_t454 * ___cert, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientContext_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		KeyUsageExtension_t666_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(492);
		ExtendedKeyUsageExtension_t663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(434);
		NetscapeCertTypeExtension_t668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(493);
		_stringLiteral461 = il2cpp_codegen_string_literal_from_index(461);
		_stringLiteral468 = il2cpp_codegen_string_literal_from_index(468);
		_stringLiteral472 = il2cpp_codegen_string_literal_from_index(472);
		_stringLiteral925 = il2cpp_codegen_string_literal_from_index(925);
		_stringLiteral500 = il2cpp_codegen_string_literal_from_index(500);
		s_Il2CppMethodIntialized = true;
	}
	ClientContext_t682 * V_0 = {0};
	int32_t V_1 = {0};
	KeyUsageExtension_t666 * V_2 = {0};
	ExtendedKeyUsageExtension_t663 * V_3 = {0};
	X509Extension_t573 * V_4 = {0};
	NetscapeCertTypeExtension_t668 * V_5 = {0};
	int32_t V_6 = {0};
	int32_t G_B19_0 = 0;
	int32_t G_B26_0 = 0;
	{
		Context_t677 * L_0 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		V_0 = ((ClientContext_t682 *)Castclass(L_0, ClientContext_t682_il2cpp_TypeInfo_var));
		X509Certificate_t454 * L_1 = ___cert;
		NullCheck(L_1);
		int32_t L_2 = X509Certificate_get_Version_m2339(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) >= ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		V_1 = 0;
		ClientContext_t682 * L_3 = V_0;
		NullCheck(L_3);
		SecurityParameters_t690 * L_4 = Context_get_Negotiating_m2969(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		CipherSuite_t678 * L_5 = SecurityParameters_get_Cipher_m3039(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = CipherSuite_get_ExchangeAlgorithmType_m2835(L_5, /*hidden argument*/NULL);
		V_6 = L_6;
		int32_t L_7 = V_6;
		if (L_7 == 0)
		{
			goto IL_0061;
		}
		if (L_7 == 1)
		{
			goto IL_0068;
		}
		if (L_7 == 2)
		{
			goto IL_006a;
		}
		if (L_7 == 3)
		{
			goto IL_0059;
		}
		if (L_7 == 4)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_006a;
	}

IL_004e:
	{
		V_1 = ((int32_t)128);
		goto IL_006a;
	}

IL_0059:
	{
		V_1 = ((int32_t)32);
		goto IL_006a;
	}

IL_0061:
	{
		V_1 = 8;
		goto IL_006a;
	}

IL_0068:
	{
		return 0;
	}

IL_006a:
	{
		V_2 = (KeyUsageExtension_t666 *)NULL;
		V_3 = (ExtendedKeyUsageExtension_t663 *)NULL;
		X509Certificate_t454 * L_8 = ___cert;
		NullCheck(L_8);
		X509ExtensionCollection_t600 * L_9 = X509Certificate_get_Extensions_m2365(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		X509Extension_t573 * L_10 = X509ExtensionCollection_get_Item_m2366(L_9, _stringLiteral461, /*hidden argument*/NULL);
		V_4 = L_10;
		X509Extension_t573 * L_11 = V_4;
		if (!L_11)
		{
			goto IL_008f;
		}
	}
	{
		X509Extension_t573 * L_12 = V_4;
		KeyUsageExtension_t666 * L_13 = (KeyUsageExtension_t666 *)il2cpp_codegen_object_new (KeyUsageExtension_t666_il2cpp_TypeInfo_var);
		KeyUsageExtension__ctor_m2790(L_13, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
	}

IL_008f:
	{
		X509Certificate_t454 * L_14 = ___cert;
		NullCheck(L_14);
		X509ExtensionCollection_t600 * L_15 = X509Certificate_get_Extensions_m2365(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		X509Extension_t573 * L_16 = X509ExtensionCollection_get_Item_m2366(L_15, _stringLiteral468, /*hidden argument*/NULL);
		V_4 = L_16;
		X509Extension_t573 * L_17 = V_4;
		if (!L_17)
		{
			goto IL_00b0;
		}
	}
	{
		X509Extension_t573 * L_18 = V_4;
		ExtendedKeyUsageExtension_t663 * L_19 = (ExtendedKeyUsageExtension_t663 *)il2cpp_codegen_object_new (ExtendedKeyUsageExtension_t663_il2cpp_TypeInfo_var);
		ExtendedKeyUsageExtension__ctor_m2781(L_19, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
	}

IL_00b0:
	{
		KeyUsageExtension_t666 * L_20 = V_2;
		if (!L_20)
		{
			goto IL_00f3;
		}
	}
	{
		ExtendedKeyUsageExtension_t663 * L_21 = V_3;
		if (!L_21)
		{
			goto IL_00f3;
		}
	}
	{
		KeyUsageExtension_t666 * L_22 = V_2;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		bool L_24 = KeyUsageExtension_Support_m2793(L_22, L_23, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_00ca;
		}
	}
	{
		return 0;
	}

IL_00ca:
	{
		ExtendedKeyUsageExtension_t663 * L_25 = V_3;
		NullCheck(L_25);
		ArrayList_t402 * L_26 = ExtendedKeyUsageExtension_get_KeyPurpose_m2784(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_27 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(27 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_26, _stringLiteral472);
		if (L_27)
		{
			goto IL_00f1;
		}
	}
	{
		ExtendedKeyUsageExtension_t663 * L_28 = V_3;
		NullCheck(L_28);
		ArrayList_t402 * L_29 = ExtendedKeyUsageExtension_get_KeyPurpose_m2784(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		bool L_30 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(27 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_29, _stringLiteral925);
		G_B19_0 = ((int32_t)(L_30));
		goto IL_00f2;
	}

IL_00f1:
	{
		G_B19_0 = 1;
	}

IL_00f2:
	{
		return G_B19_0;
	}

IL_00f3:
	{
		KeyUsageExtension_t666 * L_31 = V_2;
		if (!L_31)
		{
			goto IL_0101;
		}
	}
	{
		KeyUsageExtension_t666 * L_32 = V_2;
		int32_t L_33 = V_1;
		NullCheck(L_32);
		bool L_34 = KeyUsageExtension_Support_m2793(L_32, L_33, /*hidden argument*/NULL);
		return L_34;
	}

IL_0101:
	{
		ExtendedKeyUsageExtension_t663 * L_35 = V_3;
		if (!L_35)
		{
			goto IL_0130;
		}
	}
	{
		ExtendedKeyUsageExtension_t663 * L_36 = V_3;
		NullCheck(L_36);
		ArrayList_t402 * L_37 = ExtendedKeyUsageExtension_get_KeyPurpose_m2784(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		bool L_38 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(27 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_37, _stringLiteral472);
		if (L_38)
		{
			goto IL_012e;
		}
	}
	{
		ExtendedKeyUsageExtension_t663 * L_39 = V_3;
		NullCheck(L_39);
		ArrayList_t402 * L_40 = ExtendedKeyUsageExtension_get_KeyPurpose_m2784(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		bool L_41 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(27 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_40, _stringLiteral925);
		G_B26_0 = ((int32_t)(L_41));
		goto IL_012f;
	}

IL_012e:
	{
		G_B26_0 = 1;
	}

IL_012f:
	{
		return G_B26_0;
	}

IL_0130:
	{
		X509Certificate_t454 * L_42 = ___cert;
		NullCheck(L_42);
		X509ExtensionCollection_t600 * L_43 = X509Certificate_get_Extensions_m2365(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		X509Extension_t573 * L_44 = X509ExtensionCollection_get_Item_m2366(L_43, _stringLiteral500, /*hidden argument*/NULL);
		V_4 = L_44;
		X509Extension_t573 * L_45 = V_4;
		if (!L_45)
		{
			goto IL_015c;
		}
	}
	{
		X509Extension_t573 * L_46 = V_4;
		NetscapeCertTypeExtension_t668 * L_47 = (NetscapeCertTypeExtension_t668 *)il2cpp_codegen_object_new (NetscapeCertTypeExtension_t668_il2cpp_TypeInfo_var);
		NetscapeCertTypeExtension__ctor_m2795(L_47, L_46, /*hidden argument*/NULL);
		V_5 = L_47;
		NetscapeCertTypeExtension_t668 * L_48 = V_5;
		NullCheck(L_48);
		bool L_49 = NetscapeCertTypeExtension_Support_m2797(L_48, ((int32_t)64), /*hidden argument*/NULL);
		return L_49;
	}

IL_015c:
	{
		return 1;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::validateCertificates(Mono.Security.X509.X509CertificateCollection)
extern const Il2CppType* Int32_t327_0_0_0_var;
extern TypeInfo* ClientContext_t682_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t352_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t718_il2cpp_TypeInfo_var;
extern TypeInfo* X509Certificate_t456_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t402_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t327_il2cpp_TypeInfo_var;
extern TypeInfo* X509CertificateCollection_t597_il2cpp_TypeInfo_var;
extern TypeInfo* X509Chain_t659_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t74_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t501_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral926;
extern Il2CppCodeGenString* _stringLiteral927;
extern Il2CppCodeGenString* _stringLiteral928;
extern "C" void TlsServerCertificate_validateCertificates_m3262 (TlsServerCertificate_t727 * __this, X509CertificateCollection_t597 * ___certificates, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t327_0_0_0_var = il2cpp_codegen_type_from_index(35);
		ClientContext_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		Int64_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(149);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		TlsException_t718_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		X509Certificate_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(308);
		ArrayList_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		Int32_t327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(35);
		X509CertificateCollection_t597_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(418);
		X509Chain_t659_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		Exception_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(83);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		Int32U5BU5D_t501_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(348);
		_stringLiteral926 = il2cpp_codegen_string_literal_from_index(926);
		_stringLiteral927 = il2cpp_codegen_string_literal_from_index(927);
		_stringLiteral928 = il2cpp_codegen_string_literal_from_index(928);
		s_Il2CppMethodIntialized = true;
	}
	ClientContext_t682 * V_0 = {0};
	uint8_t V_1 = {0};
	ValidationResult_t710 * V_2 = {0};
	int64_t V_3 = 0;
	String_t* V_4 = {0};
	X509Certificate_t454 * V_5 = {0};
	X509Certificate_t456 * V_6 = {0};
	ArrayList_t402 * V_7 = {0};
	X509CertificateCollection_t597 * V_8 = {0};
	X509Chain_t659 * V_9 = {0};
	bool V_10 = false;
	Int32U5BU5D_t501* V_11 = {0};
	int64_t V_12 = 0;
	int32_t V_13 = {0};
	Exception_t74 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t74 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Context_t677 * L_0 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		V_0 = ((ClientContext_t682 *)Castclass(L_0, ClientContext_t682_il2cpp_TypeInfo_var));
		V_1 = ((int32_t)42);
		ClientContext_t682 * L_1 = V_0;
		NullCheck(L_1);
		SslClientStream_t681 * L_2 = ClientContext_get_SslStream_m2885(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean Mono.Security.Protocol.Tls.SslClientStream::get_HaveRemoteValidation2Callback() */, L_2);
		if (!L_3)
		{
			goto IL_00b4;
		}
	}
	{
		ClientContext_t682 * L_4 = V_0;
		NullCheck(L_4);
		SslClientStream_t681 * L_5 = ClientContext_get_SslStream_m2885(L_4, /*hidden argument*/NULL);
		X509CertificateCollection_t597 * L_6 = ___certificates;
		NullCheck(L_5);
		ValidationResult_t710 * L_7 = (ValidationResult_t710 *)VirtFuncInvoker1< ValidationResult_t710 *, X509CertificateCollection_t597 * >::Invoke(32 /* Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation2(Mono.Security.X509.X509CertificateCollection) */, L_5, L_6);
		V_2 = L_7;
		ValidationResult_t710 * L_8 = V_2;
		NullCheck(L_8);
		bool L_9 = ValidationResult_get_Trusted_m3046(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		return;
	}

IL_0038:
	{
		ValidationResult_t710 * L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11 = ValidationResult_get_ErrorCode_m3047(L_10, /*hidden argument*/NULL);
		V_3 = (((int64_t)L_11));
		int64_t L_12 = V_3;
		V_12 = L_12;
		int64_t L_13 = V_12;
		if ((((int64_t)L_13) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762487))))))))
		{
			goto IL_007f;
		}
	}
	{
		int64_t L_14 = V_12;
		if ((((int64_t)L_14) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762486))))))))
		{
			goto IL_0077;
		}
	}
	{
		int64_t L_15 = V_12;
		if ((((int64_t)L_15) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762495))))))))
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0087;
	}

IL_006f:
	{
		V_1 = ((int32_t)45);
		goto IL_008f;
	}

IL_0077:
	{
		V_1 = ((int32_t)48);
		goto IL_008f;
	}

IL_007f:
	{
		V_1 = ((int32_t)48);
		goto IL_008f;
	}

IL_0087:
	{
		V_1 = ((int32_t)46);
		goto IL_008f;
	}

IL_008f:
	{
		int64_t L_16 = V_3;
		int64_t L_17 = L_16;
		Object_t * L_18 = Box(Int64_t352_il2cpp_TypeInfo_var, &L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Format_m2331(NULL /*static, unused*/, _stringLiteral926, L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		uint8_t L_20 = V_1;
		String_t* L_21 = V_4;
		String_t* L_22 = String_Concat_m1205(NULL /*static, unused*/, _stringLiteral927, L_21, /*hidden argument*/NULL);
		TlsException_t718 * L_23 = (TlsException_t718 *)il2cpp_codegen_object_new (TlsException_t718_il2cpp_TypeInfo_var);
		TlsException__ctor_m3178(L_23, L_20, L_22, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_00b4:
	{
		X509CertificateCollection_t597 * L_24 = ___certificates;
		NullCheck(L_24);
		X509Certificate_t454 * L_25 = X509CertificateCollection_get_Item_m2345(L_24, 0, /*hidden argument*/NULL);
		V_5 = L_25;
		X509Certificate_t454 * L_26 = V_5;
		NullCheck(L_26);
		ByteU5BU5D_t112* L_27 = (ByteU5BU5D_t112*)VirtFuncInvoker0< ByteU5BU5D_t112* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_26);
		X509Certificate_t456 * L_28 = (X509Certificate_t456 *)il2cpp_codegen_object_new (X509Certificate_t456_il2cpp_TypeInfo_var);
		X509Certificate__ctor_m3375(L_28, L_27, /*hidden argument*/NULL);
		V_6 = L_28;
		ArrayList_t402 * L_29 = (ArrayList_t402 *)il2cpp_codegen_object_new (ArrayList_t402_il2cpp_TypeInfo_var);
		ArrayList__ctor_m2263(L_29, /*hidden argument*/NULL);
		V_7 = L_29;
		X509Certificate_t454 * L_30 = V_5;
		bool L_31 = TlsServerCertificate_checkCertificateUsage_m3261(__this, L_30, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_00f1;
		}
	}
	{
		ArrayList_t402 * L_32 = V_7;
		int32_t L_33 = ((int32_t)-2146762490);
		Object_t * L_34 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_32);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_32, L_34);
	}

IL_00f1:
	{
		X509Certificate_t454 * L_35 = V_5;
		bool L_36 = TlsServerCertificate_checkServerIdentity_m3263(__this, L_35, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_0110;
		}
	}
	{
		ArrayList_t402 * L_37 = V_7;
		int32_t L_38 = ((int32_t)-2146762481);
		Object_t * L_39 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_37);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_37, L_39);
	}

IL_0110:
	{
		X509CertificateCollection_t597 * L_40 = ___certificates;
		X509CertificateCollection_t597 * L_41 = (X509CertificateCollection_t597 *)il2cpp_codegen_object_new (X509CertificateCollection_t597_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m2723(L_41, L_40, /*hidden argument*/NULL);
		V_8 = L_41;
		X509CertificateCollection_t597 * L_42 = V_8;
		X509Certificate_t454 * L_43 = V_5;
		NullCheck(L_42);
		X509CertificateCollection_Remove_m2730(L_42, L_43, /*hidden argument*/NULL);
		X509CertificateCollection_t597 * L_44 = V_8;
		X509Chain_t659 * L_45 = (X509Chain_t659 *)il2cpp_codegen_object_new (X509Chain_t659_il2cpp_TypeInfo_var);
		X509Chain__ctor_m2733(L_45, L_44, /*hidden argument*/NULL);
		V_9 = L_45;
		V_10 = 0;
	}

IL_012d:
	try
	{ // begin try (depth: 1)
		X509Chain_t659 * L_46 = V_9;
		X509Certificate_t454 * L_47 = V_5;
		NullCheck(L_46);
		bool L_48 = X509Chain_Build_m2736(L_46, L_47, /*hidden argument*/NULL);
		V_10 = L_48;
		goto IL_0146;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t74 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t74_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_013d;
		throw e;
	}

CATCH_013d:
	{ // begin catch(System.Exception)
		V_10 = 0;
		goto IL_0146;
	} // end catch (depth: 1)

IL_0146:
	{
		bool L_49 = V_10;
		if (L_49)
		{
			goto IL_0243;
		}
	}
	{
		X509Chain_t659 * L_50 = V_9;
		NullCheck(L_50);
		int32_t L_51 = X509Chain_get_Status_m2734(L_50, /*hidden argument*/NULL);
		V_13 = L_51;
		int32_t L_52 = V_13;
		if ((((int32_t)L_52) == ((int32_t)1)))
		{
			goto IL_01d9;
		}
	}
	{
		int32_t L_53 = V_13;
		if ((((int32_t)L_53) == ((int32_t)2)))
		{
			goto IL_01c2;
		}
	}
	{
		int32_t L_54 = V_13;
		if ((((int32_t)L_54) == ((int32_t)8)))
		{
			goto IL_01ab;
		}
	}
	{
		int32_t L_55 = V_13;
		if ((((int32_t)L_55) == ((int32_t)((int32_t)32))))
		{
			goto IL_020d;
		}
	}
	{
		int32_t L_56 = V_13;
		if ((((int32_t)L_56) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0194;
		}
	}
	{
		int32_t L_57 = V_13;
		if ((((int32_t)L_57) == ((int32_t)((int32_t)65536))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0227;
	}

IL_0194:
	{
		ArrayList_t402 * L_58 = V_7;
		int32_t L_59 = ((int32_t)-2146869223);
		Object_t * L_60 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_59);
		NullCheck(L_58);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_58, L_60);
		goto IL_0243;
	}

IL_01ab:
	{
		ArrayList_t402 * L_61 = V_7;
		int32_t L_62 = ((int32_t)-2146869232);
		Object_t * L_63 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_62);
		NullCheck(L_61);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_61, L_63);
		goto IL_0243;
	}

IL_01c2:
	{
		ArrayList_t402 * L_64 = V_7;
		int32_t L_65 = ((int32_t)-2146762494);
		Object_t * L_66 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_65);
		NullCheck(L_64);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_64, L_66);
		goto IL_0243;
	}

IL_01d9:
	{
		V_1 = ((int32_t)45);
		ArrayList_t402 * L_67 = V_7;
		int32_t L_68 = ((int32_t)-2146762495);
		Object_t * L_69 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_68);
		NullCheck(L_67);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_67, L_69);
		goto IL_0243;
	}

IL_01f3:
	{
		V_1 = ((int32_t)48);
		ArrayList_t402 * L_70 = V_7;
		int32_t L_71 = ((int32_t)-2146762486);
		Object_t * L_72 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_71);
		NullCheck(L_70);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_70, L_72);
		goto IL_0243;
	}

IL_020d:
	{
		V_1 = ((int32_t)48);
		ArrayList_t402 * L_73 = V_7;
		int32_t L_74 = ((int32_t)-2146762487);
		Object_t * L_75 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_74);
		NullCheck(L_73);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_73, L_75);
		goto IL_0243;
	}

IL_0227:
	{
		V_1 = ((int32_t)46);
		ArrayList_t402 * L_76 = V_7;
		X509Chain_t659 * L_77 = V_9;
		NullCheck(L_77);
		int32_t L_78 = X509Chain_get_Status_m2734(L_77, /*hidden argument*/NULL);
		int32_t L_79 = L_78;
		Object_t * L_80 = Box(Int32_t327_il2cpp_TypeInfo_var, &L_79);
		NullCheck(L_76);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(25 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_76, L_80);
		goto IL_0243;
	}

IL_0243:
	{
		ArrayList_t402 * L_81 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_82 = Type_GetTypeFromHandle_m1315(NULL /*static, unused*/, LoadTypeToken(Int32_t327_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_81);
		Array_t * L_83 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(43 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_81, L_82);
		V_11 = ((Int32U5BU5D_t501*)Castclass(L_83, Int32U5BU5D_t501_il2cpp_TypeInfo_var));
		ClientContext_t682 * L_84 = V_0;
		NullCheck(L_84);
		SslClientStream_t681 * L_85 = ClientContext_get_SslStream_m2885(L_84, /*hidden argument*/NULL);
		X509Certificate_t456 * L_86 = V_6;
		Int32U5BU5D_t501* L_87 = V_11;
		NullCheck(L_85);
		bool L_88 = (bool)VirtFuncInvoker2< bool, X509Certificate_t456 *, Int32U5BU5D_t501* >::Invoke(31 /* System.Boolean Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[]) */, L_85, L_86, L_87);
		if (L_88)
		{
			goto IL_027b;
		}
	}
	{
		uint8_t L_89 = V_1;
		TlsException_t718 * L_90 = (TlsException_t718 *)il2cpp_codegen_object_new (TlsException_t718_il2cpp_TypeInfo_var);
		TlsException__ctor_m3178(L_90, L_89, _stringLiteral928, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_90);
	}

IL_027b:
	{
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkServerIdentity(Mono.Security.X509.X509Certificate)
extern TypeInfo* ClientContext_t682_il2cpp_TypeInfo_var;
extern TypeInfo* SubjectAltNameExtension_t669_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral499;
extern "C" bool TlsServerCertificate_checkServerIdentity_m3263 (TlsServerCertificate_t727 * __this, X509Certificate_t454 * ___cert, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientContext_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		SubjectAltNameExtension_t669_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		_stringLiteral499 = il2cpp_codegen_string_literal_from_index(499);
		s_Il2CppMethodIntialized = true;
	}
	ClientContext_t682 * V_0 = {0};
	String_t* V_1 = {0};
	X509Extension_t573 * V_2 = {0};
	SubjectAltNameExtension_t669 * V_3 = {0};
	String_t* V_4 = {0};
	StringU5BU5D_t204* V_5 = {0};
	int32_t V_6 = 0;
	String_t* V_7 = {0};
	StringU5BU5D_t204* V_8 = {0};
	int32_t V_9 = 0;
	{
		Context_t677 * L_0 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		V_0 = ((ClientContext_t682 *)Castclass(L_0, ClientContext_t682_il2cpp_TypeInfo_var));
		ClientContext_t682 * L_1 = V_0;
		NullCheck(L_1);
		TlsClientSettings_t689 * L_2 = Context_get_ClientSettings_m2926(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = TlsClientSettings_get_TargetHost_m3166(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		X509Certificate_t454 * L_4 = ___cert;
		NullCheck(L_4);
		X509ExtensionCollection_t600 * L_5 = X509Certificate_get_Extensions_m2365(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		X509Extension_t573 * L_6 = X509ExtensionCollection_get_Item_m2366(L_5, _stringLiteral499, /*hidden argument*/NULL);
		V_2 = L_6;
		X509Extension_t573 * L_7 = V_2;
		if (!L_7)
		{
			goto IL_00a4;
		}
	}
	{
		X509Extension_t573 * L_8 = V_2;
		SubjectAltNameExtension_t669 * L_9 = (SubjectAltNameExtension_t669 *)il2cpp_codegen_object_new (SubjectAltNameExtension_t669_il2cpp_TypeInfo_var);
		SubjectAltNameExtension__ctor_m2799(L_9, L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		SubjectAltNameExtension_t669 * L_10 = V_3;
		NullCheck(L_10);
		StringU5BU5D_t204* L_11 = SubjectAltNameExtension_get_DNSNames_m2801(L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		V_6 = 0;
		goto IL_0062;
	}

IL_0046:
	{
		StringU5BU5D_t204* L_12 = V_5;
		int32_t L_13 = V_6;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_12, L_14));
		String_t* L_15 = V_1;
		String_t* L_16 = V_4;
		bool L_17 = TlsServerCertificate_Match_m3265(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_005c;
		}
	}
	{
		return 1;
	}

IL_005c:
	{
		int32_t L_18 = V_6;
		V_6 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0062:
	{
		int32_t L_19 = V_6;
		StringU5BU5D_t204* L_20 = V_5;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
		{
			goto IL_0046;
		}
	}
	{
		SubjectAltNameExtension_t669 * L_21 = V_3;
		NullCheck(L_21);
		StringU5BU5D_t204* L_22 = SubjectAltNameExtension_get_IPAddresses_m2802(L_21, /*hidden argument*/NULL);
		V_8 = L_22;
		V_9 = 0;
		goto IL_0099;
	}

IL_007d:
	{
		StringU5BU5D_t204* L_23 = V_8;
		int32_t L_24 = V_9;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		V_7 = (*(String_t**)(String_t**)SZArrayLdElema(L_23, L_25));
		String_t* L_26 = V_7;
		String_t* L_27 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_28 = String_op_Equality_m1191(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_0093;
		}
	}
	{
		return 1;
	}

IL_0093:
	{
		int32_t L_29 = V_9;
		V_9 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_30 = V_9;
		StringU5BU5D_t204* L_31 = V_8;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)(((int32_t)(((Array_t *)L_31)->max_length))))))
		{
			goto IL_007d;
		}
	}

IL_00a4:
	{
		X509Certificate_t454 * L_32 = ___cert;
		NullCheck(L_32);
		String_t* L_33 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String Mono.Security.X509.X509Certificate::get_SubjectName() */, L_32);
		bool L_34 = TlsServerCertificate_checkDomainName_m3264(__this, L_33, /*hidden argument*/NULL);
		return L_34;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkDomainName(System.String)
extern TypeInfo* ClientContext_t682_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Regex_t387_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral929;
extern "C" bool TlsServerCertificate_checkDomainName_m3264 (TlsServerCertificate_t727 * __this, String_t* ___subjectName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientContext_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Regex_t387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(220);
		_stringLiteral929 = il2cpp_codegen_string_literal_from_index(929);
		s_Il2CppMethodIntialized = true;
	}
	ClientContext_t682 * V_0 = {0};
	String_t* V_1 = {0};
	Regex_t387 * V_2 = {0};
	MatchCollection_t496 * V_3 = {0};
	{
		Context_t677 * L_0 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		V_0 = ((ClientContext_t682 *)Castclass(L_0, ClientContext_t682_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_1;
		Regex_t387 * L_2 = (Regex_t387 *)il2cpp_codegen_object_new (Regex_t387_il2cpp_TypeInfo_var);
		Regex__ctor_m1847(L_2, _stringLiteral929, /*hidden argument*/NULL);
		V_2 = L_2;
		Regex_t387 * L_3 = V_2;
		String_t* L_4 = ___subjectName;
		NullCheck(L_3);
		MatchCollection_t496 * L_5 = Regex_Matches_m1865(L_3, L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		MatchCollection_t496 * L_6 = V_3;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Text.RegularExpressions.MatchCollection::get_Count() */, L_6);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_005f;
		}
	}
	{
		MatchCollection_t496 * L_8 = V_3;
		NullCheck(L_8);
		Match_t486 * L_9 = (Match_t486 *)VirtFuncInvoker1< Match_t486 *, int32_t >::Invoke(8 /* System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32) */, L_8, 0);
		NullCheck(L_9);
		bool L_10 = Group_get_Success_m1819(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		MatchCollection_t496 * L_11 = V_3;
		NullCheck(L_11);
		Match_t486 * L_12 = (Match_t486 *)VirtFuncInvoker1< Match_t486 *, int32_t >::Invoke(8 /* System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32) */, L_11, 0);
		NullCheck(L_12);
		GroupCollection_t494 * L_13 = (GroupCollection_t494 *)VirtFuncInvoker0< GroupCollection_t494 * >::Invoke(4 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_12);
		NullCheck(L_13);
		Group_t492 * L_14 = GroupCollection_get_Item_m1822(L_13, 1, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15 = Capture_get_Value_m1805(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_16 = String_ToString_m1233(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
	}

IL_005f:
	{
		ClientContext_t682 * L_17 = V_0;
		NullCheck(L_17);
		TlsClientSettings_t689 * L_18 = Context_get_ClientSettings_m2926(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_19 = TlsClientSettings_get_TargetHost_m3166(L_18, /*hidden argument*/NULL);
		String_t* L_20 = V_1;
		bool L_21 = TlsServerCertificate_Match_m3265(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Match(System.String,System.String)
extern TypeInfo* CultureInfo_t349_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TlsServerCertificate_Match_m3265 (Object_t * __this /* static, unused */, String_t* ___hostname, String_t* ___pattern, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t349_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(146);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = {0};
	int32_t G_B15_0 = 0;
	{
		String_t* L_0 = ___pattern;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m1226(L_0, ((int32_t)42), /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___hostname;
		String_t* L_4 = ___pattern;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t349_il2cpp_TypeInfo_var);
		CultureInfo_t349 * L_5 = CultureInfo_get_InvariantCulture_m1293(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_6 = String_Compare_m2297(NULL /*static, unused*/, L_3, L_4, 1, L_5, /*hidden argument*/NULL);
		return ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		String_t* L_8 = ___pattern;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m1182(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)((int32_t)L_9-(int32_t)1)))))
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_10 = ___pattern;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		uint16_t L_12 = String_get_Chars_m1339(L_10, ((int32_t)((int32_t)L_11+(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)46))))
		{
			goto IL_0041;
		}
	}
	{
		return 0;
	}

IL_0041:
	{
		String_t* L_13 = ___pattern;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = String_IndexOf_m1222(L_13, ((int32_t)42), ((int32_t)((int32_t)L_14+(int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_0056;
		}
	}
	{
		return 0;
	}

IL_0056:
	{
		String_t* L_17 = ___pattern;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		String_t* L_19 = String_Substring_m1223(L_17, ((int32_t)((int32_t)L_18+(int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_19;
		String_t* L_20 = ___hostname;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m1182(L_20, /*hidden argument*/NULL);
		String_t* L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m1182(L_22, /*hidden argument*/NULL);
		V_3 = ((int32_t)((int32_t)L_21-(int32_t)L_23));
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) > ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		return 0;
	}

IL_0077:
	{
		String_t* L_25 = ___hostname;
		int32_t L_26 = V_3;
		String_t* L_27 = V_2;
		String_t* L_28 = V_2;
		NullCheck(L_28);
		int32_t L_29 = String_get_Length_m1182(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t349_il2cpp_TypeInfo_var);
		CultureInfo_t349 * L_30 = CultureInfo_get_InvariantCulture_m1293(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_31 = String_Compare_m3381(NULL /*static, unused*/, L_25, L_26, L_27, 0, L_29, 1, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0093;
		}
	}
	{
		return 0;
	}

IL_0093:
	{
		int32_t L_32 = V_0;
		if (L_32)
		{
			goto IL_00c3;
		}
	}
	{
		String_t* L_33 = ___hostname;
		NullCheck(L_33);
		int32_t L_34 = String_IndexOf_m1226(L_33, ((int32_t)46), /*hidden argument*/NULL);
		V_4 = L_34;
		int32_t L_35 = V_4;
		if ((((int32_t)L_35) == ((int32_t)(-1))))
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_36 = V_4;
		String_t* L_37 = ___hostname;
		NullCheck(L_37);
		int32_t L_38 = String_get_Length_m1182(L_37, /*hidden argument*/NULL);
		String_t* L_39 = V_2;
		NullCheck(L_39);
		int32_t L_40 = String_get_Length_m1182(L_39, /*hidden argument*/NULL);
		G_B15_0 = ((((int32_t)((((int32_t)L_36) < ((int32_t)((int32_t)((int32_t)L_38-(int32_t)L_40))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00c2;
	}

IL_00c1:
	{
		G_B15_0 = 1;
	}

IL_00c2:
	{
		return G_B15_0;
	}

IL_00c3:
	{
		String_t* L_41 = ___pattern;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m1227(L_41, 0, L_42, /*hidden argument*/NULL);
		V_5 = L_43;
		String_t* L_44 = ___hostname;
		String_t* L_45 = V_5;
		String_t* L_46 = V_5;
		NullCheck(L_46);
		int32_t L_47 = String_get_Length_m1182(L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t349_il2cpp_TypeInfo_var);
		CultureInfo_t349 * L_48 = CultureInfo_get_InvariantCulture_m1293(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_49 = String_Compare_m3381(NULL /*static, unused*/, L_44, 0, L_45, 0, L_47, 1, L_48, /*hidden argument*/NULL);
		return ((((int32_t)L_49) == ((int32_t)0))? 1 : 0);
	}
}
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_5.h"
#ifndef _MSC_VER
#else
#endif
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_5MethodDeclarations.h"

#include "Mono.Security_ArrayTypes.h"
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_ClientCer.h"
// Mono.Security.ASN1
#include "Mono_Security_Mono_Security_ASN1.h"
// System.Int16
#include "mscorlib_System_Int16.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// Mono.Security.ASN1
#include "Mono_Security_Mono_Security_ASN1MethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerCertificateRequest__ctor_m3266 (TlsServerCertificateRequest_t728 * __this, Context_t677 * ___context, ByteU5BU5D_t112* ___buffer, const MethodInfo* method)
{
	{
		Context_t677 * L_0 = ___context;
		ByteU5BU5D_t112* L_1 = ___buffer;
		HandshakeMessage__ctor_m3222(__this, L_0, ((int32_t)13), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::Update()
extern "C" void TlsServerCertificateRequest_Update_m3267 (TlsServerCertificateRequest_t728 * __this, const MethodInfo* method)
{
	{
		HandshakeMessage_Update_m3227(__this, /*hidden argument*/NULL);
		Context_t677 * L_0 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		TlsServerSettings_t688 * L_1 = Context_get_ServerSettings_m2925(L_0, /*hidden argument*/NULL);
		ClientCertificateTypeU5BU5D_t719* L_2 = (__this->___certificateTypes_9);
		NullCheck(L_1);
		TlsServerSettings_set_CertificateTypes_m3191(L_1, L_2, /*hidden argument*/NULL);
		Context_t677 * L_3 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		TlsServerSettings_t688 * L_4 = Context_get_ServerSettings_m2925(L_3, /*hidden argument*/NULL);
		StringU5BU5D_t204* L_5 = (__this->___distinguisedNames_10);
		NullCheck(L_4);
		TlsServerSettings_set_DistinguisedNames_m3192(L_4, L_5, /*hidden argument*/NULL);
		Context_t677 * L_6 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		TlsServerSettings_t688 * L_7 = Context_get_ServerSettings_m2925(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		TlsServerSettings_set_CertificateRequest_m3190(L_7, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsSsl3()
extern "C" void TlsServerCertificateRequest_ProcessAsSsl3_m3268 (TlsServerCertificateRequest_t728 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(24 /* System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsTls1() */, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsTls1()
extern TypeInfo* ClientCertificateTypeU5BU5D_t719_il2cpp_TypeInfo_var;
extern TypeInfo* ASN1_t570_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t204_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t288_il2cpp_TypeInfo_var;
extern "C" void TlsServerCertificateRequest_ProcessAsTls1_m3269 (TlsServerCertificateRequest_t728 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientCertificateTypeU5BU5D_t719_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(496);
		ASN1_t570_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(290);
		StringU5BU5D_t204_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(84);
		Encoding_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(80);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ASN1_t570 * V_2 = {0};
	int32_t V_3 = 0;
	ASN1_t570 * V_4 = {0};
	{
		uint8_t L_0 = TlsStream_ReadByte_m3204(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		__this->___certificateTypes_9 = ((ClientCertificateTypeU5BU5D_t719*)SZArrayNew(ClientCertificateTypeU5BU5D_t719_il2cpp_TypeInfo_var, L_1));
		V_1 = 0;
		goto IL_002c;
	}

IL_001a:
	{
		ClientCertificateTypeU5BU5D_t719* L_2 = (__this->___certificateTypes_9);
		int32_t L_3 = V_1;
		uint8_t L_4 = TlsStream_ReadByte_m3204(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, L_3)) = (int32_t)L_4;
		int32_t L_5 = V_1;
		V_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_002c:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_001a;
		}
	}
	{
		int16_t L_8 = TlsStream_ReadInt16_m3205(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00aa;
		}
	}
	{
		int16_t L_9 = TlsStream_ReadInt16_m3205(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_10 = TlsStream_ReadBytes_m3207(__this, L_9, /*hidden argument*/NULL);
		ASN1_t570 * L_11 = (ASN1_t570 *)il2cpp_codegen_object_new (ASN1_t570_il2cpp_TypeInfo_var);
		ASN1__ctor_m2310(L_11, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		ASN1_t570 * L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13 = ASN1_get_Count_m2314(L_12, /*hidden argument*/NULL);
		__this->___distinguisedNames_10 = ((StringU5BU5D_t204*)SZArrayNew(StringU5BU5D_t204_il2cpp_TypeInfo_var, L_13));
		V_3 = 0;
		goto IL_009e;
	}

IL_0068:
	{
		ASN1_t570 * L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		ASN1_t570 * L_16 = ASN1_get_Item_m2315(L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		ByteU5BU5D_t112* L_17 = ASN1_get_Value_m2313(L_16, /*hidden argument*/NULL);
		ASN1_t570 * L_18 = (ASN1_t570 *)il2cpp_codegen_object_new (ASN1_t570_il2cpp_TypeInfo_var);
		ASN1__ctor_m2310(L_18, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		StringU5BU5D_t204* L_19 = (__this->___distinguisedNames_10);
		int32_t L_20 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t288_il2cpp_TypeInfo_var);
		Encoding_t288 * L_21 = Encoding_get_UTF8_m1229(NULL /*static, unused*/, /*hidden argument*/NULL);
		ASN1_t570 * L_22 = V_4;
		NullCheck(L_22);
		ASN1_t570 * L_23 = ASN1_get_Item_m2315(L_22, 1, /*hidden argument*/NULL);
		NullCheck(L_23);
		ByteU5BU5D_t112* L_24 = ASN1_get_Value_m2313(L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_25 = (String_t*)VirtFuncInvoker1< String_t*, ByteU5BU5D_t112* >::Invoke(20 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_21, L_24);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		ArrayElementTypeCheck (L_19, L_25);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, L_20)) = (String_t*)L_25;
		int32_t L_26 = V_3;
		V_3 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_009e:
	{
		int32_t L_27 = V_3;
		ASN1_t570 * L_28 = V_2;
		NullCheck(L_28);
		int32_t L_29 = ASN1_get_Count_m2314(L_28, /*hidden argument*/NULL);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0068;
		}
	}

IL_00aa:
	{
		return;
	}
}
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_6.h"
#ifndef _MSC_VER
#else
#endif
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_6MethodDeclarations.h"

// <PrivateImplementationDetails>
#include "Mono_Security_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$4
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_7.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// Mono.Security.Protocol.Tls.HandshakeState
#include "Mono_Security_Mono_Security_Protocol_Tls_HandshakeState.h"
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithm.h"
// Mono.Security.Protocol.Tls.SslHandshakeHash
#include "Mono_Security_Mono_Security_Protocol_Tls_SslHandshakeHash.h"
// Mono.Security.Protocol.Tls.TlsStream
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStream.h"
// Mono.Security.Cryptography.MD5SHA1
#include "Mono_Security_Mono_Security_Cryptography_MD5SHA1.h"
// <PrivateImplementationDetails>
#include "Mono_Security_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
// Mono.Security.Protocol.Tls.SslHandshakeHash
#include "Mono_Security_Mono_Security_Protocol_Tls_SslHandshakeHashMethodDeclarations.h"
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithmMethodDeclarations.h"
// Mono.Security.Cryptography.MD5SHA1
#include "Mono_Security_Mono_Security_Cryptography_MD5SHA1MethodDeclarations.h"


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerFinished__ctor_m3270 (TlsServerFinished_t729 * __this, Context_t677 * ___context, ByteU5BU5D_t112* ___buffer, const MethodInfo* method)
{
	{
		Context_t677 * L_0 = ___context;
		ByteU5BU5D_t112* L_1 = ___buffer;
		HandshakeMessage__ctor_m3222(__this, L_0, ((int32_t)20), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.cctor()
extern TypeInfo* ByteU5BU5D_t112_il2cpp_TypeInfo_var;
extern TypeInfo* TlsServerFinished_t729_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t743____U24U24fieldU2D22_14_FieldInfo_var;
extern "C" void TlsServerFinished__cctor_m3271 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		TlsServerFinished_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		U3CPrivateImplementationDetailsU3E_t743____U24U24fieldU2D22_14_FieldInfo_var = il2cpp_codegen_field_info_from_index(407, 14);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t112* L_0 = ((ByteU5BU5D_t112*)SZArrayNew(ByteU5BU5D_t112_il2cpp_TypeInfo_var, 4));
		RuntimeHelpers_InitializeArray_m2292(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t743____U24U24fieldU2D22_14_FieldInfo_var), /*hidden argument*/NULL);
		((TlsServerFinished_t729_StaticFields*)TlsServerFinished_t729_il2cpp_TypeInfo_var->static_fields)->___Ssl3Marker_9 = L_0;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::Update()
extern "C" void TlsServerFinished_Update_m3272 (TlsServerFinished_t729 * __this, const MethodInfo* method)
{
	{
		HandshakeMessage_Update_m3227(__this, /*hidden argument*/NULL);
		Context_t677 * L_0 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Context_set_HandshakeState_m2930(L_0, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsSsl3()
extern TypeInfo* SslHandshakeHash_t715_il2cpp_TypeInfo_var;
extern TypeInfo* TlsServerFinished_t729_il2cpp_TypeInfo_var;
extern TypeInfo* CipherSuite_t678_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t718_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral930;
extern "C" void TlsServerFinished_ProcessAsSsl3_m3273 (TlsServerFinished_t729 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SslHandshakeHash_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(490);
		TlsServerFinished_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		CipherSuite_t678_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(440);
		TlsException_t718_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		_stringLiteral930 = il2cpp_codegen_string_literal_from_index(930);
		s_Il2CppMethodIntialized = true;
	}
	HashAlgorithm_t649 * V_0 = {0};
	ByteU5BU5D_t112* V_1 = {0};
	ByteU5BU5D_t112* V_2 = {0};
	ByteU5BU5D_t112* V_3 = {0};
	{
		Context_t677 * L_0 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_t112* L_1 = Context_get_MasterSecret_m2950(L_0, /*hidden argument*/NULL);
		SslHandshakeHash_t715 * L_2 = (SslHandshakeHash_t715 *)il2cpp_codegen_object_new (SslHandshakeHash_t715_il2cpp_TypeInfo_var);
		SslHandshakeHash__ctor_m3090(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Context_t677 * L_3 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		TlsStream_t691 * L_4 = Context_get_HandshakeMessages_m2937(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		ByteU5BU5D_t112* L_5 = TlsStream_ToArray_m3214(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		HashAlgorithm_t649 * L_6 = V_0;
		ByteU5BU5D_t112* L_7 = V_1;
		ByteU5BU5D_t112* L_8 = V_1;
		NullCheck(L_8);
		ByteU5BU5D_t112* L_9 = V_1;
		NullCheck(L_6);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t112*, int32_t, int32_t, ByteU5BU5D_t112*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_6, L_7, 0, (((int32_t)(((Array_t *)L_8)->max_length))), L_9, 0);
		HashAlgorithm_t649 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TlsServerFinished_t729_il2cpp_TypeInfo_var);
		ByteU5BU5D_t112* L_11 = ((TlsServerFinished_t729_StaticFields*)TlsServerFinished_t729_il2cpp_TypeInfo_var->static_fields)->___Ssl3Marker_9;
		ByteU5BU5D_t112* L_12 = ((TlsServerFinished_t729_StaticFields*)TlsServerFinished_t729_il2cpp_TypeInfo_var->static_fields)->___Ssl3Marker_9;
		NullCheck(L_12);
		ByteU5BU5D_t112* L_13 = ((TlsServerFinished_t729_StaticFields*)TlsServerFinished_t729_il2cpp_TypeInfo_var->static_fields)->___Ssl3Marker_9;
		NullCheck(L_10);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t112*, int32_t, int32_t, ByteU5BU5D_t112*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_10, L_11, 0, (((int32_t)(((Array_t *)L_12)->max_length))), L_13, 0);
		HashAlgorithm_t649 * L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CipherSuite_t678_il2cpp_TypeInfo_var);
		ByteU5BU5D_t112* L_15 = ((CipherSuite_t678_StaticFields*)CipherSuite_t678_il2cpp_TypeInfo_var->static_fields)->___EmptyArray_0;
		NullCheck(L_14);
		VirtFuncInvoker3< ByteU5BU5D_t112*, ByteU5BU5D_t112*, int32_t, int32_t >::Invoke(7 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, 0);
		int64_t L_16 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length() */, __this);
		ByteU5BU5D_t112* L_17 = TlsStream_ReadBytes_m3207(__this, (((int32_t)L_16)), /*hidden argument*/NULL);
		V_2 = L_17;
		HashAlgorithm_t649 * L_18 = V_0;
		NullCheck(L_18);
		ByteU5BU5D_t112* L_19 = (ByteU5BU5D_t112*)VirtFuncInvoker0< ByteU5BU5D_t112* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_18);
		V_3 = L_19;
		ByteU5BU5D_t112* L_20 = V_3;
		ByteU5BU5D_t112* L_21 = V_2;
		bool L_22 = HandshakeMessage_Compare_m3229(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		TlsException_t718 * L_23 = (TlsException_t718 *)il2cpp_codegen_object_new (TlsException_t718_il2cpp_TypeInfo_var);
		TlsException__ctor_m3178(L_23, ((int32_t)71), _stringLiteral930, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_0086:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsTls1()
extern TypeInfo* MD5SHA1_t672_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t718_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral931;
extern Il2CppCodeGenString* _stringLiteral930;
extern "C" void TlsServerFinished_ProcessAsTls1_m3274 (TlsServerFinished_t729 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MD5SHA1_t672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		TlsException_t718_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		_stringLiteral931 = il2cpp_codegen_string_literal_from_index(931);
		_stringLiteral930 = il2cpp_codegen_string_literal_from_index(930);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t112* V_0 = {0};
	HashAlgorithm_t649 * V_1 = {0};
	ByteU5BU5D_t112* V_2 = {0};
	ByteU5BU5D_t112* V_3 = {0};
	ByteU5BU5D_t112* V_4 = {0};
	{
		int64_t L_0 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length() */, __this);
		ByteU5BU5D_t112* L_1 = TlsStream_ReadBytes_m3207(__this, (((int32_t)L_0)), /*hidden argument*/NULL);
		V_0 = L_1;
		MD5SHA1_t672 * L_2 = (MD5SHA1_t672 *)il2cpp_codegen_object_new (MD5SHA1_t672_il2cpp_TypeInfo_var);
		MD5SHA1__ctor_m2811(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		Context_t677 * L_3 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		TlsStream_t691 * L_4 = Context_get_HandshakeMessages_m2937(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		ByteU5BU5D_t112* L_5 = TlsStream_ToArray_m3214(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		HashAlgorithm_t649 * L_6 = V_1;
		ByteU5BU5D_t112* L_7 = V_2;
		ByteU5BU5D_t112* L_8 = V_2;
		NullCheck(L_8);
		NullCheck(L_6);
		ByteU5BU5D_t112* L_9 = HashAlgorithm_ComputeHash_m3327(L_6, L_7, 0, (((int32_t)(((Array_t *)L_8)->max_length))), /*hidden argument*/NULL);
		V_3 = L_9;
		Context_t677 * L_10 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		SecurityParameters_t690 * L_11 = Context_get_Current_m2968(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		CipherSuite_t678 * L_12 = SecurityParameters_get_Cipher_m3039(L_11, /*hidden argument*/NULL);
		Context_t677 * L_13 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		ByteU5BU5D_t112* L_14 = Context_get_MasterSecret_m2950(L_13, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_15 = V_3;
		NullCheck(L_12);
		ByteU5BU5D_t112* L_16 = CipherSuite_PRF_m2853(L_12, L_14, _stringLiteral931, L_15, ((int32_t)12), /*hidden argument*/NULL);
		V_4 = L_16;
		ByteU5BU5D_t112* L_17 = V_4;
		ByteU5BU5D_t112* L_18 = V_0;
		bool L_19 = HandshakeMessage_Compare_m3229(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0073;
		}
	}
	{
		TlsException_t718 * L_20 = (TlsException_t718 *)il2cpp_codegen_object_new (TlsException_t718_il2cpp_TypeInfo_var);
		TlsException__ctor_m3173(L_20, _stringLiteral930, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0073:
	{
		return;
	}
}
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_7.h"
#ifndef _MSC_VER
#else
#endif
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_7MethodDeclarations.h"

// Mono.Security.Protocol.Tls.SecurityCompressionType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityCompression.h"
// Mono.Security.Protocol.Tls.CipherSuiteCollection
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteCollecti.h"
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
// System.Buffer
#include "mscorlib_System_BufferMethodDeclarations.h"
// Mono.Security.Protocol.Tls.ClientSessionCache
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientSessionCacheMethodDeclarations.h"
// Mono.Security.Protocol.Tls.CipherSuiteCollection
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteCollectiMethodDeclarations.h"
// Mono.Security.Protocol.Tls.CipherSuiteFactory
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteFactoryMethodDeclarations.h"


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerHello__ctor_m3275 (TlsServerHello_t730 * __this, Context_t677 * ___context, ByteU5BU5D_t112* ___buffer, const MethodInfo* method)
{
	{
		Context_t677 * L_0 = ___context;
		ByteU5BU5D_t112* L_1 = ___buffer;
		HandshakeMessage__ctor_m3222(__this, L_0, 2, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::Update()
extern TypeInfo* ByteU5BU5D_t112_il2cpp_TypeInfo_var;
extern "C" void TlsServerHello_Update_m3276 (TlsServerHello_t730 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t112* V_3 = {0};
	ByteU5BU5D_t112* V_4 = {0};
	{
		HandshakeMessage_Update_m3227(__this, /*hidden argument*/NULL);
		Context_t677 * L_0 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_1 = (__this->___sessionId_11);
		NullCheck(L_0);
		Context_set_SessionId_m2922(L_0, L_1, /*hidden argument*/NULL);
		Context_t677 * L_2 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_3 = (__this->___random_10);
		NullCheck(L_2);
		Context_set_ServerRandom_m2945(L_2, L_3, /*hidden argument*/NULL);
		Context_t677 * L_4 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		SecurityParameters_t690 * L_5 = Context_get_Negotiating_m2969(L_4, /*hidden argument*/NULL);
		CipherSuite_t678 * L_6 = (__this->___cipherSuite_12);
		NullCheck(L_5);
		SecurityParameters_set_Cipher_m3040(L_5, L_6, /*hidden argument*/NULL);
		Context_t677 * L_7 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		int32_t L_8 = (__this->___compressionMethod_9);
		NullCheck(L_7);
		Context_set_CompressionMethod_m2924(L_7, L_8, /*hidden argument*/NULL);
		Context_t677 * L_9 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Context_set_ProtocolNegotiated_m2916(L_9, 1, /*hidden argument*/NULL);
		Context_t677 * L_10 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		ByteU5BU5D_t112* L_11 = Context_get_ClientRandom_m2942(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		V_0 = (((int32_t)(((Array_t *)L_11)->max_length)));
		Context_t677 * L_12 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		ByteU5BU5D_t112* L_13 = Context_get_ServerRandom_m2944(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		V_1 = (((int32_t)(((Array_t *)L_13)->max_length)));
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)L_15));
		int32_t L_16 = V_2;
		V_3 = ((ByteU5BU5D_t112*)SZArrayNew(ByteU5BU5D_t112_il2cpp_TypeInfo_var, L_16));
		Context_t677 * L_17 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		ByteU5BU5D_t112* L_18 = Context_get_ClientRandom_m2942(L_17, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_19 = V_3;
		int32_t L_20 = V_0;
		Buffer_BlockCopy_m2309(NULL /*static, unused*/, (Array_t *)(Array_t *)L_18, 0, (Array_t *)(Array_t *)L_19, 0, L_20, /*hidden argument*/NULL);
		Context_t677 * L_21 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		ByteU5BU5D_t112* L_22 = Context_get_ServerRandom_m2944(L_21, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_23 = V_3;
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		Buffer_BlockCopy_m2309(NULL /*static, unused*/, (Array_t *)(Array_t *)L_22, 0, (Array_t *)(Array_t *)L_23, L_24, L_25, /*hidden argument*/NULL);
		Context_t677 * L_26 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_27 = V_3;
		NullCheck(L_26);
		Context_set_RandomCS_m2947(L_26, L_27, /*hidden argument*/NULL);
		int32_t L_28 = V_2;
		V_4 = ((ByteU5BU5D_t112*)SZArrayNew(ByteU5BU5D_t112_il2cpp_TypeInfo_var, L_28));
		Context_t677 * L_29 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		ByteU5BU5D_t112* L_30 = Context_get_ServerRandom_m2944(L_29, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_31 = V_4;
		int32_t L_32 = V_1;
		Buffer_BlockCopy_m2309(NULL /*static, unused*/, (Array_t *)(Array_t *)L_30, 0, (Array_t *)(Array_t *)L_31, 0, L_32, /*hidden argument*/NULL);
		Context_t677 * L_33 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		ByteU5BU5D_t112* L_34 = Context_get_ClientRandom_m2942(L_33, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_35 = V_4;
		int32_t L_36 = V_1;
		int32_t L_37 = V_0;
		Buffer_BlockCopy_m2309(NULL /*static, unused*/, (Array_t *)(Array_t *)L_34, 0, (Array_t *)(Array_t *)L_35, L_36, L_37, /*hidden argument*/NULL);
		Context_t677 * L_38 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_39 = V_4;
		NullCheck(L_38);
		Context_set_RandomSC_m2949(L_38, L_39, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsSsl3()
extern "C" void TlsServerHello_ProcessAsSsl3_m3277 (TlsServerHello_t730 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(24 /* System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsTls1() */, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsTls1()
extern TypeInfo* ClientSessionCache_t686_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t718_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral932;
extern "C" void TlsServerHello_ProcessAsTls1_m3278 (TlsServerHello_t730 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientSessionCache_t686_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		TlsException_t718_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		_stringLiteral932 = il2cpp_codegen_string_literal_from_index(932);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int16_t V_1 = 0;
	{
		int16_t L_0 = TlsStream_ReadInt16_m3205(__this, /*hidden argument*/NULL);
		TlsServerHello_processProtocol_m3279(__this, L_0, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_1 = TlsStream_ReadBytes_m3207(__this, ((int32_t)32), /*hidden argument*/NULL);
		__this->___random_10 = L_1;
		uint8_t L_2 = TlsStream_ReadByte_m3204(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_4 = V_0;
		ByteU5BU5D_t112* L_5 = TlsStream_ReadBytes_m3207(__this, L_4, /*hidden argument*/NULL);
		__this->___sessionId_11 = L_5;
		Context_t677 * L_6 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		TlsClientSettings_t689 * L_7 = Context_get_ClientSettings_m2926(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = TlsClientSettings_get_TargetHost_m3166(L_7, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_9 = (__this->___sessionId_11);
		IL2CPP_RUNTIME_CLASS_INIT(ClientSessionCache_t686_il2cpp_TypeInfo_var);
		ClientSessionCache_Add_m2907(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		Context_t677 * L_10 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_11 = (__this->___sessionId_11);
		Context_t677 * L_12 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		ByteU5BU5D_t112* L_13 = Context_get_SessionId_m2921(L_12, /*hidden argument*/NULL);
		bool L_14 = HandshakeMessage_Compare_m3229(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		Context_set_AbbreviatedHandshake_m2914(L_10, L_14, /*hidden argument*/NULL);
		goto IL_0082;
	}

IL_0076:
	{
		Context_t677 * L_15 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Context_set_AbbreviatedHandshake_m2914(L_15, 0, /*hidden argument*/NULL);
	}

IL_0082:
	{
		int16_t L_16 = TlsStream_ReadInt16_m3205(__this, /*hidden argument*/NULL);
		V_1 = L_16;
		Context_t677 * L_17 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		CipherSuiteCollection_t679 * L_18 = Context_get_SupportedCiphers_m2935(L_17, /*hidden argument*/NULL);
		int16_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = CipherSuiteCollection_IndexOf_m2876(L_18, L_19, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)(-1)))))
		{
			goto IL_00ad;
		}
	}
	{
		TlsException_t718 * L_21 = (TlsException_t718 *)il2cpp_codegen_object_new (TlsException_t718_il2cpp_TypeInfo_var);
		TlsException__ctor_m3178(L_21, ((int32_t)71), _stringLiteral932, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_00ad:
	{
		Context_t677 * L_22 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		CipherSuiteCollection_t679 * L_23 = Context_get_SupportedCiphers_m2935(L_22, /*hidden argument*/NULL);
		int16_t L_24 = V_1;
		NullCheck(L_23);
		CipherSuite_t678 * L_25 = CipherSuiteCollection_get_Item_m2871(L_23, L_24, /*hidden argument*/NULL);
		__this->___cipherSuite_12 = L_25;
		uint8_t L_26 = TlsStream_ReadByte_m3204(__this, /*hidden argument*/NULL);
		__this->___compressionMethod_9 = L_26;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::processProtocol(System.Int16)
extern TypeInfo* TlsException_t718_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral877;
extern "C" void TlsServerHello_processProtocol_m3279 (TlsServerHello_t730 * __this, int16_t ___protocol, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TlsException_t718_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		_stringLiteral877 = il2cpp_codegen_string_literal_from_index(877);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		Context_t677 * L_0 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		int16_t L_1 = ___protocol;
		NullCheck(L_0);
		int32_t L_2 = Context_DecodeProtocolCode_m2966(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		Context_t677 * L_4 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = Context_get_SecurityProtocolFlags_m2919(L_4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_3&(int32_t)L_5))) == ((int32_t)L_6)))
		{
			goto IL_003b;
		}
	}
	{
		Context_t677 * L_7 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = Context_get_SecurityProtocolFlags_m2919(L_7, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)-1073741824)))) == ((uint32_t)((int32_t)-1073741824)))))
		{
			goto IL_0079;
		}
	}

IL_003b:
	{
		Context_t677 * L_9 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		Context_set_SecurityProtocol_m2918(L_9, L_10, /*hidden argument*/NULL);
		Context_t677 * L_11 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		CipherSuiteCollection_t679 * L_12 = Context_get_SupportedCiphers_m2935(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		CipherSuiteCollection_Clear_m2874(L_12, /*hidden argument*/NULL);
		Context_t677 * L_13 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Context_set_SupportedCiphers_m2936(L_13, (CipherSuiteCollection_t679 *)NULL, /*hidden argument*/NULL);
		Context_t677 * L_14 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		int32_t L_15 = V_0;
		CipherSuiteCollection_t679 * L_16 = CipherSuiteFactory_GetSupportedCiphers_m2881(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		Context_set_SupportedCiphers_m2936(L_14, L_16, /*hidden argument*/NULL);
		goto IL_0086;
	}

IL_0079:
	{
		TlsException_t718 * L_17 = (TlsException_t718 *)il2cpp_codegen_object_new (TlsException_t718_il2cpp_TypeInfo_var);
		TlsException__ctor_m3178(L_17, ((int32_t)70), _stringLiteral877, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0086:
	{
		return;
	}
}
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_8.h"
#ifndef _MSC_VER
#else
#endif
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_8MethodDeclarations.h"



// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerHelloDone__ctor_m3280 (TlsServerHelloDone_t731 * __this, Context_t677 * ___context, ByteU5BU5D_t112* ___buffer, const MethodInfo* method)
{
	{
		Context_t677 * L_0 = ___context;
		ByteU5BU5D_t112* L_1 = ___buffer;
		HandshakeMessage__ctor_m3222(__this, L_0, ((int32_t)14), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsSsl3()
extern "C" void TlsServerHelloDone_ProcessAsSsl3_m3281 (TlsServerHelloDone_t731 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsTls1()
extern "C" void TlsServerHelloDone_ProcessAsTls1_m3282 (TlsServerHelloDone_t731 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_9.h"
#ifndef _MSC_VER
#else
#endif
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_9MethodDeclarations.h"

// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"
// System.Security.Cryptography.RSA
#include "mscorlib_System_Security_Cryptography_RSA.h"


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerKeyExchange__ctor_m3283 (TlsServerKeyExchange_t732 * __this, Context_t677 * ___context, ByteU5BU5D_t112* ___buffer, const MethodInfo* method)
{
	{
		Context_t677 * L_0 = ___context;
		ByteU5BU5D_t112* L_1 = ___buffer;
		HandshakeMessage__ctor_m3222(__this, L_0, ((int32_t)12), L_1, /*hidden argument*/NULL);
		TlsServerKeyExchange_verifySignature_m3287(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::Update()
extern "C" void TlsServerKeyExchange_Update_m3284 (TlsServerKeyExchange_t732 * __this, const MethodInfo* method)
{
	{
		HandshakeMessage_Update_m3227(__this, /*hidden argument*/NULL);
		Context_t677 * L_0 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		TlsServerSettings_t688 * L_1 = Context_get_ServerSettings_m2925(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		TlsServerSettings_set_ServerKeyExchange_m3182(L_1, 1, /*hidden argument*/NULL);
		Context_t677 * L_2 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		TlsServerSettings_t688 * L_3 = Context_get_ServerSettings_m2925(L_2, /*hidden argument*/NULL);
		RSAParameters_t591  L_4 = (__this->___rsaParams_9);
		NullCheck(L_3);
		TlsServerSettings_set_RsaParameters_m3187(L_3, L_4, /*hidden argument*/NULL);
		Context_t677 * L_5 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		TlsServerSettings_t688 * L_6 = Context_get_ServerSettings_m2925(L_5, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_7 = (__this->___signedParams_10);
		NullCheck(L_6);
		TlsServerSettings_set_SignedParams_m3188(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsSsl3()
extern "C" void TlsServerKeyExchange_ProcessAsSsl3_m3285 (TlsServerKeyExchange_t732 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(24 /* System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsTls1() */, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsTls1()
extern TypeInfo* RSAParameters_t591_il2cpp_TypeInfo_var;
extern "C" void TlsServerKeyExchange_ProcessAsTls1_m3286 (TlsServerKeyExchange_t732 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RSAParameters_t591_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		s_Il2CppMethodIntialized = true;
	}
	RSAParameters_t591  V_0 = {0};
	{
		Initobj (RSAParameters_t591_il2cpp_TypeInfo_var, (&V_0));
		RSAParameters_t591  L_0 = V_0;
		__this->___rsaParams_9 = L_0;
		RSAParameters_t591 * L_1 = &(__this->___rsaParams_9);
		int16_t L_2 = TlsStream_ReadInt16_m3205(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_3 = TlsStream_ReadBytes_m3207(__this, L_2, /*hidden argument*/NULL);
		L_1->___Modulus_6 = L_3;
		RSAParameters_t591 * L_4 = &(__this->___rsaParams_9);
		int16_t L_5 = TlsStream_ReadInt16_m3205(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_6 = TlsStream_ReadBytes_m3207(__this, L_5, /*hidden argument*/NULL);
		L_4->___Exponent_7 = L_6;
		int16_t L_7 = TlsStream_ReadInt16_m3205(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_8 = TlsStream_ReadBytes_m3207(__this, L_7, /*hidden argument*/NULL);
		__this->___signedParams_10 = L_8;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::verifySignature()
extern TypeInfo* MD5SHA1_t672_il2cpp_TypeInfo_var;
extern TypeInfo* TlsStream_t691_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t718_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral933;
extern "C" void TlsServerKeyExchange_verifySignature_m3287 (TlsServerKeyExchange_t732 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MD5SHA1_t672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		TlsStream_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		TlsException_t718_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		_stringLiteral933 = il2cpp_codegen_string_literal_from_index(933);
		s_Il2CppMethodIntialized = true;
	}
	MD5SHA1_t672 * V_0 = {0};
	int32_t V_1 = 0;
	TlsStream_t691 * V_2 = {0};
	bool V_3 = false;
	{
		MD5SHA1_t672 * L_0 = (MD5SHA1_t672 *)il2cpp_codegen_object_new (MD5SHA1_t672_il2cpp_TypeInfo_var);
		MD5SHA1__ctor_m2811(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		RSAParameters_t591 * L_1 = &(__this->___rsaParams_9);
		ByteU5BU5D_t112* L_2 = (L_1->___Modulus_6);
		NullCheck(L_2);
		RSAParameters_t591 * L_3 = &(__this->___rsaParams_9);
		ByteU5BU5D_t112* L_4 = (L_3->___Exponent_7);
		NullCheck(L_4);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))+(int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))))+(int32_t)4));
		TlsStream_t691 * L_5 = (TlsStream_t691 *)il2cpp_codegen_object_new (TlsStream_t691_il2cpp_TypeInfo_var);
		TlsStream__ctor_m3194(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		TlsStream_t691 * L_6 = V_2;
		Context_t677 * L_7 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		ByteU5BU5D_t112* L_8 = Context_get_RandomCS_m2946(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		TlsStream_Write_m3212(L_6, L_8, /*hidden argument*/NULL);
		TlsStream_t691 * L_9 = V_2;
		ByteU5BU5D_t112* L_10 = TlsStream_ToArray_m3214(__this, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		NullCheck(L_9);
		VirtActionInvoker3< ByteU5BU5D_t112*, int32_t, int32_t >::Invoke(18 /* System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32) */, L_9, L_10, 0, L_11);
		MD5SHA1_t672 * L_12 = V_0;
		TlsStream_t691 * L_13 = V_2;
		NullCheck(L_13);
		ByteU5BU5D_t112* L_14 = TlsStream_ToArray_m3214(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		HashAlgorithm_ComputeHash_m2392(L_12, L_14, /*hidden argument*/NULL);
		TlsStream_t691 * L_15 = V_2;
		NullCheck(L_15);
		TlsStream_Reset_m3213(L_15, /*hidden argument*/NULL);
		MD5SHA1_t672 * L_16 = V_0;
		Context_t677 * L_17 = HandshakeMessage_get_Context_m3223(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		TlsServerSettings_t688 * L_18 = Context_get_ServerSettings_m2925(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		RSA_t569 * L_19 = TlsServerSettings_get_CertificateRSA_m3185(L_18, /*hidden argument*/NULL);
		ByteU5BU5D_t112* L_20 = (__this->___signedParams_10);
		NullCheck(L_16);
		bool L_21 = MD5SHA1_VerifySignature_m2816(L_16, L_19, L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		TlsException_t718 * L_23 = (TlsException_t718 *)il2cpp_codegen_object_new (TlsException_t718_il2cpp_TypeInfo_var);
		TlsException__ctor_m3178(L_23, ((int32_t)50), _stringLiteral933, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_008c:
	{
		return;
	}
}
// Mono.Math.Prime.PrimalityTest
#include "Mono_Security_Mono_Math_Prime_PrimalityTest.h"
#ifndef _MSC_VER
#else
#endif
// Mono.Math.Prime.PrimalityTest
#include "Mono_Security_Mono_Math_Prime_PrimalityTestMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Mono.Math.BigInteger
#include "Mono_Security_Mono_Math_BigInteger.h"
// Mono.Math.Prime.ConfidenceFactor
#include "Mono_Security_Mono_Math_Prime_ConfidenceFactor.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
extern "C" void PrimalityTest__ctor_m3288 (PrimalityTest_t733 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern "C" bool PrimalityTest_Invoke_m3289 (PrimalityTest_t733 * __this, BigInteger_t632 * ___bi, int32_t ___confidence, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PrimalityTest_Invoke_m3289((PrimalityTest_t733 *)__this->___prev_9,___bi, ___confidence, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, BigInteger_t632 * ___bi, int32_t ___confidence, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, BigInteger_t632 * ___bi, int32_t ___confidence, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, int32_t ___confidence, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_PrimalityTest_t733(Il2CppObject* delegate, BigInteger_t632 * ___bi, int32_t ___confidence)
{
	// Marshaling of parameter '___bi' to native representation
	BigInteger_t632 * ____bi_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Math.BigInteger'."));
}
// System.IAsyncResult Mono.Math.Prime.PrimalityTest::BeginInvoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor,System.AsyncCallback,System.Object)
extern TypeInfo* ConfidenceFactor_t635_il2cpp_TypeInfo_var;
extern "C" Object_t * PrimalityTest_BeginInvoke_m3290 (PrimalityTest_t733 * __this, BigInteger_t632 * ___bi, int32_t ___confidence, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfidenceFactor_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___bi;
	__d_args[1] = Box(ConfidenceFactor_t635_il2cpp_TypeInfo_var, &___confidence);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean Mono.Math.Prime.PrimalityTest::EndInvoke(System.IAsyncResult)
extern "C" bool PrimalityTest_EndInvoke_m3291 (PrimalityTest_t733 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Mono.Security.Protocol.Tls.CertificateValidationCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati.h"
#ifndef _MSC_VER
#else
#endif
// Mono.Security.Protocol.Tls.CertificateValidationCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidatiMethodDeclarations.h"



// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateValidationCallback__ctor_m3292 (CertificateValidationCallback_t711 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool CertificateValidationCallback_Invoke_m3293 (CertificateValidationCallback_t711 * __this, X509Certificate_t456 * ___certificate, Int32U5BU5D_t501* ___certificateErrors, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CertificateValidationCallback_Invoke_m3293((CertificateValidationCallback_t711 *)__this->___prev_9,___certificate, ___certificateErrors, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, X509Certificate_t456 * ___certificate, Int32U5BU5D_t501* ___certificateErrors, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, X509Certificate_t456 * ___certificate, Int32U5BU5D_t501* ___certificateErrors, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Int32U5BU5D_t501* ___certificateErrors, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_CertificateValidationCallback_t711(Il2CppObject* delegate, X509Certificate_t456 * ___certificate, Int32U5BU5D_t501* ___certificateErrors)
{
	// Marshaling of parameter '___certificate' to native representation
	X509Certificate_t456 * ____certificate_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[],System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateValidationCallback_BeginInvoke_m3294 (CertificateValidationCallback_t711 * __this, X509Certificate_t456 * ___certificate, Int32U5BU5D_t501* ___certificateErrors, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___certificate;
	__d_args[1] = ___certificateErrors;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern "C" bool CertificateValidationCallback_EndInvoke_m3295 (CertificateValidationCallback_t711 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati_0.h"
#ifndef _MSC_VER
#else
#endif
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati_0MethodDeclarations.h"



// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback2::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateValidationCallback2__ctor_m3296 (CertificateValidationCallback2_t712 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::Invoke(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t710 * CertificateValidationCallback2_Invoke_m3297 (CertificateValidationCallback2_t712 * __this, X509CertificateCollection_t597 * ___collection, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CertificateValidationCallback2_Invoke_m3297((CertificateValidationCallback2_t712 *)__this->___prev_9,___collection, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef ValidationResult_t710 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509CertificateCollection_t597 * ___collection, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef ValidationResult_t710 * (*FunctionPointerType) (Object_t * __this, X509CertificateCollection_t597 * ___collection, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef ValidationResult_t710 * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" ValidationResult_t710 * pinvoke_delegate_wrapper_CertificateValidationCallback2_t712(Il2CppObject* delegate, X509CertificateCollection_t597 * ___collection)
{
	// Marshaling of parameter '___collection' to native representation
	X509CertificateCollection_t597 * ____collection_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Security.X509.X509CertificateCollection'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::BeginInvoke(Mono.Security.X509.X509CertificateCollection,System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateValidationCallback2_BeginInvoke_m3298 (CertificateValidationCallback2_t712 * __this, X509CertificateCollection_t597 * ___collection, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___collection;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::EndInvoke(System.IAsyncResult)
extern "C" ValidationResult_t710 * CertificateValidationCallback2_EndInvoke_m3299 (CertificateValidationCallback2_t712 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (ValidationResult_t710 *)__result;
}
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateSelectio.h"
#ifndef _MSC_VER
#else
#endif
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateSelectioMethodDeclarations.h"

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
#include "System_System_Security_Cryptography_X509Certificates_X509Cer_1.h"


// System.Void Mono.Security.Protocol.Tls.CertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateSelectionCallback__ctor_m3300 (CertificateSelectionCallback_t695 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t456 * CertificateSelectionCallback_Invoke_m3301 (CertificateSelectionCallback_t695 * __this, X509CertificateCollection_t427 * ___clientCertificates, X509Certificate_t456 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t427 * ___serverRequestedCertificates, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CertificateSelectionCallback_Invoke_m3301((CertificateSelectionCallback_t695 *)__this->___prev_9,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef X509Certificate_t456 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509CertificateCollection_t427 * ___clientCertificates, X509Certificate_t456 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t427 * ___serverRequestedCertificates, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef X509Certificate_t456 * (*FunctionPointerType) (Object_t * __this, X509CertificateCollection_t427 * ___clientCertificates, X509Certificate_t456 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t427 * ___serverRequestedCertificates, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef X509Certificate_t456 * (*FunctionPointerType) (Object_t * __this, X509Certificate_t456 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t427 * ___serverRequestedCertificates, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" X509Certificate_t456 * pinvoke_delegate_wrapper_CertificateSelectionCallback_t695(Il2CppObject* delegate, X509CertificateCollection_t427 * ___clientCertificates, X509Certificate_t456 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t427 * ___serverRequestedCertificates)
{
	// Marshaling of parameter '___clientCertificates' to native representation
	X509CertificateCollection_t427 * ____clientCertificates_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509CertificateCollection'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateSelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateSelectionCallback_BeginInvoke_m3302 (CertificateSelectionCallback_t695 * __this, X509CertificateCollection_t427 * ___clientCertificates, X509Certificate_t456 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t427 * ___serverRequestedCertificates, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___clientCertificates;
	__d_args[1] = ___serverCertificate;
	__d_args[2] = ___targetHost;
	__d_args[3] = ___serverRequestedCertificates;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" X509Certificate_t456 * CertificateSelectionCallback_EndInvoke_m3303 (CertificateSelectionCallback_t695 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (X509Certificate_t456 *)__result;
}
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_PrivateKeySelection.h"
#ifndef _MSC_VER
#else
#endif
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_PrivateKeySelectionMethodDeclarations.h"

// System.Security.Cryptography.AsymmetricAlgorithm
#include "mscorlib_System_Security_Cryptography_AsymmetricAlgorithm.h"


// System.Void Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void PrivateKeySelectionCallback__ctor_m3304 (PrivateKeySelectionCallback_t696 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t443 * PrivateKeySelectionCallback_Invoke_m3305 (PrivateKeySelectionCallback_t696 * __this, X509Certificate_t456 * ___certificate, String_t* ___targetHost, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PrivateKeySelectionCallback_Invoke_m3305((PrivateKeySelectionCallback_t696 *)__this->___prev_9,___certificate, ___targetHost, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef AsymmetricAlgorithm_t443 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509Certificate_t456 * ___certificate, String_t* ___targetHost, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef AsymmetricAlgorithm_t443 * (*FunctionPointerType) (Object_t * __this, X509Certificate_t456 * ___certificate, String_t* ___targetHost, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef AsymmetricAlgorithm_t443 * (*FunctionPointerType) (Object_t * __this, String_t* ___targetHost, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" AsymmetricAlgorithm_t443 * pinvoke_delegate_wrapper_PrivateKeySelectionCallback_t696(Il2CppObject* delegate, X509Certificate_t456 * ___certificate, String_t* ___targetHost)
{
	// Marshaling of parameter '___certificate' to native representation
	X509Certificate_t456 * ____certificate_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * PrivateKeySelectionCallback_BeginInvoke_m3306 (PrivateKeySelectionCallback_t696 * __this, X509Certificate_t456 * ___certificate, String_t* ___targetHost, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___certificate;
	__d_args[1] = ___targetHost;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" AsymmetricAlgorithm_t443 * PrivateKeySelectionCallback_EndInvoke_m3307 (PrivateKeySelectionCallback_t696 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (AsymmetricAlgorithm_t443 *)__result;
}
// <PrivateImplementationDetails>/$ArrayType$3132
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$3132
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTypMethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void U24ArrayTypeU243132_t734_marshal(const U24ArrayTypeU243132_t734& unmarshaled, U24ArrayTypeU243132_t734_marshaled& marshaled)
{
}
void U24ArrayTypeU243132_t734_marshal_back(const U24ArrayTypeU243132_t734_marshaled& marshaled, U24ArrayTypeU243132_t734& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void U24ArrayTypeU243132_t734_marshal_cleanup(U24ArrayTypeU243132_t734_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$256
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_0.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$256
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_0MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void U24ArrayTypeU24256_t735_marshal(const U24ArrayTypeU24256_t735& unmarshaled, U24ArrayTypeU24256_t735_marshaled& marshaled)
{
}
void U24ArrayTypeU24256_t735_marshal_back(const U24ArrayTypeU24256_t735_marshaled& marshaled, U24ArrayTypeU24256_t735& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void U24ArrayTypeU24256_t735_marshal_cleanup(U24ArrayTypeU24256_t735_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$20
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_1.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$20
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_1MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void U24ArrayTypeU2420_t736_marshal(const U24ArrayTypeU2420_t736& unmarshaled, U24ArrayTypeU2420_t736_marshaled& marshaled)
{
}
void U24ArrayTypeU2420_t736_marshal_back(const U24ArrayTypeU2420_t736_marshaled& marshaled, U24ArrayTypeU2420_t736& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void U24ArrayTypeU2420_t736_marshal_cleanup(U24ArrayTypeU2420_t736_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$32
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_2.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$32
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_2MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void U24ArrayTypeU2432_t737_marshal(const U24ArrayTypeU2432_t737& unmarshaled, U24ArrayTypeU2432_t737_marshaled& marshaled)
{
}
void U24ArrayTypeU2432_t737_marshal_back(const U24ArrayTypeU2432_t737_marshaled& marshaled, U24ArrayTypeU2432_t737& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void U24ArrayTypeU2432_t737_marshal_cleanup(U24ArrayTypeU2432_t737_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$48
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_3.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$48
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_3MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void U24ArrayTypeU2448_t738_marshal(const U24ArrayTypeU2448_t738& unmarshaled, U24ArrayTypeU2448_t738_marshaled& marshaled)
{
}
void U24ArrayTypeU2448_t738_marshal_back(const U24ArrayTypeU2448_t738_marshaled& marshaled, U24ArrayTypeU2448_t738& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void U24ArrayTypeU2448_t738_marshal_cleanup(U24ArrayTypeU2448_t738_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$64
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_4.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$64
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_4MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void U24ArrayTypeU2464_t739_marshal(const U24ArrayTypeU2464_t739& unmarshaled, U24ArrayTypeU2464_t739_marshaled& marshaled)
{
}
void U24ArrayTypeU2464_t739_marshal_back(const U24ArrayTypeU2464_t739_marshaled& marshaled, U24ArrayTypeU2464_t739& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void U24ArrayTypeU2464_t739_marshal_cleanup(U24ArrayTypeU2464_t739_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$12
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_5.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$12
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_5MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void U24ArrayTypeU2412_t740_marshal(const U24ArrayTypeU2412_t740& unmarshaled, U24ArrayTypeU2412_t740_marshaled& marshaled)
{
}
void U24ArrayTypeU2412_t740_marshal_back(const U24ArrayTypeU2412_t740_marshaled& marshaled, U24ArrayTypeU2412_t740& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void U24ArrayTypeU2412_t740_marshal_cleanup(U24ArrayTypeU2412_t740_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$16
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_6.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$16
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_6MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void U24ArrayTypeU2416_t741_marshal(const U24ArrayTypeU2416_t741& unmarshaled, U24ArrayTypeU2416_t741_marshaled& marshaled)
{
}
void U24ArrayTypeU2416_t741_marshal_back(const U24ArrayTypeU2416_t741_marshaled& marshaled, U24ArrayTypeU2416_t741& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void U24ArrayTypeU2416_t741_marshal_cleanup(U24ArrayTypeU2416_t741_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$4
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_7MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$4
void U24ArrayTypeU244_t742_marshal(const U24ArrayTypeU244_t742& unmarshaled, U24ArrayTypeU244_t742_marshaled& marshaled)
{
}
void U24ArrayTypeU244_t742_marshal_back(const U24ArrayTypeU244_t742_marshaled& marshaled, U24ArrayTypeU244_t742& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$4
void U24ArrayTypeU244_t742_marshal_cleanup(U24ArrayTypeU244_t742_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif



#ifdef __clang__
#pragma clang diagnostic pop
#endif
