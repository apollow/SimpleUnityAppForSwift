﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t1025;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t53;
// System.AsyncCallback
struct AsyncCallback_t54;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/GetterAdapter::.ctor(System.Object,System.IntPtr)
extern "C" void GetterAdapter__ctor_m6037 (GetterAdapter_t1025 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty/GetterAdapter::Invoke(System.Object)
extern "C" Object_t * GetterAdapter_Invoke_m6038 (GetterAdapter_t1025 * __this, Object_t * ____this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Object_t * pinvoke_delegate_wrapper_GetterAdapter_t1025(Il2CppObject* delegate, Object_t * ____this);
// System.IAsyncResult System.Reflection.MonoProperty/GetterAdapter::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * GetterAdapter_BeginInvoke_m6039 (GetterAdapter_t1025 * __this, Object_t * ____this, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty/GetterAdapter::EndInvoke(System.IAsyncResult)
extern "C" Object_t * GetterAdapter_EndInvoke_m6040 (GetterAdapter_t1025 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
