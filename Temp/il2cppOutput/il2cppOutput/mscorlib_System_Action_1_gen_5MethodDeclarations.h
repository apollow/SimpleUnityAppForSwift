#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Object>
struct Action_1_t1449;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t53;
// System.AsyncCallback
struct AsyncCallback_t54;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m8341_gshared (Action_1_t1449 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m8341(__this, ___object, ___method, method) (( void (*) (Action_1_t1449 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m8341_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Object>::Invoke(T)
extern "C" void Action_1_Invoke_m8342_gshared (Action_1_t1449 * __this, Object_t * ___obj, const MethodInfo* method);
#define Action_1_Invoke_m8342(__this, ___obj, method) (( void (*) (Action_1_t1449 *, Object_t *, const MethodInfo*))Action_1_Invoke_m8342_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m8344_gshared (Action_1_t1449 * __this, Object_t * ___obj, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m8344(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1449 *, Object_t *, AsyncCallback_t54 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m8344_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m8346_gshared (Action_1_t1449 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m8346(__this, ___result, method) (( void (*) (Action_1_t1449 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m8346_gshared)(__this, ___result, method)
