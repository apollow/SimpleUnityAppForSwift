#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t1100;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t317;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor()
extern "C" void LogicalCallContext__ctor_m6251 (LogicalCallContext_t1100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LogicalCallContext__ctor_m6252 (LogicalCallContext_t1100 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LogicalCallContext_GetObjectData_m6253 (LogicalCallContext_t1100 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::SetData(System.String,System.Object)
extern "C" void LogicalCallContext_SetData_m6254 (LogicalCallContext_t1100 * __this, String_t* ___name, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
