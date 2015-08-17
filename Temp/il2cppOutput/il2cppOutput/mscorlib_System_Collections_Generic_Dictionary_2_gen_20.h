#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t501;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1466;
// System.Object[]
struct ObjectU5BU5D_t207;
// System.Boolean[]
struct BooleanU5BU5D_t438;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1497;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t317;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>
struct Transform_1_t1697;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct  Dictionary_2_t1698  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::table
	Int32U5BU5D_t501* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::linkSlots
	LinkU5BU5D_t1466* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::keySlots
	ObjectU5BU5D_t207* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::valueSlots
	BooleanU5BU5D_t438* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::serialization_info
	SerializationInfo_t317 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t1698_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<>f__am$cacheB
	Transform_1_t1697 * ___U3CU3Ef__amU24cacheB_15;
};
