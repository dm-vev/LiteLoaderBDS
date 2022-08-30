/**
 * @file  ActorMapping.hpp
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
 * @brief MC structure ActorMapping.
 *
 */
struct ActorMapping {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORMAPPING
public:
    struct ActorMapping& operator=(struct ActorMapping const &) = delete;
    ActorMapping(struct ActorMapping const &) = delete;
    ActorMapping() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORMAPPING
#endif
    MCAPI ActorMapping(std::string const &, std::string const &);
    MCAPI ActorMapping(std::string const &, std::string const &, std::string const &);
    MCAPI std::string getMappingName(enum ActorTypeNamespaceRules) const;
    MCAPI ~ActorMapping();

};