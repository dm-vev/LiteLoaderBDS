/**
 * @file  RailActivatorDefinition.hpp
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
 * @brief MC class RailActivatorDefinition.
 *
 */
class RailActivatorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAILACTIVATORDEFINITION
public:
    class RailActivatorDefinition& operator=(class RailActivatorDefinition const &) = delete;
    RailActivatorDefinition(class RailActivatorDefinition const &) = delete;
    RailActivatorDefinition() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAILACTIVATORDEFINITION
#endif
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RailActivatorDefinition>> &);

};