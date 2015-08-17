#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t18;
struct WaitForSeconds_t18_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m35 (WaitForSeconds_t18 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t18_marshal(const WaitForSeconds_t18& unmarshaled, WaitForSeconds_t18_marshaled& marshaled);
void WaitForSeconds_t18_marshal_back(const WaitForSeconds_t18_marshaled& marshaled, WaitForSeconds_t18& unmarshaled);
void WaitForSeconds_t18_marshal_cleanup(WaitForSeconds_t18_marshaled& marshaled);
