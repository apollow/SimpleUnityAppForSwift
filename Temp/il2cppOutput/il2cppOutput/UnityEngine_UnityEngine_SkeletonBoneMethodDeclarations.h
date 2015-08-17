#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t147;
struct SkeletonBone_t147_marshaled;

void SkeletonBone_t147_marshal(const SkeletonBone_t147& unmarshaled, SkeletonBone_t147_marshaled& marshaled);
void SkeletonBone_t147_marshal_back(const SkeletonBone_t147_marshaled& marshaled, SkeletonBone_t147& unmarshaled);
void SkeletonBone_t147_marshal_cleanup(SkeletonBone_t147_marshaled& marshaled);
