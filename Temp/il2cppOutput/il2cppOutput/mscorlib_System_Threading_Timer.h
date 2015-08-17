#pragma once
#include <stdint.h>
// System.Threading.Timer/Scheduler
struct Scheduler_t1289;
// System.Threading.TimerCallback
struct TimerCallback_t1290;
// System.Object
struct Object_t;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.Threading.Timer
struct  Timer_t1083  : public MarshalByRefObject_t441
{
	// System.Threading.TimerCallback System.Threading.Timer::callback
	TimerCallback_t1290 * ___callback_2;
	// System.Object System.Threading.Timer::state
	Object_t * ___state_3;
	// System.Int64 System.Threading.Timer::due_time_ms
	int64_t ___due_time_ms_4;
	// System.Int64 System.Threading.Timer::period_ms
	int64_t ___period_ms_5;
	// System.Int64 System.Threading.Timer::next_run
	int64_t ___next_run_6;
	// System.Boolean System.Threading.Timer::disposed
	bool ___disposed_7;
};
struct Timer_t1083_StaticFields{
	// System.Threading.Timer/Scheduler System.Threading.Timer::scheduler
	Scheduler_t1289 * ___scheduler_1;
};
