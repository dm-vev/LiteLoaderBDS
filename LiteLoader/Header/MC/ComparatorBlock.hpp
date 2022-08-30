/**
 * @file  ComparatorBlock.hpp
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
 * @brief MC class ComparatorBlock.
 *
 */
class ComparatorBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPARATORBLOCK
public:
    class ComparatorBlock& operator=(class ComparatorBlock const &) = delete;
    ComparatorBlock(class ComparatorBlock const &) = delete;
    ComparatorBlock() = delete;
#endif

public:
    virtual ~ComparatorBlock();
    virtual void __unk_vfn_19();
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
    virtual int getDirectSignal(class BlockSource &, class BlockPos const &, int) const;
    virtual void __unk_vfn_59();
    virtual void __unk_vfn_60();
    virtual bool shouldConnectToRedstone(class BlockSource &, class BlockPos const &, int) const;
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    virtual void __unk_vfn_73();
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    virtual void __unk_vfn_80();
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    virtual void __unk_vfn_105();
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    virtual void triggerEvent(class BlockSource &, class BlockPos const &, int, int) const;
    virtual void __unk_vfn_124();
    virtual void __unk_vfn_126();
    virtual void __unk_vfn_127();
    virtual void __unk_vfn_132();
    virtual int getVariant(class Block const &) const;
    virtual void __unk_vfn_148();
    virtual void __unk_vfn_157();
    virtual void __unk_vfn_168();
    virtual void __unk_vfn_169();
    virtual void __unk_vfn_170();
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    virtual void __unk_vfn_177();
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPARATORBLOCK
    MCVAPI bool canSpawnOn() const;
    MCVAPI bool isInteractiveBlock() const;
#endif
    MCAPI ComparatorBlock(std::string const &, int, bool);

//private:
    MCAPI void _installCircuit(class BlockSource &, class BlockPos const &, bool) const;
    MCAPI void _refreshOutputState(class BlockSource &, class BlockPos const &, int) const;

private:

};