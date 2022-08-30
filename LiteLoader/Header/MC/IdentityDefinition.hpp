/**
 * @file  IdentityDefinition.hpp
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
 * @brief MC class IdentityDefinition.
 *
 */
class IdentityDefinition {

#define AFTER_EXTRA
// Add Member There
public:
enum class Type : char
{
    Invalid = 0,
    Player = 1,
    Actor = 2,
    Fake = 3
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDENTITYDEFINITION
public:
    IdentityDefinition() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IDENTITYDEFINITION
#endif
    MCAPI IdentityDefinition(class IdentityDefinition const &);
    MCAPI IdentityDefinition(struct ScoreboardId const &, std::string const &);
    MCAPI IdentityDefinition(struct ScoreboardId const &, struct PlayerScoreboardId const &);
    MCAPI IdentityDefinition(struct ScoreboardId const &, struct ActorUniqueID const &);
    MCAPI IdentityDefinition(class IdentityDefinition &&);
    MCAPI struct ActorUniqueID const & getEntityId() const;
    MCAPI std::string const & getFakePlayerName() const;
    MCAPI enum IdentityDefinition::Type getIdentityType() const;
    MCAPI std::string const & getName(class std::function<std::string const & (struct ActorUniqueID)> const &) const;
    MCAPI struct PlayerScoreboardId const & getPlayerId() const;
    MCAPI struct ScoreboardId const & getScoreboardId() const;
    MCAPI bool isEntityType() const;
    MCAPI bool isFakeType() const;
    MCAPI bool isHiddenFakePlayerType() const;
    MCAPI bool isPlayerType() const;
    MCAPI bool isValid() const;
    MCAPI operator bool() const;
    MCAPI class IdentityDefinition & operator=(class IdentityDefinition const &);
    MCAPI class IdentityDefinition & operator=(class IdentityDefinition &&);
    MCAPI ~IdentityDefinition();
MCAPI static class IdentityDefinition const Invalid;
    MCAPI static bool convertFakeToReal(class IdentityDefinition &, struct PlayerScoreboardId const &);
    MCAPI static bool isHiddenFakePlayerNameString(std::string const &);

};