#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.WellKnownServiceTypeEntry
struct WellKnownServiceTypeEntry_t1149;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Remoting.WellKnownObjectMode
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectMode.h"

// System.Void System.Runtime.Remoting.WellKnownServiceTypeEntry::.ctor(System.String,System.String,System.String,System.Runtime.Remoting.WellKnownObjectMode)
extern "C" void WellKnownServiceTypeEntry__ctor_m6529 (WellKnownServiceTypeEntry_t1149 * __this, String_t* ___typeName, String_t* ___assemblyName, String_t* ___objectUri, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.WellKnownObjectMode System.Runtime.Remoting.WellKnownServiceTypeEntry::get_Mode()
extern "C" int32_t WellKnownServiceTypeEntry_get_Mode_m6530 (WellKnownServiceTypeEntry_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.WellKnownServiceTypeEntry::get_ObjectType()
extern "C" Type_t * WellKnownServiceTypeEntry_get_ObjectType_m6531 (WellKnownServiceTypeEntry_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.WellKnownServiceTypeEntry::get_ObjectUri()
extern "C" String_t* WellKnownServiceTypeEntry_get_ObjectUri_m6532 (WellKnownServiceTypeEntry_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.WellKnownServiceTypeEntry::ToString()
extern "C" String_t* WellKnownServiceTypeEntry_ToString_m6533 (WellKnownServiceTypeEntry_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
