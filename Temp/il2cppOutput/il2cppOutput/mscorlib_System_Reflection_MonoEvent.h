#pragma once
#include <stdint.h>
// System.Reflection.EventInfo
#include "mscorlib_System_Reflection_EventInfo.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.MonoEvent
struct  MonoEvent_t  : public EventInfo_t
{
	// System.IntPtr System.Reflection.MonoEvent::klass
	IntPtr_t ___klass_1;
	// System.IntPtr System.Reflection.MonoEvent::handle
	IntPtr_t ___handle_2;
};
