// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class AbstractCompassItem : public Item {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ABSTRACTCOMPASSITEM
public:
    class AbstractCompassItem& operator=(class AbstractCompassItem const &) = delete;
    AbstractCompassItem(class AbstractCompassItem const &) = delete;
    AbstractCompassItem() = delete;
#endif


public:
    /*0*/ virtual ~AbstractCompassItem();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*13*/ virtual void __unk_vfn_13();
    /*15*/ virtual void __unk_vfn_15();
    /*51*/ virtual void __unk_vfn_51();
    /*53*/ virtual void __unk_vfn_53();
    /*62*/ virtual int getEnchantSlot() const;
    /*66*/ virtual void __unk_vfn_66();
    /*70*/ virtual void __unk_vfn_70();
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*75*/ virtual void __unk_vfn_75();
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*116*/ virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /*119*/ virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ABSTRACTCOMPASSITEM
#endif
    MCAPI AbstractCompassItem(std::string const &, int, class std::function<class CompassSpriteCalculator (class Mob *)>);



};