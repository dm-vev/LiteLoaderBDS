// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BRIBEABLEDEFINITION
#include "Extra/BribeableDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_BRIBEABLEDEFINITION
class BribeableDefinition {
#include "Extra/BribeableDefinitionAPI.hpp"

public:
    MCAPI void addBribeItem(class ItemDescriptor const&);
    MCAPI void initialize(class EntityContext&, class BribeableComponent&);

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BribeableDefinition>>&);
};