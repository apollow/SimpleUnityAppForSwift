﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.DropConnectionRequest
struct DropConnectionRequest_t176;
// System.String
struct String_t;
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"

// System.Void UnityEngine.Networking.Match.DropConnectionRequest::.ctor()
extern "C" void DropConnectionRequest__ctor_m873 (DropConnectionRequest_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DropConnectionRequest::get_networkId()
extern "C" uint64_t DropConnectionRequest_get_networkId_m874 (DropConnectionRequest_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void DropConnectionRequest_set_networkId_m875 (DropConnectionRequest_t176 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.DropConnectionRequest::get_nodeId()
extern "C" uint16_t DropConnectionRequest_get_nodeId_m876 (DropConnectionRequest_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void DropConnectionRequest_set_nodeId_m877 (DropConnectionRequest_t176 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.DropConnectionRequest::ToString()
extern "C" String_t* DropConnectionRequest_ToString_m878 (DropConnectionRequest_t176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
