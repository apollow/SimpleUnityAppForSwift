#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>
struct Transform_1_t1633;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t53;
// System.AsyncCallback
struct AsyncCallback_t54;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m10783_gshared (Transform_1_t1633 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m10783(__this, ___object, ___method, method) (( void (*) (Transform_1_t1633 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m10783_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t567  Transform_1_Invoke_m10784_gshared (Transform_1_t1633 * __this, Object_t * ___key, KeyValuePair_2_t1500  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m10784(__this, ___key, ___value, method) (( DictionaryEntry_t567  (*) (Transform_1_t1633 *, Object_t *, KeyValuePair_2_t1500 , const MethodInfo*))Transform_1_Invoke_m10784_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m10785_gshared (Transform_1_t1633 * __this, Object_t * ___key, KeyValuePair_2_t1500  ___value, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m10785(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1633 *, Object_t *, KeyValuePair_2_t1500 , AsyncCallback_t54 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m10785_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t567  Transform_1_EndInvoke_m10786_gshared (Transform_1_t1633 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m10786(__this, ___result, method) (( DictionaryEntry_t567  (*) (Transform_1_t1633 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m10786_gshared)(__this, ___result, method)
