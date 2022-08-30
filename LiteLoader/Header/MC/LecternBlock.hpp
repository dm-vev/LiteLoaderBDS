/**
 * @file  LecternBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LecternBlock.
 *
 */
class LecternBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LECTERNBLOCK
public:
    class LecternBlock& operator=(class LecternBlock const &) = delete;
    LecternBlock(class LecternBlock const &) = delete;
    LecternBlock() = delete;
#endif

public:
    virtual ~LecternBlock();
    virtual void __unk_vfn_19();
    virtual bool canProvideSupport(class Block const &, unsigned char, enum BlockSupportType) const;
    virtual void __unk_vfn_29();
    virtual void __unk_vfn_30();
    virtual void __unk_vfn_32();
    virtual void __unk_vfn_33();
    virtual void __unk_vfn_34();
    virtual void __unk_vfn_36();
    virtual void __unk_vfn_37();
    virtual void __unk_vfn_38();
    virtual void __unk_vfn_39();
    virtual void __unk_vfn_40();
    virtual void __unk_vfn_41();
    virtual void __unk_vfn_42();
    virtual void __unk_vfn_44();
    virtual void __unk_vfn_45();
    virtual void __unk_vfn_46();
    virtual void __unk_vfn_47();
    virtual void __unk_vfn_48();
    virtual void __unk_vfn_49();
    virtual bool isSignalSource() const;
    virtual void __unk_vfn_59();
    virtual void __unk_vfn_60();
    virtual bool canContainLiquid() const;
    virtual bool shouldConnectToRedstone(class BlockSource &, class BlockPos const &, int) const;
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    virtual void __unk_vfn_73();
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    virtual void __unk_vfn_80();
    virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    virtual void __unk_vfn_105();
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    virtual bool attack(class Player *, class BlockPos const &) const;
    virtual void __unk_vfn_124();
    virtual void __unk_vfn_126();
    virtual void __unk_vfn_127();
    virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    virtual void __unk_vfn_132();
    virtual bool isAuxValueRelevantForPicking() const;
    virtual void __unk_vfn_148();
    virtual void __unk_vfn_157();
    virtual void __unk_vfn_168();
    virtual void __unk_vfn_169();
    virtual void __unk_vfn_170();
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    virtual void __unk_vfn_177();
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LECTERNBLOCK
    MCVAPI bool hasComparatorSignal() const;
    MCVAPI bool isInteractiveBlock() const;
#endif
    MCAPI LecternBlock(std::string const &, int);
    MCAPI void emitRedstonePulse(class BlockSource &, class BlockPos const &) const;

//private:
    MCAPI bool _dropBook(class Player &, class BlockPos const &) const;

private:

};