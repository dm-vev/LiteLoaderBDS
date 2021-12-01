// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_PLAYEREVENTCOORDINATOR
#include "Extra/PlayerEventCoordinatorAPI.hpp"
#undef EXTRA_INCLUDE_PART_PLAYEREVENTCOORDINATOR
class PlayerEventCoordinator {
#include "Extra/PlayerEventCoordinatorAPI.hpp"
public:
    virtual ~PlayerEventCoordinator();

public:
    MCAPI void registerPlayerGameplayHandler(std::unique_ptr<class PlayerGameplayHandler>&&);
    MCAPI void sendPlayerAddExp(struct PlayerAddExpEvent const&);
    MCAPI void sendPlayerAddLevel(struct PlayerAddLevelEvent const&);
    MCAPI void sendPlayerArmorExchange(struct PlayerArmorExchangeEvent const&);
    MCAPI void sendPlayerAwardAchievement(class Player&, enum MinecraftEventing::AchievementIds);
    MCAPI void sendPlayerCaravanChanged(class Actor const&, int);
    MCAPI void sendPlayerDestroyBlock(struct PlayerDestroyBlockEvent const&);
    MCAPI void sendPlayerDestroyedBlock(class Player&, int, int, int);
    MCAPI void sendPlayerDie(struct PlayerDamageEvent const&);
    MCAPI void sendPlayerDropItem(struct PlayerDropItemEvent const&);
    MCAPI void sendPlayerEatFood(struct PlayerEatFoodEvent const&);
    MCAPI enum CoordinatorResult sendPlayerGetExperienceOrb(struct PlayerGetExperienceOrbEvent const&);
    MCAPI void sendPlayerHurt(struct PlayerDamageEvent const&);
    MCAPI enum CoordinatorResult sendPlayerInteract(struct PlayerInteractEvent const&);
    MCAPI void sendPlayerItemEquipped(class Player&, class ItemInstance const&, int);
    MCAPI void sendPlayerItemPlaceInteraction(class Player&, class ItemInstance const&);
    MCAPI void sendPlayerItemUseInteraction(class Player&, class ItemInstance const&);
    MCAPI void sendPlayerMove(class Player&);
    MCAPI void sendPlayerOpenContainer(struct PlayerOpenContainerEvent const&);
    MCAPI void sendPlayerRespawn(struct PlayerEvent const&);
    MCAPI enum CoordinatorResult sendPlayerSayCommand(struct PlayerSayCommandEvent const&);
    MCAPI void sendPlayerShootArrow(struct PlayerShootArrowEvent const&);
    MCAPI void sendPlayerSlide(class Player&);
    MCAPI void sendPlayerTeleported(class Player&);
    MCAPI void sendPlayerTick(class Player&);
    MCAPI void sendPlayerUpdateInteraction(struct PlayerUpdateInteractionEvent const&);
    MCAPI void sendPlayerUseNameTag(struct PlayerUseNameTagEvent const&);
};