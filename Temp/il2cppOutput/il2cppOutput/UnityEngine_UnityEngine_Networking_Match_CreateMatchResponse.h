﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponse.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
// UnityEngine.Networking.Match.CreateMatchResponse
struct  CreateMatchResponse_t172  : public BasicResponse_t169
{
	// System.String UnityEngine.Networking.Match.CreateMatchResponse::<address>k__BackingField
	String_t* ___U3CaddressU3Ek__BackingField_2;
	// System.Int32 UnityEngine.Networking.Match.CreateMatchResponse::<port>k__BackingField
	int32_t ___U3CportU3Ek__BackingField_3;
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.CreateMatchResponse::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_4;
	// System.String UnityEngine.Networking.Match.CreateMatchResponse::<accessTokenString>k__BackingField
	String_t* ___U3CaccessTokenStringU3Ek__BackingField_5;
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.CreateMatchResponse::<nodeId>k__BackingField
	uint16_t ___U3CnodeIdU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.Match.CreateMatchResponse::<usingRelay>k__BackingField
	bool ___U3CusingRelayU3Ek__BackingField_7;
};
