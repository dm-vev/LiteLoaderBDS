/**
 * @file  PlayerEventCoordinator.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MinecraftEventing.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerEventCoordinator.
 *
 */
class PlayerEventCoordinator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYEREVENTCOORDINATOR
public:
    class PlayerEventCoordinator& operator=(class PlayerEventCoordinator const &) = delete;
    PlayerEventCoordinator(class PlayerEventCoordinator const &) = delete;
    PlayerEventCoordinator() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYEREVENTCOORDINATOR
#endif
    MCAPI void registerPlayerGameplayHandler(std::unique_ptr<class PlayerGameplayHandler> &&);
    MCAPI enum CoordinatorResult sendEvent(class EventRef<struct PlayerGameplayEvent<enum CoordinatorResult>> const &);
    MCAPI void sendEvent(class EventRef<struct PlayerGameplayEvent<void>> const &);
    MCAPI void sendPlayerAwardAchievement(class Player &, enum MinecraftEventing::AchievementIds);
    MCAPI void sendPlayerCaravanChanged(class Actor const &, int);
    MCAPI void sendPlayerDestroyedBlock(class Player &, int, int, int);
    MCAPI void sendPlayerItemEquipped(class Player &, class ItemInstance const &, int);
    MCAPI void sendPlayerItemPlaceInteraction(class Player &, class ItemInstance const &);
    MCAPI void sendPlayerItemUseInteraction(class Player &, class ItemInstance const &);
    MCAPI void sendPlayerMove(class Player &);
    MCAPI void sendPlayerSlide(class Player &);
    MCAPI void sendPlayerTeleported(class Player &);
    MCAPI void sendPlayerTick(class Player &);

};