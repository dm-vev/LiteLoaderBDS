// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BehaviorDefinition.hpp"
#define EXTRA_INCLUDE_PART_MOVETODEFINITION
#include "Extra/MoveToDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_MOVETODEFINITION
class MoveToDefinition : public BehaviorDefinition {
#include "Extra/MoveToDefinitionAPI.hpp"
public:
    virtual ~MoveToDefinition();
    virtual void load(class Json::Value, class BehaviorFactory const&);
};