﻿#pragma once
#include <stdint.h>
// System.Version
struct Version_t425;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.PlatformID
#include "mscorlib_System_PlatformID.h"
// System.OperatingSystem
struct  OperatingSystem_t1326  : public Object_t
{
	// System.PlatformID System.OperatingSystem::_platform
	int32_t ____platform_0;
	// System.Version System.OperatingSystem::_version
	Version_t425 * ____version_1;
	// System.String System.OperatingSystem::_servicePack
	String_t* ____servicePack_2;
};
