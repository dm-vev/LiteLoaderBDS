// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SCRIPTSERVERACTORSNEAKCHANGEDEVENT
#include "Extra/ScriptServerActorSneakChangedEventAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTSERVERACTORSNEAKCHANGEDEVENT
class ScriptServerActorSneakChangedEvent {
#include "Extra/ScriptServerActorSneakChangedEventAPI.hpp"
public:
    virtual ~ScriptServerActorSneakChangedEvent();
    virtual bool _serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&);

public:
    MCAPI ScriptServerActorSneakChangedEvent();
    MCAPI void setActorId(struct ActorUniqueID const&);
    MCAPI void setIsSneaking(bool);


private:
    MCAPI static class HashedString const mHash;
};