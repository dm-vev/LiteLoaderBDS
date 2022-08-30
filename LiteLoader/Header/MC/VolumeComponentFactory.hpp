/**
 * @file  VolumeComponentFactory.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VolumeComponentFactory.
 *
 */
class VolumeComponentFactory {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMECOMPONENTFACTORY
public:
    class VolumeComponentFactory& operator=(class VolumeComponentFactory const &) = delete;
    VolumeComponentFactory(class VolumeComponentFactory const &) = delete;
    VolumeComponentFactory() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VOLUMECOMPONENTFACTORY
#endif
    MCAPI void registerVolumeComponentDefinitions(bool);

};