// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Minecart.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MinecartTNT : public Minecart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECARTTNT
public:
    class MinecartTNT& operator=(class MinecartTNT const &) = delete;
    MinecartTNT(class MinecartTNT const &) = delete;
    MinecartTNT() = delete;
#endif


public:
    /*14*/ virtual ~MinecartTNT();
    /*40*/ virtual void __unk_vfn_40();
    /*48*/ virtual void normalTick();
    /*60*/ virtual void __unk_vfn_60();
    /*67*/ virtual void __unk_vfn_67();
    /*81*/ virtual void __unk_vfn_81();
    /*87*/ virtual void __unk_vfn_87();
    /*94*/ virtual void __unk_vfn_94();
    /*97*/ virtual void __unk_vfn_97();
    /*104*/ virtual void __unk_vfn_104();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*140*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*180*/ virtual void __unk_vfn_180();
    /*184*/ virtual void causeFallDamage(float, float, class ActorDamageSource);
    /*194*/ virtual void __unk_vfn_194();
    /*219*/ virtual void __unk_vfn_219();
    /*220*/ virtual void __unk_vfn_220();
    /*245*/ virtual void __unk_vfn_245();
    /*248*/ virtual void __unk_vfn_248();
    /*264*/ virtual void __unk_vfn_264();
    /*265*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*272*/ virtual void __unk_vfn_272();
    /*281*/ virtual void __unk_vfn_281();
    /*282*/ virtual void destroy(class ActorDamageSource const &, bool);
    /*283*/ virtual enum MinecartType getType();
    /*284*/ virtual class Block const * getDefaultDisplayBlock() const;
    /*285*/ virtual void __unk_vfn_285();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINECARTTNT
#endif
    MCAPI MinecartTNT(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI void primeFuse(enum ActorDamageCause);

//private:


private:
    MCAPI static int const DEFAULT_FUSE_LENGTH;


};