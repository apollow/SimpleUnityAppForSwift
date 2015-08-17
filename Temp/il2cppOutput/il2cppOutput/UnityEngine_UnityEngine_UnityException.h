#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Exception
#include "mscorlib_System_Exception.h"
// UnityEngine.UnityException
struct  UnityException_t255  : public Exception_t74
{
	// System.String UnityEngine.UnityException::unityStackTrace
	String_t* ___unityStackTrace_12;
};
