#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct Transform_1_t1709;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t53;
// System.AsyncCallback
struct AsyncCallback_t54;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_20.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m11458_gshared (Transform_1_t1709 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m11458(__this, ___object, ___method, method) (( void (*) (Transform_1_t1709 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m11458_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t1699  Transform_1_Invoke_m11459_gshared (Transform_1_t1709 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Transform_1_Invoke_m11459(__this, ___key, ___value, method) (( KeyValuePair_2_t1699  (*) (Transform_1_t1709 *, Object_t *, bool, const MethodInfo*))Transform_1_Invoke_m11459_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m11460_gshared (Transform_1_t1709 * __this, Object_t * ___key, bool ___value, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m11460(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1709 *, Object_t *, bool, AsyncCallback_t54 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m11460_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t1699  Transform_1_EndInvoke_m11461_gshared (Transform_1_t1709 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m11461(__this, ___result, method) (( KeyValuePair_2_t1699  (*) (Transform_1_t1709 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m11461_gshared)(__this, ___result, method)
