// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SCRIPTPRINTLOGGER
#include "Extra/ScriptPrintLoggerAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTPRINTLOGGER
class ScriptPrintLogger {
#include "Extra/ScriptPrintLoggerAPI.hpp"
public:
    virtual ~ScriptPrintLogger();
    virtual void onInfo(struct Scripting::ContextId, class std::basic_string_view<char, struct std::char_traits<char>> const&);
    virtual void onWarn(struct Scripting::ContextId, class std::basic_string_view<char, struct std::char_traits<char>> const&);
    virtual void onError(struct Scripting::ContextId, class std::basic_string_view<char, struct std::char_traits<char>> const&);
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
};