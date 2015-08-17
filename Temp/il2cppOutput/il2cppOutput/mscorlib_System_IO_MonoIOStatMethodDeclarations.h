#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.MonoIOStat
struct MonoIOStat_t935;
struct MonoIOStat_t935_marshaled;

void MonoIOStat_t935_marshal(const MonoIOStat_t935& unmarshaled, MonoIOStat_t935_marshaled& marshaled);
void MonoIOStat_t935_marshal_back(const MonoIOStat_t935_marshaled& marshaled, MonoIOStat_t935& unmarshaled);
void MonoIOStat_t935_marshal_cleanup(MonoIOStat_t935_marshaled& marshaled);
