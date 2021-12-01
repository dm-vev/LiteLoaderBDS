// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_WEAPONITEMCOMPONENT
#include "Extra/WeaponItemComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_WEAPONITEMCOMPONENT
class WeaponItemComponent {
#include "Extra/WeaponItemComponentAPI.hpp"
public:
    virtual ~WeaponItemComponent();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag();
    virtual void initializeFromNetwork(class CompoundTag const&);

public:
    MCAPI WeaponItemComponent(class ComponentItem*);
    MCAPI void appendFormattedHovertext(class ItemStackBase const&, std::string&, bool) const;
    MCAPI void hitActor(class ItemStack&, class Actor&, class Mob&) const;
    MCAPI void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&) const;
    MCAPI void hurtActor(class ItemStack&, class Actor&, class Mob&) const;

    MCAPI static void bindType();
    MCAPI static class HashedString const& getIdentifier();
};