/**
 * @file  AvoidMobTypeDefinition.hpp
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
 * @brief MC class AvoidMobTypeDefinition.
 *
 */
class AvoidMobTypeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVOIDMOBTYPEDEFINITION
public:
    class AvoidMobTypeDefinition& operator=(class AvoidMobTypeDefinition const &) = delete;
    AvoidMobTypeDefinition(class AvoidMobTypeDefinition const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AVOIDMOBTYPEDEFINITION
#endif
    MCAPI AvoidMobTypeDefinition();
    MCAPI void initialize(class EntityContext &, class AvoidMobTypeGoal &);
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AvoidMobTypeDefinition>> &);

};