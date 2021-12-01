// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_CONDITIONALBANDWIDTHOPTIMIZATIONDEFINITION
#include "Extra/ConditionalBandwidthOptimizationDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_CONDITIONALBANDWIDTHOPTIMIZATIONDEFINITION
class ConditionalBandwidthOptimizationDefinition {
#include "Extra/ConditionalBandwidthOptimizationDefinitionAPI.hpp"

public:
    MCAPI void addConditionalBandwidthOptimization(struct ConditionalBandwidthOptimization const&);
    MCAPI void addDefaultBandwidthOptimization(struct ConditionalBandwidthOptimization const&);
    MCAPI void initialize(class EntityContext&, class ConditionalBandwidthOptimizationComponent&) const;
    MCAPI ~ConditionalBandwidthOptimizationDefinition();

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ConditionalBandwidthOptimizationDefinition>>&);
};