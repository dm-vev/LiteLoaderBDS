// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SeaPickleFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEAPICKLEFEATURE
public:
    class SeaPickleFeature& operator=(class SeaPickleFeature const &) = delete;
    SeaPickleFeature(class SeaPickleFeature const &) = delete;
    SeaPickleFeature() = delete;
#endif


public:
    /*0*/ virtual ~SeaPickleFeature();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SEAPICKLEFEATURE
#endif



};