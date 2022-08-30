/**
 * @file  GeneticsDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GeneticsDefinition.
 *
 */
class GeneticsDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GENETICSDEFINITION
public:
    class GeneticsDefinition& operator=(class GeneticsDefinition const &) = delete;
    GeneticsDefinition(class GeneticsDefinition const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GENETICSDEFINITION
#endif
    MCAPI GeneticsDefinition();
    MCAPI void addGeneDefinition(struct GeneDefinition const &);
    MCAPI void initialize(class EntityContext &, class GeneticsComponent &);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GeneticsDefinition>> &);

//private:

private:
MCAPI static float const DEFAULT_MUTATION_RATE;

};