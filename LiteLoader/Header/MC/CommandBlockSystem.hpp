// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ITickingSystem.hpp"
#define EXTRA_INCLUDE_PART_COMMANDBLOCKSYSTEM
#include "Extra/CommandBlockSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_COMMANDBLOCKSYSTEM
class CommandBlockSystem : public ITickingSystem {
#include "Extra/CommandBlockSystemAPI.hpp"
public:
    virtual ~CommandBlockSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);
};