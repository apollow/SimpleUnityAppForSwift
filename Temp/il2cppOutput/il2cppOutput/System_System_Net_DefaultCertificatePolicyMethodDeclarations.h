#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.DefaultCertificatePolicy
struct DefaultCertificatePolicy_t414;
// System.Net.ServicePoint
struct ServicePoint_t428;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t456;
// System.Net.WebRequest
struct WebRequest_t418;

// System.Void System.Net.DefaultCertificatePolicy::.ctor()
extern "C" void DefaultCertificatePolicy__ctor_m1450 (DefaultCertificatePolicy_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DefaultCertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
extern "C" bool DefaultCertificatePolicy_CheckValidationResult_m1451 (DefaultCertificatePolicy_t414 * __this, ServicePoint_t428 * ___point, X509Certificate_t456 * ___certificate, WebRequest_t418 * ___request, int32_t ___certificateProblem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
