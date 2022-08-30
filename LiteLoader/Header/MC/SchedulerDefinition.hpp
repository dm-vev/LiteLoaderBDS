/**
 * @file  SchedulerDefinition.hpp
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
 * @brief MC class SchedulerDefinition.
 *
 */
class SchedulerDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCHEDULERDEFINITION
public:
    class SchedulerDefinition& operator=(class SchedulerDefinition const &) = delete;
    SchedulerDefinition(class SchedulerDefinition const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCHEDULERDEFINITION
#endif
    MCAPI SchedulerDefinition();
    MCAPI void initialize(class EntityContext &, class SchedulerComponent &);
    MCAPI void setMaxDelayTicks(float const &);
    MCAPI void setMinDelayTicks(float const &);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SchedulerDefinition>> &);

};