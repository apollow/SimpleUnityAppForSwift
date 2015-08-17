#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
struct Transform_1_t1505;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t53;
// System.AsyncCallback
struct AsyncCallback_t54;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m8926_gshared (Transform_1_t1505 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m8926(__this, ___object, ___method, method) (( void (*) (Transform_1_t1505 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m8926_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m8927_gshared (Transform_1_t1505 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m8927(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t1505 *, Object_t *, Object_t *, const MethodInfo*))Transform_1_Invoke_m8927_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m8928_gshared (Transform_1_t1505 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m8928(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1505 *, Object_t *, Object_t *, AsyncCallback_t54 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m8928_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m8929_gshared (Transform_1_t1505 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m8929(__this, ___result, method) (( Object_t * (*) (Transform_1_t1505 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m8929_gshared)(__this, ___result, method)
