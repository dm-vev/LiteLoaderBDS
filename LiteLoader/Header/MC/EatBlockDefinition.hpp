/**
 * @file  EatBlockDefinition.hpp
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
 * @brief MC class EatBlockDefinition.
 *
 */
class EatBlockDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EATBLOCKDEFINITION
public:
    class EatBlockDefinition& operator=(class EatBlockDefinition const &) = delete;
    EatBlockDefinition(class EatBlockDefinition const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EATBLOCKDEFINITION
#endif
    MCAPI EatBlockDefinition();
    MCAPI void addSuccessChanceExpressionNode(class ExpressionNode const &);
    MCAPI void initialize(class EntityContext &, class EatBlockGoal &);
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EatBlockDefinition>> &);

};