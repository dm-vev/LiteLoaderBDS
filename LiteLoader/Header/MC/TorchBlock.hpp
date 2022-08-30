/**
 * @file  TorchBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TorchBlock.
 *
 */
class TorchBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TORCHBLOCK
public:
    class TorchBlock& operator=(class TorchBlock const &) = delete;
    TorchBlock(class TorchBlock const &) = delete;
    TorchBlock() = delete;
#endif

public:
    virtual ~TorchBlock();
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
    virtual bool canContainLiquid() const;
    virtual void __unk_vfn_73();
    virtual void __unk_vfn_80();
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    virtual void __unk_vfn_105();
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    virtual void __unk_vfn_124();
    virtual void __unk_vfn_126();
    virtual void __unk_vfn_127();
    virtual void __unk_vfn_132();
    virtual int getIconYOffset() const;
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    virtual void __unk_vfn_148();
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    virtual void __unk_vfn_157();
    virtual void __unk_vfn_168();
    virtual void __unk_vfn_169();
    virtual void __unk_vfn_170();
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    virtual void __unk_vfn_177();
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    virtual enum BlockRenderLayer getRenderLayer(class Block const &, class BlockSource &, class BlockPos const &) const;
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TORCHBLOCK
    MCVAPI bool canBeSilkTouched() const;
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    MCAPI TorchBlock(std::string const &, int, enum MaterialType);

//protected:
    MCAPI class Vec3 _flameParticlePos(class BlockPos const &, enum TorchFacing) const;
    MCAPI bool canBePlacedOn(class BlockSource &, class BlockPos const &, unsigned char) const;

//private:

protected:

private:
MCAPI static enum TorchFacing const DATA_FROM_FACING[];
MCAPI static unsigned short const FACING_FROM_DATA[];

};