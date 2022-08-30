/**
 * @file  BorderBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "WallBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BorderBlock.
 *
 */
class BorderBlock : public WallBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BORDERBLOCK
public:
    class BorderBlock& operator=(class BorderBlock const &) = delete;
    BorderBlock(class BorderBlock const &) = delete;
    BorderBlock() = delete;
#endif

public:
    virtual ~BorderBlock();
    virtual bool getCollisionShape(class AABB &, class Block const &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;
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
    virtual void __unk_vfn_73();
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    virtual void __unk_vfn_80();
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    virtual void __unk_vfn_105();
    virtual void __unk_vfn_124();
    virtual void __unk_vfn_126();
    virtual void __unk_vfn_127();
    virtual void __unk_vfn_132();
    virtual std::string buildDescriptionId(class Block const &) const;
    virtual class AABB const & getVisualShapeInWorld(class Block const &, class IConstBlockSource const &, class BlockPos const &, class AABB &, bool) const;
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    virtual int getVariant(class Block const &) const;
    virtual void __unk_vfn_148();
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    virtual void __unk_vfn_157();
    virtual void onRemove(class BlockSource &, class BlockPos const &) const;
    virtual void __unk_vfn_168();
    virtual void __unk_vfn_169();
    virtual void __unk_vfn_170();
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    virtual void __unk_vfn_177();
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BORDERBLOCK
#endif
    MCAPI BorderBlock(std::string const &, int);

};