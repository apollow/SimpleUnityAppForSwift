#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t919;
// System.Text.DecoderFallback
struct DecoderFallback_t1251;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1252;
// System.Byte[]
struct ByteU5BU5D_t112;
// System.Char[]
struct CharU5BU5D_t307;

// System.Void System.Text.Decoder::.ctor()
extern "C" void Decoder__ctor_m7125 (Decoder_t919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C" void Decoder_set_Fallback_m7126 (Decoder_t919 * __this, DecoderFallback_t1251 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C" DecoderFallbackBuffer_t1252 * Decoder_get_FallbackBuffer_m7127 (Decoder_t919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
