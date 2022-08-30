/**
 * @file  BlockEventListener.hpp
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
 * @brief MC class BlockEventListener.
 *
 */
class BlockEventListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKEVENTLISTENER
public:
    class BlockEventListener& operator=(class BlockEventListener const &) = delete;
    BlockEventListener(class BlockEventListener const &) = delete;
    BlockEventListener() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKEVENTLISTENER
    MCVAPI enum EventResult onBlockDestroyedByPlayer(class Player &, class Block const &, class BlockPos const &);
    MCVAPI enum EventResult onBlockDestructionStarted(class Player &, class BlockPos const &);
    MCVAPI enum EventResult onBlockDestructionStopped(class Player &, class BlockPos const &, int);
    MCVAPI enum EventResult onBlockExploded(class BlockPos const &, class Block const &, class Actor *);
    MCVAPI enum EventResult onBlockInteractedWith(class Player &, class BlockPos const &);
    MCVAPI enum EventResult onBlockModified(class BlockPos const &, class Block const &, class Block const &);
    MCVAPI enum EventResult onBlockMovedByPiston(class BlockPos const &, class BlockPos const &, enum PistonState);
    MCVAPI enum EventResult onBlockPlacedByPlayer(class Player &, class Block const &, class BlockPos const &, bool);
    MCVAPI enum EventResult onEvent(struct BlockNotificationEvent const &);
    MCVAPI enum EventResult onUnknownBlockReceived(class Level &, struct NewBlockID const &, unsigned short);
#endif

};