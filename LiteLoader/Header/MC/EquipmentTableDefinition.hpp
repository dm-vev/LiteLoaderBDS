/**
 * @file  EquipmentTableDefinition.hpp
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
 * @brief MC structure EquipmentTableDefinition.
 *
 */
struct EquipmentTableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EQUIPMENTTABLEDEFINITION
public:
    struct EquipmentTableDefinition& operator=(struct EquipmentTableDefinition const &) = delete;
    EquipmentTableDefinition(struct EquipmentTableDefinition const &) = delete;
    EquipmentTableDefinition() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EQUIPMENTTABLEDEFINITION
#endif
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EquipmentTableDefinition>> &);

};