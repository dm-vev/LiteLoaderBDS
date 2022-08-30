/**
 * @file  LegacyStructureActorInfo.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LegacyStructureActorInfo.
 *
 */
class LegacyStructureActorInfo {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYSTRUCTUREACTORINFO
public:
    class LegacyStructureActorInfo& operator=(class LegacyStructureActorInfo const &) = delete;
    LegacyStructureActorInfo(class LegacyStructureActorInfo const &) = delete;
    LegacyStructureActorInfo() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEGACYSTRUCTUREACTORINFO
#endif
    MCAPI LegacyStructureActorInfo(class Vec3 const &, class BlockPos const &, class CompoundTag);

};