#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t839;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t613;
// System.Byte[]
struct ByteU5BU5D_t112;

// System.Void Mono.Security.Cryptography.MACAlgorithm::.ctor(System.Security.Cryptography.SymmetricAlgorithm)
extern "C" void MACAlgorithm__ctor_m4506 (MACAlgorithm_t839 * __this, SymmetricAlgorithm_t613 * ___algorithm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Initialize(System.Byte[])
extern "C" void MACAlgorithm_Initialize_m4507 (MACAlgorithm_t839 * __this, ByteU5BU5D_t112* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Core(System.Byte[],System.Int32,System.Int32)
extern "C" void MACAlgorithm_Core_m4508 (MACAlgorithm_t839 * __this, ByteU5BU5D_t112* ___rgb, int32_t ___ib, int32_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::Final()
extern "C" ByteU5BU5D_t112* MACAlgorithm_Final_m4509 (MACAlgorithm_t839 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
