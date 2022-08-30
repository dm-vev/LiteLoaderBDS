/**
 * @file  MobSpawnUtils.hpp
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
 * @brief MC namespace MobSpawnUtils.
 *
 */
namespace MobSpawnUtils {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    MCAPI class OwnerPtrT<struct EntityRefTraits> spawnIfSummonable(struct ActorDefinitionIdentifier const &, class ActorDefinitionGroup &, class ActorFactory &, class Vec3 const &, class Vec2 const &);
    MCAPI class Mob * trySpawnMob(class BlockSource &, struct ActorDefinitionIdentifier const &, class BlockPos, int, int, int, class std::function<bool (class BlockPos)> const &, enum MobSpawnUtils::SurfaceDetectionType);

};