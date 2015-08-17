#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t591;
struct RSAParameters_t591_marshaled;

void RSAParameters_t591_marshal(const RSAParameters_t591& unmarshaled, RSAParameters_t591_marshaled& marshaled);
void RSAParameters_t591_marshal_back(const RSAParameters_t591_marshaled& marshaled, RSAParameters_t591& unmarshaled);
void RSAParameters_t591_marshal_cleanup(RSAParameters_t591_marshaled& marshaled);
