#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Transform/Enumerator
struct Enumerator_t126;
// System.Object
struct Object_t;
// UnityEngine.Transform
struct Transform_t101;

// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
extern "C" void Enumerator__ctor_m646 (Enumerator_t126 * __this, Transform_t101 * ___outer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Transform/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m647 (Enumerator_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m648 (Enumerator_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
