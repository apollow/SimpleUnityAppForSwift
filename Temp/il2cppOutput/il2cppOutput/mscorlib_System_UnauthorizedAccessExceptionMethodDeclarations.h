#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnauthorizedAccessException
struct UnauthorizedAccessException_t1364;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t317;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnauthorizedAccessException::.ctor()
extern "C" void UnauthorizedAccessException__ctor_m8219 (UnauthorizedAccessException_t1364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnauthorizedAccessException::.ctor(System.String)
extern "C" void UnauthorizedAccessException__ctor_m8220 (UnauthorizedAccessException_t1364 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnauthorizedAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnauthorizedAccessException__ctor_m8221 (UnauthorizedAccessException_t1364 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
