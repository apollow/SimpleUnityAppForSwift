#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t865;
// System.Exception
struct Exception_t74;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t868;
// Mono.Xml.SmallXmlParser/IContentHandler
struct IContentHandler_t867;
// Mono.Xml.SmallXmlParser/AttrListImpl
struct AttrListImpl_t866;

// System.Void Mono.Xml.SmallXmlParser::.ctor()
extern "C" void SmallXmlParser__ctor_m4709 (SmallXmlParser_t865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Xml.SmallXmlParser::Error(System.String)
extern "C" Exception_t74 * SmallXmlParser_Error_m4710 (SmallXmlParser_t865 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Xml.SmallXmlParser::UnexpectedEndError()
extern "C" Exception_t74 * SmallXmlParser_UnexpectedEndError_m4711 (SmallXmlParser_t865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.SmallXmlParser::IsNameChar(System.Char,System.Boolean)
extern "C" bool SmallXmlParser_IsNameChar_m4712 (SmallXmlParser_t865 * __this, uint16_t ___c, bool ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.SmallXmlParser::IsWhitespace(System.Int32)
extern "C" bool SmallXmlParser_IsWhitespace_m4713 (SmallXmlParser_t865 * __this, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces()
extern "C" void SmallXmlParser_SkipWhitespaces_m4714 (SmallXmlParser_t865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::HandleWhitespaces()
extern "C" void SmallXmlParser_HandleWhitespaces_m4715 (SmallXmlParser_t865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces(System.Boolean)
extern "C" void SmallXmlParser_SkipWhitespaces_m4716 (SmallXmlParser_t865 * __this, bool ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::Peek()
extern "C" int32_t SmallXmlParser_Peek_m4717 (SmallXmlParser_t865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::Read()
extern "C" int32_t SmallXmlParser_Read_m4718 (SmallXmlParser_t865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Expect(System.Int32)
extern "C" void SmallXmlParser_Expect_m4719 (SmallXmlParser_t865 * __this, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser::ReadUntil(System.Char,System.Boolean)
extern "C" String_t* SmallXmlParser_ReadUntil_m4720 (SmallXmlParser_t865 * __this, uint16_t ___until, bool ___handleReferences, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser::ReadName()
extern "C" String_t* SmallXmlParser_ReadName_m4721 (SmallXmlParser_t865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Parse(System.IO.TextReader,Mono.Xml.SmallXmlParser/IContentHandler)
extern "C" void SmallXmlParser_Parse_m4722 (SmallXmlParser_t865 * __this, TextReader_t868 * ___input, Object_t * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Cleanup()
extern "C" void SmallXmlParser_Cleanup_m4723 (SmallXmlParser_t865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadContent()
extern "C" void SmallXmlParser_ReadContent_m4724 (SmallXmlParser_t865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::HandleBufferedContent()
extern "C" void SmallXmlParser_HandleBufferedContent_m4725 (SmallXmlParser_t865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadCharacters()
extern "C" void SmallXmlParser_ReadCharacters_m4726 (SmallXmlParser_t865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadReference()
extern "C" void SmallXmlParser_ReadReference_m4727 (SmallXmlParser_t865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::ReadCharacterReference()
extern "C" int32_t SmallXmlParser_ReadCharacterReference_m4728 (SmallXmlParser_t865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadAttribute(Mono.Xml.SmallXmlParser/AttrListImpl)
extern "C" void SmallXmlParser_ReadAttribute_m4729 (SmallXmlParser_t865 * __this, AttrListImpl_t866 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadCDATASection()
extern "C" void SmallXmlParser_ReadCDATASection_m4730 (SmallXmlParser_t865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadComment()
extern "C" void SmallXmlParser_ReadComment_m4731 (SmallXmlParser_t865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
