#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
struct TlsServerFinished_t729;
// Mono.Security.Protocol.Tls.Context
struct Context_t677;
// System.Byte[]
struct ByteU5BU5D_t112;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerFinished__ctor_m3270 (TlsServerFinished_t729 * __this, Context_t677 * ___context, ByteU5BU5D_t112* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.cctor()
extern "C" void TlsServerFinished__cctor_m3271 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::Update()
extern "C" void TlsServerFinished_Update_m3272 (TlsServerFinished_t729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsSsl3()
extern "C" void TlsServerFinished_ProcessAsSsl3_m3273 (TlsServerFinished_t729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsTls1()
extern "C" void TlsServerFinished_ProcessAsTls1_m3274 (TlsServerFinished_t729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
