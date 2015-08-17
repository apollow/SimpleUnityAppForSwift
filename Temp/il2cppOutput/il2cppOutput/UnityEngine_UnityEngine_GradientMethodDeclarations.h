#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t49;
struct Gradient_t49_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m147 (Gradient_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m148 (Gradient_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m149 (Gradient_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m150 (Gradient_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t49_marshal(const Gradient_t49& unmarshaled, Gradient_t49_marshaled& marshaled);
void Gradient_t49_marshal_back(const Gradient_t49_marshaled& marshaled, Gradient_t49& unmarshaled);
void Gradient_t49_marshal_cleanup(Gradient_t49_marshaled& marshaled);
