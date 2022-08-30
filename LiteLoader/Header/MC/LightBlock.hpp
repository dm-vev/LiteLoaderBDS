/**
 * @file  LightBlock.hpp
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
 * @brief MC class LightBlock.
 *
 */
class LightBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIGHTBLOCK
public:
    class LightBlock& operator=(class LightBlock const &) = delete;
    LightBlock(class LightBlock const &) = delete;
    LightBlock() = delete;
#endif

public:
    virtual ~LightBlock();
    virtual bool getCollisionShape(class AABB &, class Block const &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    virtual bool addCollisionShapes(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class optional_ref<class GetCollisionShapeInterface const>) const;
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
    virtual void __unk_vfn_80();
    virtual bool isFilteredOut(enum BlockRenderLayer) const;
    virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    virtual bool tryToPlace(class BlockSource &, class BlockPos const &, class Block const &, struct ActorBlockSyncMessage const *) const;
    virtual void __unk_vfn_105();
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    virtual bool canBeBuiltOver(class BlockSource &, class BlockPos const &, class BlockItem const &) const;
    virtual void __unk_vfn_124();
    virtual void __unk_vfn_126();
    virtual void __unk_vfn_127();
    virtual void __unk_vfn_132();
    virtual bool isAuxValueRelevantForPicking() const;
    virtual void __unk_vfn_148();
    virtual class BlockLegacy & init();
    virtual struct Brightness getLightEmission(class Block const &) const;
    virtual void __unk_vfn_157();
    virtual void __unk_vfn_168();
    virtual void __unk_vfn_169();
    virtual void __unk_vfn_170();
    virtual void __unk_vfn_177();
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LIGHTBLOCK
#endif
    MCAPI LightBlock(std::string const &, int, class Material const &);

};