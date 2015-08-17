#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UTF7Encoding/UTF7Decoder
struct UTF7Decoder_t1269;
// System.Byte[]
struct ByteU5BU5D_t112;
// System.Char[]
struct CharU5BU5D_t307;

// System.Void System.Text.UTF7Encoding/UTF7Decoder::.ctor()
extern "C" void UTF7Decoder__ctor_m7280 (UTF7Decoder_t1269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding/UTF7Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UTF7Decoder_GetChars_m7281 (UTF7Decoder_t1269 * __this, ByteU5BU5D_t112* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t307* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
