// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BehaviorDefinition.hpp"
#define EXTRA_INCLUDE_PART_SEQUENCEDEFINITION
#include "Extra/SequenceDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_SEQUENCEDEFINITION
class SequenceDefinition : public BehaviorDefinition {
#include "Extra/SequenceDefinitionAPI.hpp"
public:
    virtual ~SequenceDefinition();
    virtual void load(class Json::Value, class BehaviorFactory const&);
};