// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SCRIPTSERVERACTORATTACKEVENT
#include "Extra/ScriptServerActorAttackEventAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTSERVERACTORATTACKEVENT
class ScriptServerActorAttackEvent {
#include "Extra/ScriptServerActorAttackEventAPI.hpp"
public:
    virtual ~ScriptServerActorAttackEvent();
    virtual bool _serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&);

public:
    MCAPI ScriptServerActorAttackEvent();
    MCAPI void setActorId(struct ActorUniqueID const&);
    MCAPI void setTargetId(struct ActorUniqueID const&);


private:
    MCAPI static class HashedString const mHash;
};