// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_DELAYEDATTACKDEFINITION
#include "Extra/DelayedAttackDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_DELAYEDATTACKDEFINITION
class DelayedAttackDefinition {
#include "Extra/DelayedAttackDefinitionAPI.hpp"
public:
    virtual ~DelayedAttackDefinition();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();

public:
    MCAPI DelayedAttackDefinition();
    MCAPI void initialize(class EntityContext&, class DelayedAttackGoal&);
};