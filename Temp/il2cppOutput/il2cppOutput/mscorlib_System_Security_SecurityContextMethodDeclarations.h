#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityContext
struct SecurityContext_t1238;
// System.Threading.CompressedStack
struct CompressedStack_t1237;

// System.Void System.Security.SecurityContext::.ctor()
extern "C" void SecurityContext__ctor_m7058 (SecurityContext_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C" void SecurityContext__ctor_m7059 (SecurityContext_t1238 * __this, SecurityContext_t1238 * ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C" SecurityContext_t1238 * SecurityContext_Capture_m7060 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C" bool SecurityContext_get_FlowSuppressed_m7061 (SecurityContext_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C" CompressedStack_t1237 * SecurityContext_get_CompressedStack_m7062 (SecurityContext_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
