// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ACTORDAMAGESOURCE
#include "Extra/ActorDamageSourceAPI.hpp"
#undef EXTRA_INCLUDE_PART_ACTORDAMAGESOURCE
class ActorDamageSource {
#include "Extra/ActorDamageSourceAPI.hpp"
public:
    virtual ~ActorDamageSource();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual bool isFire();
    virtual struct std::pair<std::string, std::vector<std::string>> getDeathMessage(std::string, class Actor*);
    virtual void unk_vfn_6();
    virtual void unk_vfn_7();
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual void unk_vfn_11();
    virtual void unk_vfn_12();
    virtual struct ActorUniqueID getDamagingEntityUniqueID();
    virtual int /*enum ActorType*/ getDamagingEntityType();
    virtual void unk_vfn_15();
    virtual std::unique_ptr<class ActorDamageSource> clone();

public:
    MCAPI ActorDamageSource(enum ActorDamageCause);
    MCAPI enum ActorDamageCause getCause() const;
    MCAPI void setCause(enum ActorDamageCause);

    MCAPI static enum ActorDamageCause lookupCause(std::string const&);
    MCAPI static std::string const& lookupCauseName(enum ActorDamageCause);
};