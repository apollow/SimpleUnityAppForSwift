#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.ListMatchResponse
struct ListMatchResponse_t182;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
struct List_1_t181;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void UnityEngine.Networking.Match.ListMatchResponse::.ctor()
extern "C" void ListMatchResponse__ctor_m917 (ListMatchResponse_t182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc> UnityEngine.Networking.Match.ListMatchResponse::get_matches()
extern "C" List_1_t181 * ListMatchResponse_get_matches_m918 (ListMatchResponse_t182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchResponse::set_matches(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>)
extern "C" void ListMatchResponse_set_matches_m919 (ListMatchResponse_t182 * __this, List_1_t181 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.ListMatchResponse::ToString()
extern "C" String_t* ListMatchResponse_ToString_m920 (ListMatchResponse_t182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchResponse::Parse(System.Object)
extern "C" void ListMatchResponse_Parse_m921 (ListMatchResponse_t182 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
