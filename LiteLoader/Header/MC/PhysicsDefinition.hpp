/**
 * @file  PhysicsDefinition.hpp
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
 * @brief MC class PhysicsDefinition.
 *
 */
class PhysicsDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PHYSICSDEFINITION
public:
    class PhysicsDefinition& operator=(class PhysicsDefinition const &) = delete;
    PhysicsDefinition(class PhysicsDefinition const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PHYSICSDEFINITION
#endif
    MCAPI PhysicsDefinition();
    MCAPI void initialize(class EntityContext &, class PhysicsComponent &);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class PhysicsDefinition>> &);

};