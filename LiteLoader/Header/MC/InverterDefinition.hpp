// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BehaviorDefinition.hpp"
#define EXTRA_INCLUDE_PART_INVERTERDEFINITION
#include "Extra/InverterDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_INVERTERDEFINITION
class InverterDefinition : public BehaviorDefinition {
#include "Extra/InverterDefinitionAPI.hpp"
public:
    virtual ~InverterDefinition();
    virtual void load(class Json::Value, class BehaviorFactory const&);
};