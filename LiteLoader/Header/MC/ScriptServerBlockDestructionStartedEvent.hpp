// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SCRIPTSERVERBLOCKDESTRUCTIONSTARTEDEVENT
#include "Extra/ScriptServerBlockDestructionStartedEventAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTSERVERBLOCKDESTRUCTIONSTARTEDEVENT
class ScriptServerBlockDestructionStartedEvent {
#include "Extra/ScriptServerBlockDestructionStartedEventAPI.hpp"
public:
    virtual ~ScriptServerBlockDestructionStartedEvent();
    virtual void unk_vfn_1();

public:
    MCAPI ScriptServerBlockDestructionStartedEvent();
    MCAPI void setActorId(struct ActorUniqueID const&);
    MCAPI void setBlockPos(class BlockPos const&);


private:
    MCAPI static class HashedString const mHash;
};