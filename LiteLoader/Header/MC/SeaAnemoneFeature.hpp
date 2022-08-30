/**
 * @file  SeaAnemoneFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SeaAnemoneFeature.
 *
 */
class SeaAnemoneFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEAANEMONEFEATURE
public:
    class SeaAnemoneFeature& operator=(class SeaAnemoneFeature const &) = delete;
    SeaAnemoneFeature(class SeaAnemoneFeature const &) = delete;
    SeaAnemoneFeature() = delete;
#endif

public:
    virtual ~SeaAnemoneFeature();
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SEAANEMONEFEATURE
#endif

};