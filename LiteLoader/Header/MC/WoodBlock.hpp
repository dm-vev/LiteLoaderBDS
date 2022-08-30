/**
 * @file  WoodBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RotatedPillarBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WoodBlock.
 *
 */
class WoodBlock : public RotatedPillarBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WOODBLOCK
public:
    class WoodBlock& operator=(class WoodBlock const &) = delete;
    WoodBlock(class WoodBlock const &) = delete;
    WoodBlock() = delete;
#endif

public:
    virtual ~WoodBlock();
    virtual void __unk_vfn_19();
    virtual bool isStrippable(class Block const &) const;
    virtual class Block const & getStrippedBlock(class Block const &) const;
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
    virtual void __unk_vfn_73();
    virtual void __unk_vfn_80();
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    virtual void __unk_vfn_105();
    virtual void __unk_vfn_124();
    virtual void __unk_vfn_126();
    virtual void __unk_vfn_127();
    virtual void __unk_vfn_132();
    virtual std::string buildDescriptionId(class Block const &) const;
    virtual bool isAuxValueRelevantForPicking() const;
    virtual int getVariant(class Block const &) const;
    virtual void __unk_vfn_148();
    virtual void __unk_vfn_157();
    virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    virtual void __unk_vfn_168();
    virtual void __unk_vfn_169();
    virtual void __unk_vfn_170();
    virtual void __unk_vfn_177();
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WOODBLOCK
#endif
    MCAPI WoodBlock(std::string const &, int);

//private:
    MCAPI class Block const & _createBlockWithStates(class Block const &) const;

private:

};