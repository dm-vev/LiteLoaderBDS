/**
 * @file  IsIllagerCaptainDefinition.hpp
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
 * @brief MC structure IsIllagerCaptainDefinition.
 *
 */
struct IsIllagerCaptainDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISILLAGERCAPTAINDEFINITION
public:
    struct IsIllagerCaptainDefinition& operator=(struct IsIllagerCaptainDefinition const &) = delete;
    IsIllagerCaptainDefinition(struct IsIllagerCaptainDefinition const &) = delete;
    IsIllagerCaptainDefinition() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ISILLAGERCAPTAINDEFINITION
#endif
    MCAPI void initialize(class EntityContext &);
    MCAPI void uninitialize(class EntityContext &);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsIllagerCaptainDefinition>> &);

};