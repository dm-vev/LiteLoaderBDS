// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ITickingSystem.hpp"
#define EXTRA_INCLUDE_PART_ENVIRONMENTSENSORSYSTEM
#include "Extra/EnvironmentSensorSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_ENVIRONMENTSENSORSYSTEM
class EnvironmentSensorSystem : public ITickingSystem {
#include "Extra/EnvironmentSensorSystemAPI.hpp"
public:
    virtual ~EnvironmentSensorSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);
};