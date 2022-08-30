/**
 * @file  VibrationInfo.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VibrationInfo.
 *
 */
class VibrationInfo {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIBRATIONINFO
public:
    class VibrationInfo& operator=(class VibrationInfo const &) = delete;
    VibrationInfo(class VibrationInfo const &) = delete;
    VibrationInfo() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VIBRATIONINFO
#endif
    MCAPI VibrationInfo(class GameEvent const &, struct GameEventContext const &, float);
    MCAPI VibrationInfo(class CompoundTag const &, class DataLoadHelper &);
    MCAPI class Actor * getProjectileOwner(class Level &) const;
    MCAPI class Actor * getSource(class Level &) const;
    MCAPI void load(class CompoundTag const &, class DataLoadHelper &);
    MCAPI void save(class CompoundTag &) const;

};