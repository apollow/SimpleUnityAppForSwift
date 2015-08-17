#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t22;
struct Coroutine_t22_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m38 (Coroutine_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m39 (Coroutine_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m40 (Coroutine_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t22_marshal(const Coroutine_t22& unmarshaled, Coroutine_t22_marshaled& marshaled);
void Coroutine_t22_marshal_back(const Coroutine_t22_marshaled& marshaled, Coroutine_t22& unmarshaled);
void Coroutine_t22_marshal_cleanup(Coroutine_t22_marshaled& marshaled);
