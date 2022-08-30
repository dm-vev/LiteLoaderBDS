/**
 * @file  BannerBlock.hpp
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
 * @brief MC class BannerBlock.
 *
 */
class BannerBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BANNERBLOCK
public:
    class BannerBlock& operator=(class BannerBlock const &) = delete;
    BannerBlock(class BannerBlock const &) = delete;
    BannerBlock() = delete;
#endif

public:
    virtual ~BannerBlock();
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
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
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    virtual void __unk_vfn_73();
    virtual void __unk_vfn_80();
    virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    virtual void __unk_vfn_105();
    virtual void __unk_vfn_124();
    virtual void __unk_vfn_126();
    virtual void __unk_vfn_127();
    virtual void __unk_vfn_132();
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    virtual int getVariant(class Block const &) const;
    virtual void __unk_vfn_148();
    virtual void __unk_vfn_157();
    virtual void __unk_vfn_168();
    virtual void __unk_vfn_169();
    virtual void __unk_vfn_170();
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    virtual void __unk_vfn_177();
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    virtual void __unk_vfn_188();
    virtual class ItemInstance getEntityResourceItem(class Randomize &, class BlockActor const &, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BANNERBLOCK
#endif
    MCAPI BannerBlock(std::string const &, int, bool);
MCAPI static class AABB EAST_AABB;
MCAPI static class AABB NORTH_AABB;
MCAPI static class AABB SOUTH_AABB;
MCAPI static class AABB STANDING_AABB;
MCAPI static class AABB WEST_AABB;

//private:
    MCAPI class ItemInstance _itemInstanceFromBlockEntity(class gsl::not_null<class BannerBlockActor const *>) const;

private:

};