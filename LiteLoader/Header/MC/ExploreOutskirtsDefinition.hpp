// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_EXPLOREOUTSKIRTSDEFINITION
#include "Extra/ExploreOutskirtsDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_EXPLOREOUTSKIRTSDEFINITION
class ExploreOutskirtsDefinition {
#include "Extra/ExploreOutskirtsDefinitionAPI.hpp"
public:
    virtual ~ExploreOutskirtsDefinition();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();

public:
    MCAPI ExploreOutskirtsDefinition();
    MCAPI void initialize(class EntityContext&, class ExploreOutskirtsGoal&);
};