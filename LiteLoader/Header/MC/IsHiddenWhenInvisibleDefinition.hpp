/**
 * @file  IsHiddenWhenInvisibleDefinition.hpp
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
 * @brief MC structure IsHiddenWhenInvisibleDefinition.
 *
 */
struct IsHiddenWhenInvisibleDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISHIDDENWHENINVISIBLEDEFINITION
public:
    struct IsHiddenWhenInvisibleDefinition& operator=(struct IsHiddenWhenInvisibleDefinition const &) = delete;
    IsHiddenWhenInvisibleDefinition(struct IsHiddenWhenInvisibleDefinition const &) = delete;
    IsHiddenWhenInvisibleDefinition() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ISHIDDENWHENINVISIBLEDEFINITION
#endif
    MCAPI void initialize(class EntityContext &);
    MCAPI void uninitialize(class EntityContext &);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsHiddenWhenInvisibleDefinition>> &);

};