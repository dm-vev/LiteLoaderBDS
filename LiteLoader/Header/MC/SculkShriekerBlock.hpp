/**
 * @file  SculkShriekerBlock.hpp
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
 * @brief MC class SculkShriekerBlock.
 *
 */
class SculkShriekerBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKSHRIEKERBLOCK
public:
    class SculkShriekerBlock& operator=(class SculkShriekerBlock const &) = delete;
    SculkShriekerBlock(class SculkShriekerBlock const &) = delete;
    SculkShriekerBlock() = delete;
#endif

public:
    virtual ~SculkShriekerBlock();
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
    virtual void __unk_vfn_59();
    virtual void __unk_vfn_60();
    virtual void __unk_vfn_73();
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    virtual void __unk_vfn_80();
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    virtual void trySpawnResourcesOnExplosion(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, std::vector<class Item const *> *, float, int) const;
    virtual void __unk_vfn_105();
    virtual int getExperienceDrop(class Random &) const;
    virtual void __unk_vfn_124();
    virtual void __unk_vfn_126();
    virtual void __unk_vfn_127();
    virtual void __unk_vfn_132();
    virtual int getVariant(class Block const &) const;
    virtual void __unk_vfn_148();
    virtual class BlockLegacy & init();
    virtual void __unk_vfn_157();
    virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    virtual void onRemove(class BlockSource &, class BlockPos const &) const;
    virtual void onStandOn(class EntityContext &, class BlockPos const &) const;
    virtual void __unk_vfn_168();
    virtual void __unk_vfn_169();
    virtual void __unk_vfn_170();
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    virtual void __unk_vfn_177();
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCULKSHRIEKERBLOCK
    MCVAPI bool canBeSilkTouched() const;
#endif
    MCAPI SculkShriekerBlock(std::string const &, int, class Material const &);

};