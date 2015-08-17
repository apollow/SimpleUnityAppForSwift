﻿#pragma once
#include <stdint.h>
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t455;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_t463;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
#include "System_System_Security_Cryptography_X509Certificates_X509Cha_1.h"
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct  X509ChainElement_t465  : public Object_t
{
	// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509ChainElement::certificate
	X509Certificate2_t455 * ___certificate_0;
	// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509ChainElement::status
	X509ChainStatusU5BU5D_t463* ___status_1;
	// System.String System.Security.Cryptography.X509Certificates.X509ChainElement::info
	String_t* ___info_2;
	// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainElement::compressed_status_flags
	int32_t ___compressed_status_flags_3;
};
