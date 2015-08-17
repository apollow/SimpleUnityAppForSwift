#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t10;
struct AsyncOperation_t10_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m554 (AsyncOperation_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m555 (AsyncOperation_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m556 (AsyncOperation_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t10_marshal(const AsyncOperation_t10& unmarshaled, AsyncOperation_t10_marshaled& marshaled);
void AsyncOperation_t10_marshal_back(const AsyncOperation_t10_marshaled& marshaled, AsyncOperation_t10& unmarshaled);
void AsyncOperation_t10_marshal_cleanup(AsyncOperation_t10_marshaled& marshaled);
