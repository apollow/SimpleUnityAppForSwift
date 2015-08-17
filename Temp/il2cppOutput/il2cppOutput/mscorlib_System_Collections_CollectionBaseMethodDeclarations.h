#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.CollectionBase
struct CollectionBase_t460;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t402;
// System.Collections.IList
struct IList_t526;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;

// System.Void System.Collections.CollectionBase::.ctor()
extern "C" void CollectionBase__ctor_m2362 (CollectionBase_t460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void CollectionBase_System_Collections_ICollection_CopyTo_m4871 (CollectionBase_t460 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.CollectionBase::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * CollectionBase_System_Collections_ICollection_get_SyncRoot_m4872 (CollectionBase_t460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::System.Collections.IList.Add(System.Object)
extern "C" int32_t CollectionBase_System_Collections_IList_Add_m4873 (CollectionBase_t460 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.Contains(System.Object)
extern "C" bool CollectionBase_System_Collections_IList_Contains_m4874 (CollectionBase_t460 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t CollectionBase_System_Collections_IList_IndexOf_m4875 (CollectionBase_t460 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void CollectionBase_System_Collections_IList_Insert_m4876 (CollectionBase_t460 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.Remove(System.Object)
extern "C" void CollectionBase_System_Collections_IList_Remove_m4877 (CollectionBase_t460 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.CollectionBase::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * CollectionBase_System_Collections_IList_get_Item_m4878 (CollectionBase_t460 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void CollectionBase_System_Collections_IList_set_Item_m4879 (CollectionBase_t460 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::get_Count()
extern "C" int32_t CollectionBase_get_Count_m4880 (CollectionBase_t460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.CollectionBase::GetEnumerator()
extern "C" Object_t * CollectionBase_GetEnumerator_m4881 (CollectionBase_t460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::Clear()
extern "C" void CollectionBase_Clear_m4882 (CollectionBase_t460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::RemoveAt(System.Int32)
extern "C" void CollectionBase_RemoveAt_m4883 (CollectionBase_t460 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.CollectionBase::get_InnerList()
extern "C" ArrayList_t402 * CollectionBase_get_InnerList_m2357 (CollectionBase_t460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Collections.CollectionBase::get_List()
extern "C" Object_t * CollectionBase_get_List_m2414 (CollectionBase_t460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnClear()
extern "C" void CollectionBase_OnClear_m4884 (CollectionBase_t460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnClearComplete()
extern "C" void CollectionBase_OnClearComplete_m4885 (CollectionBase_t460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnInsert(System.Int32,System.Object)
extern "C" void CollectionBase_OnInsert_m4886 (CollectionBase_t460 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnInsertComplete(System.Int32,System.Object)
extern "C" void CollectionBase_OnInsertComplete_m4887 (CollectionBase_t460 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnRemove(System.Int32,System.Object)
extern "C" void CollectionBase_OnRemove_m4888 (CollectionBase_t460 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnRemoveComplete(System.Int32,System.Object)
extern "C" void CollectionBase_OnRemoveComplete_m4889 (CollectionBase_t460 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnSet(System.Int32,System.Object,System.Object)
extern "C" void CollectionBase_OnSet_m4890 (CollectionBase_t460 * __this, int32_t ___index, Object_t * ___oldValue, Object_t * ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnSetComplete(System.Int32,System.Object,System.Object)
extern "C" void CollectionBase_OnSetComplete_m4891 (CollectionBase_t460 * __this, int32_t ___index, Object_t * ___oldValue, Object_t * ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnValidate(System.Object)
extern "C" void CollectionBase_OnValidate_m4892 (CollectionBase_t460 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
