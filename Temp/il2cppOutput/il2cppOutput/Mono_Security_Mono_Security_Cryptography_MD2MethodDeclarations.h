#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MD2
struct MD2_t648;
// System.String
struct String_t;

// System.Void Mono.Security.Cryptography.MD2::.ctor()
extern "C" void MD2__ctor_m2607 (MD2_t648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Cryptography.MD2 Mono.Security.Cryptography.MD2::Create()
extern "C" MD2_t648 * MD2_Create_m2608 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Cryptography.MD2 Mono.Security.Cryptography.MD2::Create(System.String)
extern "C" MD2_t648 * MD2_Create_m2609 (Object_t * __this /* static, unused */, String_t* ___hashName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
