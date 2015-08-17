#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t816;
struct PreviousInfo_t816_marshaled;

// System.Void Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::.ctor(System.Boolean)
extern "C" void PreviousInfo__ctor_m4284 (PreviousInfo_t816 * __this, bool ___dummy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void PreviousInfo_t816_marshal(const PreviousInfo_t816& unmarshaled, PreviousInfo_t816_marshaled& marshaled);
void PreviousInfo_t816_marshal_back(const PreviousInfo_t816_marshaled& marshaled, PreviousInfo_t816& unmarshaled);
void PreviousInfo_t816_marshal_cleanup(PreviousInfo_t816_marshaled& marshaled);
