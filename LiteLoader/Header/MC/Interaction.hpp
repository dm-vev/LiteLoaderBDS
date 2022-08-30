/**
 * @file  Interaction.hpp
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
 * @brief MC structure Interaction.
 *
 */
struct Interaction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERACTION
public:
    struct Interaction& operator=(struct Interaction const &) = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INTERACTION
#endif
    MCAPI Interaction();
    MCAPI Interaction(struct Interaction const &);
    MCAPI Interaction(struct Interaction &&);
    MCAPI void addActorDefinitionIdentifierByName(std::string const &);
    MCAPI void addLevelSoundEventByName(std::string const &);
    MCAPI void addVibrationByName(std::string const &);
    MCAPI void setCooldown(float const &);
    MCAPI void setCooldownAfterBeingAttacked(float const &);
    MCAPI void setParticleType(std::string const &);
    MCAPI void setTransformItem(std::string const &);
    MCAPI ~Interaction();

};