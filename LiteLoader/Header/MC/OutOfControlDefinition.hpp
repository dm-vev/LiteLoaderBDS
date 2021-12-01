// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_OUTOFCONTROLDEFINITION
#include "Extra/OutOfControlDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_OUTOFCONTROLDEFINITION
class OutOfControlDefinition {
#include "Extra/OutOfControlDefinitionAPI.hpp"

public:
    MCAPI void initialize(class EntityContext&, class OutOfControlComponent&) const;
    MCAPI void uninitialize(class EntityContext&, class OutOfControlComponent&) const;

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class OutOfControlDefinition>>&);
};