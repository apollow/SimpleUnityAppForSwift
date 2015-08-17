#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t19;
struct YieldInstruction_t19_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m654 (YieldInstruction_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t19_marshal(const YieldInstruction_t19& unmarshaled, YieldInstruction_t19_marshaled& marshaled);
void YieldInstruction_t19_marshal_back(const YieldInstruction_t19_marshaled& marshaled, YieldInstruction_t19& unmarshaled);
void YieldInstruction_t19_marshal_cleanup(YieldInstruction_t19_marshaled& marshaled);
