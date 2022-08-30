/**
 * @file  HeavyBlock.hpp
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
 * @brief MC class HeavyBlock.
 *
 */
class HeavyBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HEAVYBLOCK
public:
    class HeavyBlock& operator=(class HeavyBlock const &) = delete;
    HeavyBlock(class HeavyBlock const &) = delete;
    HeavyBlock() = delete;
#endif

public:
    virtual ~HeavyBlock();
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
    virtual void __unk_vfn_80();
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    virtual void __unk_vfn_105();
    virtual void __unk_vfn_124();
    virtual void __unk_vfn_126();
    virtual void __unk_vfn_127();
    virtual void __unk_vfn_132();
    virtual void __unk_vfn_148();
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    virtual void __unk_vfn_157();
    virtual void __unk_vfn_168();
    virtual void __unk_vfn_169();
    virtual void __unk_vfn_170();
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    virtual void __unk_vfn_177();
    virtual void __unk_vfn_188();
    virtual class mce::Color getDustColor(class Block const &) const = 0;
    virtual std::string getDustParticleName(class Block const &) const = 0;
    virtual void __unk_vfn_194();
    virtual void onLand(class BlockSource &, class BlockPos const &) const;
    virtual bool isFreeToFall(class BlockSource &, class BlockPos const &) const;
    virtual void startFalling(class BlockSource &, class BlockPos const &, class Block const &, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HEAVYBLOCK
    MCVAPI bool falling() const;
#endif
    MCAPI HeavyBlock(std::string const &, int, class Material const &);
    MCAPI void triggerFallCheck(class BlockSource &, class BlockPos const &) const;

//protected:
    MCAPI void _tickBlocksAround2D(class BlockSource &, class BlockPos const &, class Block const &) const;
    MCAPI void checkSlide(class BlockSource &, class BlockPos const &) const;

protected:

};