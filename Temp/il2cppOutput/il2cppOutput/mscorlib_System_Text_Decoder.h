#pragma once
#include <stdint.h>
// System.Text.DecoderFallback
struct DecoderFallback_t1251;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1252;
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.Decoder
struct  Decoder_t919  : public Object_t
{
	// System.Text.DecoderFallback System.Text.Decoder::fallback
	DecoderFallback_t1251 * ___fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::fallback_buffer
	DecoderFallbackBuffer_t1252 * ___fallback_buffer_1;
};
