// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ITickingSystem.hpp"
#define EXTRA_INCLUDE_PART_PEEKSYSTEM
#include "Extra/PeekSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_PEEKSYSTEM
class PeekSystem : public ITickingSystem {
#include "Extra/PeekSystemAPI.hpp"
public:
    virtual ~PeekSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);
};