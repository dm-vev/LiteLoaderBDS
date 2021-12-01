// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_GENETICSDEFINITION
#include "Extra/GeneticsDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_GENETICSDEFINITION
class GeneticsDefinition {
#include "Extra/GeneticsDefinitionAPI.hpp"

public:
    MCAPI GeneticsDefinition();
    MCAPI void addGeneDefinition(struct GeneDefinition const&);
    MCAPI void initialize(class EntityContext&, class GeneticsComponent&);

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GeneticsDefinition>>&);

private:
    MCAPI static float const DEFAULT_MUTATION_RATE;
};