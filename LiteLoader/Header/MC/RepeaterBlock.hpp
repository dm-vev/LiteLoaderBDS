/**
 * @file  RepeaterBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "DiodeBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RepeaterBlock.
 *
 */
class RepeaterBlock : public DiodeBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPEATERBLOCK
public:
    class RepeaterBlock& operator=(class RepeaterBlock const &) = delete;
    RepeaterBlock(class RepeaterBlock const &) = delete;
    RepeaterBlock() = delete;
#endif

public:
    virtual ~RepeaterBlock();
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
    virtual void __unk_vfn_59();
    virtual void __unk_vfn_60();
    virtual bool shouldConnectToRedstone(class BlockSource &, class BlockPos const &, int) const;
    virtual void __unk_vfn_73();
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    virtual void __unk_vfn_80();
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    virtual void __unk_vfn_105();
    virtual void __unk_vfn_124();
    virtual void __unk_vfn_126();
    virtual void __unk_vfn_127();
    virtual void __unk_vfn_132();
    virtual void __unk_vfn_148();
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    virtual void __unk_vfn_157();
    virtual void onRemove(class BlockSource &, class BlockPos const &) const;
    virtual void __unk_vfn_168();
    virtual void __unk_vfn_169();
    virtual void __unk_vfn_170();
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    virtual void __unk_vfn_177();
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    virtual void __unk_vfn_188();
    virtual bool isLocked(class BlockSource &, class BlockPos const &) const;
    virtual bool isAlternateInput(class Block const &) const;
    virtual int getTurnOnDelay(class Block const &) const;
    virtual class Block const * getOnBlock(class Block const *) const;
    virtual class Block const * getOffBlock(class Block const *) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REPEATERBLOCK
    MCVAPI bool canBeSilkTouched() const;
    MCVAPI bool isInteractiveBlock() const;
#endif
    MCAPI RepeaterBlock(std::string const &, int, bool);
    MCAPI void updateDelay(class BlockSource &, class BlockPos const &, bool) const;
MCAPI static float const DELAY_RENDER_OFFSETS[];

//private:

private:
MCAPI static int const DELAYS[];

};