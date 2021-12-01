// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BREATHABLEDEFINITION
#include "Extra/BreathableDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_BREATHABLEDEFINITION
class BreathableDefinition {
#include "Extra/BreathableDefinitionAPI.hpp"

public:
    MCAPI BreathableDefinition();
    MCAPI void addBreathableBlockDescriptor(class BlockDescriptor const&);
    MCAPI void addNonBreathableBlockDescriptor(class BlockDescriptor const&);
    MCAPI void initialize(class EntityContext&, class BreathableComponent&);

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BreathableDefinition>>&);
};