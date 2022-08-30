/**
 * @file  SubscribedObjectives.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SubscribedObjectives.
 *
 */
class SubscribedObjectives {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBSCRIBEDOBJECTIVES
public:
    class SubscribedObjectives& operator=(class SubscribedObjectives const &) = delete;
    SubscribedObjectives(class SubscribedObjectives const &) = delete;
    SubscribedObjectives() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SUBSCRIBEDOBJECTIVES
#endif
    MCAPI void addObjective(std::string const &);
    MCAPI void removeObjective(std::string const &);
    MCAPI void sendEvent(std::string const &, int) const;

};