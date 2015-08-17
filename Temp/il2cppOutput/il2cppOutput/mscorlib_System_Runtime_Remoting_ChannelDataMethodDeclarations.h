#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ChannelData
struct ChannelData_t1134;
// System.Collections.ArrayList
struct ArrayList_t402;
// System.Collections.Hashtable
struct Hashtable_t392;

// System.Void System.Runtime.Remoting.ChannelData::.ctor()
extern "C" void ChannelData__ctor_m6458 (ChannelData_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ServerProviders()
extern "C" ArrayList_t402 * ChannelData_get_ServerProviders_m6459 (ChannelData_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ClientProviders()
extern "C" ArrayList_t402 * ChannelData_get_ClientProviders_m6460 (ChannelData_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Runtime.Remoting.ChannelData::get_CustomProperties()
extern "C" Hashtable_t392 * ChannelData_get_CustomProperties_m6461 (ChannelData_t1134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ChannelData::CopyFrom(System.Runtime.Remoting.ChannelData)
extern "C" void ChannelData_CopyFrom_m6462 (ChannelData_t1134 * __this, ChannelData_t1134 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
