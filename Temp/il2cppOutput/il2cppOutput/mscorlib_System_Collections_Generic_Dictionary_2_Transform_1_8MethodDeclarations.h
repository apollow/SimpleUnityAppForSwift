﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>
struct Transform_1_t1521;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t53;
// System.AsyncCallback
struct AsyncCallback_t54;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m9152_gshared (Transform_1_t1521 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m9152(__this, ___object, ___method, method) (( void (*) (Transform_1_t1521 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m9152_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m9153_gshared (Transform_1_t1521 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m9153(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t1521 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m9153_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m9154_gshared (Transform_1_t1521 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m9154(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1521 *, Object_t *, int32_t, AsyncCallback_t54 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m9154_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m9155_gshared (Transform_1_t1521 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m9155(__this, ___result, method) (( Object_t * (*) (Transform_1_t1521 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m9155_gshared)(__this, ___result, method)
