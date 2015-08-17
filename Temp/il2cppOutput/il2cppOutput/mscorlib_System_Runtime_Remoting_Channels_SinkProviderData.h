#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t402;
// System.Collections.Hashtable
struct Hashtable_t392;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Channels.SinkProviderData
struct  SinkProviderData_t1078  : public Object_t
{
	// System.String System.Runtime.Remoting.Channels.SinkProviderData::sinkName
	String_t* ___sinkName_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.SinkProviderData::children
	ArrayList_t402 * ___children_1;
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.SinkProviderData::properties
	Hashtable_t392 * ___properties_2;
};
