#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t1784;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t53;
// System.AsyncCallback
struct AsyncCallback_t54;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void StaticGetter_1__ctor_m11952_gshared (StaticGetter_1_t1784 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define StaticGetter_1__ctor_m11952(__this, ___object, ___method, method) (( void (*) (StaticGetter_1_t1784 *, Object_t *, IntPtr_t, const MethodInfo*))StaticGetter_1__ctor_m11952_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C" Object_t * StaticGetter_1_Invoke_m11953_gshared (StaticGetter_1_t1784 * __this, const MethodInfo* method);
#define StaticGetter_1_Invoke_m11953(__this, method) (( Object_t * (*) (StaticGetter_1_t1784 *, const MethodInfo*))StaticGetter_1_Invoke_m11953_gshared)(__this, method)
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * StaticGetter_1_BeginInvoke_m11954_gshared (StaticGetter_1_t1784 * __this, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method);
#define StaticGetter_1_BeginInvoke_m11954(__this, ___callback, ___object, method) (( Object_t * (*) (StaticGetter_1_t1784 *, AsyncCallback_t54 *, Object_t *, const MethodInfo*))StaticGetter_1_BeginInvoke_m11954_gshared)(__this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * StaticGetter_1_EndInvoke_m11955_gshared (StaticGetter_1_t1784 * __this, Object_t * ___result, const MethodInfo* method);
#define StaticGetter_1_EndInvoke_m11955(__this, ___result, method) (( Object_t * (*) (StaticGetter_1_t1784 *, Object_t *, const MethodInfo*))StaticGetter_1_EndInvoke_m11955_gshared)(__this, ___result, method)
