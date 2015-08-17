#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct Transform_1_t1484;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t53;
// System.AsyncCallback
struct AsyncCallback_t54;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m8680_gshared (Transform_1_t1484 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m8680(__this, ___object, ___method, method) (( void (*) (Transform_1_t1484 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m8680_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t1472  Transform_1_Invoke_m8681_gshared (Transform_1_t1484 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m8681(__this, ___key, ___value, method) (( KeyValuePair_2_t1472  (*) (Transform_1_t1484 *, int32_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m8681_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m8682_gshared (Transform_1_t1484 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m8682(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1484 *, int32_t, Object_t *, AsyncCallback_t54 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m8682_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t1472  Transform_1_EndInvoke_m8683_gshared (Transform_1_t1484 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m8683(__this, ___result, method) (( KeyValuePair_2_t1472  (*) (Transform_1_t1484 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m8683_gshared)(__this, ___result, method)
