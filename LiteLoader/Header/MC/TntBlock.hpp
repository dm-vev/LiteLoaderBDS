/**
 * @file  TntBlock.hpp
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
 * @brief MC class TntBlock.
 *
 */
class TntBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TNTBLOCK
public:
    class TntBlock& operator=(class TntBlock const &) = delete;
    TntBlock(class TntBlock const &) = delete;
    TntBlock() = delete;
#endif

public:
    virtual ~TntBlock();
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
    virtual bool shouldDispense(class BlockSource &, class Container &) const;
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    virtual void __unk_vfn_73();
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    virtual void __unk_vfn_80();
    virtual void destroy(class BlockSource &, class BlockPos const &, class Block const &, class Actor *) const;
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    virtual void trySpawnResourcesOnExplosion(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, std::vector<class Item const *> *, float, int) const;
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
    virtual void onExploded(class BlockSource &, class BlockPos const &, class Actor *) const;
    virtual void __unk_vfn_168();
    virtual void __unk_vfn_169();
    virtual void __unk_vfn_170();
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    virtual void __unk_vfn_177();
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TNTBLOCK
#endif
    MCAPI TntBlock(std::string const &, int);
    MCAPI void _setAllowUnderwater(class Actor *) const;
    MCAPI bool _shouldAllowUnderwater(class Block const &) const;
    MCAPI static bool tryLightTnt(class Player &, class BlockPos const &);

};