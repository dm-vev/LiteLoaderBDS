/**
 * @file  DropperBlockActor.hpp
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
 * @brief MC class DropperBlockActor.
 *
 */
class DropperBlockActor {

#define AFTER_EXTRA
// Add Member There
    friend class Level;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DROPPERBLOCKACTOR
public:
    class DropperBlockActor& operator=(class DropperBlockActor const &) = delete;
    DropperBlockActor(class DropperBlockActor const &) = delete;
    DropperBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DROPPERBLOCKACTOR
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    MCVAPI std::string getName() const;
#endif
    MCAPI DropperBlockActor(class BlockPos);
    MCAPI bool pushOutItems(class BlockSource &);

//private:
    MCAPI bool _addItem(class BlockSource &, class Container &, class ItemStack &, int);
    MCAPI class Container * _getContainerAt(class BlockSource &, class Vec3 const &);

private:

};