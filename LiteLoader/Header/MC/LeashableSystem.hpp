// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ITickingSystem.hpp"
#define EXTRA_INCLUDE_PART_LEASHABLESYSTEM
#include "Extra/LeashableSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_LEASHABLESYSTEM
class LeashableSystem : public ITickingSystem {
#include "Extra/LeashableSystemAPI.hpp"
public:
    virtual ~LeashableSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);
};