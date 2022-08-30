/**
 * @file  LevelChunkTickingSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelChunkTickingSystem.
 *
 */
class LevelChunkTickingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNKTICKINGSYSTEM
public:
    class LevelChunkTickingSystem& operator=(class LevelChunkTickingSystem const &) = delete;
    LevelChunkTickingSystem(class LevelChunkTickingSystem const &) = delete;
    LevelChunkTickingSystem() = delete;
#endif

public:
    virtual ~LevelChunkTickingSystem();
    virtual void __unk_vfn_1();
    virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELCHUNKTICKINGSYSTEM
#endif

//private:
    MCAPI static void _determineLevelChunksToTick(class Actor const &, class BlockSource &, class LoadedChunksComponent &, std::vector<class std::shared_ptr<class LevelChunk>> &, std::vector<class std::shared_ptr<class LevelChunk>> &, struct Tick const &);
    MCAPI static void _tickLevelChunksAroundActor(class Actor &, class BlockSource &, class LoadedChunksComponent &);
    MCAPI static void _tickLevelChunksAroundActorView(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorFlag>, class BlockSourceComponent, class LoadedChunksComponent> &);

private:

};