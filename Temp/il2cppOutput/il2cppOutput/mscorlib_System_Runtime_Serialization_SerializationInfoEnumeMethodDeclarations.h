#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t1183;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t402;
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntry.h"

// System.Void System.Runtime.Serialization.SerializationInfoEnumerator::.ctor(System.Collections.ArrayList)
extern "C" void SerializationInfoEnumerator__ctor_m6652 (SerializationInfoEnumerator_t1183 * __this, ArrayList_t402 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationInfoEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * SerializationInfoEnumerator_System_Collections_IEnumerator_get_Current_m6653 (SerializationInfoEnumerator_t1183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationEntry System.Runtime.Serialization.SerializationInfoEnumerator::get_Current()
extern "C" SerializationEntry_t1181  SerializationInfoEnumerator_get_Current_m6654 (SerializationInfoEnumerator_t1183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationInfoEnumerator::get_Name()
extern "C" String_t* SerializationInfoEnumerator_get_Name_m6655 (SerializationInfoEnumerator_t1183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationInfoEnumerator::get_Value()
extern "C" Object_t * SerializationInfoEnumerator_get_Value_m6656 (SerializationInfoEnumerator_t1183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::MoveNext()
extern "C" bool SerializationInfoEnumerator_MoveNext_m6657 (SerializationInfoEnumerator_t1183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
