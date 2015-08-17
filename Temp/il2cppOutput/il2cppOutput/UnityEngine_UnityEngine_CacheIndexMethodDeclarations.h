#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t115;
struct CacheIndex_t115_marshaled;

void CacheIndex_t115_marshal(const CacheIndex_t115& unmarshaled, CacheIndex_t115_marshaled& marshaled);
void CacheIndex_t115_marshal_back(const CacheIndex_t115_marshaled& marshaled, CacheIndex_t115& unmarshaled);
void CacheIndex_t115_marshal_cleanup(CacheIndex_t115_marshaled& marshaled);
