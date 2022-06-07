// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ExpiringTick {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPIRINGTICK
public:
    class ExpiringTick& operator=(class ExpiringTick const &) = delete;
    ExpiringTick(class ExpiringTick const &) = delete;
    ExpiringTick() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EXPIRINGTICK
#endif
    MCAPI ExpiringTick(struct Tick, unsigned short);
    MCAPI struct Tick getExpireAtTick() const;
    MCAPI bool isActive(struct Tick) const;
    MCAPI bool isExpired(struct Tick) const;



};