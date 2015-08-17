#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SetupCoroutine
struct SetupCoroutine_t226;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void UnityEngine.SetupCoroutine::.ctor()
extern "C" void SetupCoroutine__ctor_m1041 (SetupCoroutine_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.SetupCoroutine::InvokeMember(System.Object,System.String,System.Object)
extern "C" Object_t * SetupCoroutine_InvokeMember_m1042 (Object_t * __this /* static, unused */, Object_t * ___behaviour, String_t* ___name, Object_t * ___variable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.SetupCoroutine::InvokeStatic(System.Type,System.String,System.Object)
extern "C" Object_t * SetupCoroutine_InvokeStatic_m1043 (Object_t * __this /* static, unused */, Type_t * ___klass, String_t* ___name, Object_t * ___variable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
