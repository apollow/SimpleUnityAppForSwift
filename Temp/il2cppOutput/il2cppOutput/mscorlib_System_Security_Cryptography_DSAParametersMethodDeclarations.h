#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t593;
struct DSAParameters_t593_marshaled;

void DSAParameters_t593_marshal(const DSAParameters_t593& unmarshaled, DSAParameters_t593_marshaled& marshaled);
void DSAParameters_t593_marshal_back(const DSAParameters_t593_marshaled& marshaled, DSAParameters_t593& unmarshaled);
void DSAParameters_t593_marshal_cleanup(DSAParameters_t593_marshaled& marshaled);
