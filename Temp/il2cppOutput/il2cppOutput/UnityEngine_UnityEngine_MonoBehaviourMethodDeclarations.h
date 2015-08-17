#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3;
// UnityEngine.Coroutine
struct Coroutine_t22;
struct Coroutine_t22_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t286;

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m11 (MonoBehaviour_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t22 * MonoBehaviour_StartCoroutine_m624 (MonoBehaviour_t3 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t22 * MonoBehaviour_StartCoroutine_Auto_m625 (MonoBehaviour_t3 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
