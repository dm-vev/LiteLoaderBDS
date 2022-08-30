/**
 * @file  SculkShriekerBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SculkShriekerBlockActor.
 *
 */
class SculkShriekerBlockActor : public BlockActor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKSHRIEKERBLOCKACTOR
public:
    class SculkShriekerBlockActor& operator=(class SculkShriekerBlockActor const &) = delete;
    SculkShriekerBlockActor(class SculkShriekerBlockActor const &) = delete;
    SculkShriekerBlockActor() = delete;
#endif

public:
    virtual ~SculkShriekerBlockActor();
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    virtual bool save(class CompoundTag &) const;
    virtual void tick(class BlockSource &);
    virtual void __unk_vfn_12();
    virtual void onRemoved(class BlockSource &);
    virtual void __unk_vfn_16();
    virtual void __unk_vfn_28();
    virtual void __unk_vfn_29();
    virtual void __unk_vfn_30();
    virtual void __unk_vfn_32();
    virtual void __unk_vfn_33();
    virtual void __unk_vfn_34();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCULKSHRIEKERBLOCKACTOR
#endif
    MCAPI SculkShriekerBlockActor(class BlockPos const &);
    MCAPI void tryRespond(class BlockSource &, class BlockPos const &);
    MCAPI bool tryShriek(class BlockSource &, class BlockPos, class Player &);
    MCAPI static class SculkShriekerBlockActor * tryGet(class BlockSource &, class BlockPos);
    MCAPI static class Player * tryGetPlayerInHierarchy(class Actor *);

};