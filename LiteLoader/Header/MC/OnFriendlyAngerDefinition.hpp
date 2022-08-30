/**
 * @file  OnFriendlyAngerDefinition.hpp
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
 * @brief MC structure OnFriendlyAngerDefinition.
 *
 */
struct OnFriendlyAngerDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONFRIENDLYANGERDEFINITION
public:
    struct OnFriendlyAngerDefinition& operator=(struct OnFriendlyAngerDefinition const &) = delete;
    OnFriendlyAngerDefinition(struct OnFriendlyAngerDefinition const &) = delete;
    OnFriendlyAngerDefinition() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONFRIENDLYANGERDEFINITION
#endif
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct OnFriendlyAngerDefinition>> &);

};