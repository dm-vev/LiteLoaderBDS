/**
 * @file  GameDirectorEntityServerCommandOrigin.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "ActorServerCommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GameDirectorEntityServerCommandOrigin.
 *
 */
class GameDirectorEntityServerCommandOrigin : public ActorServerCommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEDIRECTORENTITYSERVERCOMMANDORIGIN
public:
    class GameDirectorEntityServerCommandOrigin& operator=(class GameDirectorEntityServerCommandOrigin const &) = delete;
    GameDirectorEntityServerCommandOrigin(class GameDirectorEntityServerCommandOrigin const &) = delete;
    GameDirectorEntityServerCommandOrigin() = delete;
#endif

public:
    virtual ~GameDirectorEntityServerCommandOrigin();
    virtual enum CommandPermissionLevel getPermissionsLevel() const;
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    virtual bool isSelectorExpansionAllowed() const;
    virtual enum CommandOriginType getOriginType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMEDIRECTORENTITYSERVERCOMMANDORIGIN
#endif
    MCAPI GameDirectorEntityServerCommandOrigin(struct ActorUniqueID, class Level &);
    MCAPI GameDirectorEntityServerCommandOrigin(class Actor &);
    MCAPI static std::unique_ptr<class GameDirectorEntityServerCommandOrigin> load(class CompoundTag const &, class Level &);

};