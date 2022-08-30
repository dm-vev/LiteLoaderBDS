/**
 * @file  Weather.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockSourceListener.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Weather.
 *
 */
class Weather : public BlockSourceListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEATHER
public:
    class Weather& operator=(class Weather const &) = delete;
    Weather(class Weather const &) = delete;
    Weather() = delete;
#endif

public:
    virtual ~Weather();
    virtual void __unk_vfn_1();
    virtual void __unk_vfn_3();
    virtual void __unk_vfn_4();
    virtual void __unk_vfn_6();
    virtual void __unk_vfn_8();
    virtual void __unk_vfn_9();
    virtual void __unk_vfn_10();
    virtual class Particle * addParticle(enum ParticleType, class Vec3 const &, class Vec3 const &, int, class CompoundTag const *, bool);
    virtual void __unk_vfn_12();
    virtual void __unk_vfn_13();
    virtual void __unk_vfn_14();
    virtual void __unk_vfn_15();
    virtual void __unk_vfn_16();
    virtual void __unk_vfn_17();
    virtual void __unk_vfn_18();
    virtual void __unk_vfn_19();
    virtual void __unk_vfn_20();
    virtual void __unk_vfn_21();
    virtual void __unk_vfn_22();
    virtual void __unk_vfn_23();
    virtual void __unk_vfn_24();
    virtual void __unk_vfn_25();
    virtual void __unk_vfn_26();
    virtual void __unk_vfn_27();
    virtual void levelEvent(enum LevelEvent, class Vec3 const &, int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WEATHER
#endif
    MCAPI Weather(class Dimension &, class IRandom &);
    MCAPI int calcSnowBlockDepth(class BlockSource &, class BlockPos const &, int) const;
    MCAPI bool canPlaceTopSnow(class BlockSource &, class BlockPos const &, bool, bool, int *) const;
    MCAPI float getFogLevel() const;
    MCAPI float getLightningLevel(float) const;
    MCAPI float getRainLevel(float) const;
    MCAPI bool isLightning() const;
    MCAPI bool isPrecipitatingAt(class BlockSource &, class BlockPos const &) const;
    MCAPI bool isRaining() const;
    MCAPI bool isRainingAt(class BlockSource &, class BlockPos const &) const;
    MCAPI bool isSnowingAt(class BlockSource &, class BlockPos const &) const;
    MCAPI void serverTick();
    MCAPI void setSkyFlashTime(int);
    MCAPI void setTargetLightningLevel(float);
    MCAPI void setTargetRainLevel(float);
    MCAPI void stop();
    MCAPI void tick();
    MCAPI bool tryToPlaceTopSnow(class BlockSource &, class BlockPos const &, bool, bool);
    MCAPI static int calcLightningCycleTime(class IRandom &);
    MCAPI static int calcRainCycleTime(class IRandom &);
    MCAPI static int calcRainDuration(class IRandom &);
    MCAPI static void rebuildTopSnowToDepth(class BlockSource &, class BlockPos const &, int);

};