// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ITickingSystem.hpp"
#define EXTRA_INCLUDE_PART_MOVECONTROLSYSTEM
#include "Extra/MoveControlSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_MOVECONTROLSYSTEM
class MoveControlSystem : public ITickingSystem {
#include "Extra/MoveControlSystemAPI.hpp"
public:
    virtual ~MoveControlSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);
};