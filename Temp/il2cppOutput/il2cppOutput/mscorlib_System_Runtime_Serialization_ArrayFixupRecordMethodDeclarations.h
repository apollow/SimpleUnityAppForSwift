#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.ArrayFixupRecord
struct ArrayFixupRecord_t1169;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1167;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1160;

// System.Void System.Runtime.Serialization.ArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32,System.Runtime.Serialization.ObjectRecord)
extern "C" void ArrayFixupRecord__ctor_m6605 (ArrayFixupRecord_t1169 * __this, ObjectRecord_t1167 * ___objectToBeFixed, int32_t ___index, ObjectRecord_t1167 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void ArrayFixupRecord_FixupImpl_m6606 (ArrayFixupRecord_t1169 * __this, ObjectManager_t1160 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
