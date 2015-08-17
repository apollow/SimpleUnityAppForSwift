#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t1476;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1471;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t1823;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// System.Int32[]
struct Int32U5BU5D_t501;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_1.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m8615_gshared (KeyCollection_t1476 * __this, Dictionary_2_t1471 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m8615(__this, ___dictionary, method) (( void (*) (KeyCollection_t1476 *, Dictionary_2_t1471 *, const MethodInfo*))KeyCollection__ctor_m8615_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m8616_gshared (KeyCollection_t1476 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m8616(__this, ___item, method) (( void (*) (KeyCollection_t1476 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m8616_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m8617_gshared (KeyCollection_t1476 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m8617(__this, method) (( void (*) (KeyCollection_t1476 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m8617_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m8618_gshared (KeyCollection_t1476 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m8618(__this, ___item, method) (( bool (*) (KeyCollection_t1476 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m8618_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m8619_gshared (KeyCollection_t1476 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m8619(__this, ___item, method) (( bool (*) (KeyCollection_t1476 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m8619_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m8620_gshared (KeyCollection_t1476 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m8620(__this, method) (( Object_t* (*) (KeyCollection_t1476 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m8620_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m8621_gshared (KeyCollection_t1476 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m8621(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1476 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m8621_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m8622_gshared (KeyCollection_t1476 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m8622(__this, method) (( Object_t * (*) (KeyCollection_t1476 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m8622_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m8623_gshared (KeyCollection_t1476 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m8623(__this, method) (( bool (*) (KeyCollection_t1476 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m8623_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m8624_gshared (KeyCollection_t1476 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m8624(__this, method) (( Object_t * (*) (KeyCollection_t1476 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m8624_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m8625_gshared (KeyCollection_t1476 * __this, Int32U5BU5D_t501* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m8625(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1476 *, Int32U5BU5D_t501*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m8625_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1477  KeyCollection_GetEnumerator_m8626_gshared (KeyCollection_t1476 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m8626(__this, method) (( Enumerator_t1477  (*) (KeyCollection_t1476 *, const MethodInfo*))KeyCollection_GetEnumerator_m8626_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m8627_gshared (KeyCollection_t1476 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m8627(__this, method) (( int32_t (*) (KeyCollection_t1476 *, const MethodInfo*))KeyCollection_get_Count_m8627_gshared)(__this, method)
