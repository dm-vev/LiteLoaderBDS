// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SCRIPTLEVELTICKINGAREASCOMPONENT
#include "Extra/ScriptLevelTickingAreasComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTLEVELTICKINGAREASCOMPONENT
class ScriptLevelTickingAreasComponent {
#include "Extra/ScriptLevelTickingAreasComponentAPI.hpp"
public:
    virtual ~ScriptLevelTickingAreasComponent();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
    virtual bool retrieveComponentFrom(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Level&, class ScriptApi::ScriptObjectHandle&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual bool hasComponent(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Level&, bool&);
    virtual void unk_vfn_12();


private:
    MCAPI static class HashedString const mHash;
};