// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SCRIPTHANDCONTAINERCOMPONENT
#include "Extra/ScriptHandContainerComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTHANDCONTAINERCOMPONENT
class ScriptHandContainerComponent {
#include "Extra/ScriptHandContainerComponentAPI.hpp"
public:
    virtual ~ScriptHandContainerComponent();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
    virtual void unk_vfn_7();
    virtual bool retrieveComponentFrom(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Actor&, class ScriptApi::ScriptObjectHandle&);
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual void unk_vfn_11();
    virtual bool hasComponent(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Actor&, bool&);


private:
    MCAPI static class HashedString const mHash;
};