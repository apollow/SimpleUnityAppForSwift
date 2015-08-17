#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.NotImplementedException
struct NotImplementedException_t588;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t317;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.NotImplementedException::.ctor()
extern "C" void NotImplementedException__ctor_m8010 (NotImplementedException_t588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotImplementedException::.ctor(System.String)
extern "C" void NotImplementedException__ctor_m2300 (NotImplementedException_t588 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotImplementedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NotImplementedException__ctor_m8011 (NotImplementedException_t588 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
