#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.NotSupportedException
struct NotSupportedException_t582;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t317;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.NotSupportedException::.ctor()
extern "C" void NotSupportedException__ctor_m2299 (NotSupportedException_t582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C" void NotSupportedException__ctor_m2270 (NotSupportedException_t582 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NotSupportedException__ctor_m8012 (NotSupportedException_t582 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
