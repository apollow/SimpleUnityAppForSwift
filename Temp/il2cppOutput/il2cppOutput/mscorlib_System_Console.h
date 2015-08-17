#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t606;
// System.IO.TextReader
struct TextReader_t868;
// System.Text.Encoding
struct Encoding_t288;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t605  : public Object_t
{
};
struct Console_t605_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t606 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t606 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t868 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t288 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t288 * ___outputEncoding_4;
};
