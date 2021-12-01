// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_WORLDGENERATOR
#include "Extra/WorldGeneratorAPI.hpp"
#undef EXTRA_INCLUDE_PART_WORLDGENERATOR
class WorldGenerator {
#include "Extra/WorldGeneratorAPI.hpp"
public:
    virtual ~WorldGenerator();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
    virtual void unk_vfn_7();
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual void unk_vfn_11();
    virtual void unk_vfn_12();
    virtual void unk_vfn_13();

public:
    MCAPI WorldGenerator();

    MCAPI static enum StructureFeatureType getFeatureId(std::string const&);
    MCAPI static class gsl::basic_string_span<char const, -1> getFeatureName(enum StructureFeatureType);


protected:
    MCAPI static unsigned __int64 const TICKING_QUEUE_EXTRA_LIMIT;
    MCAPI static unsigned __int64 const TICKING_QUEUE_LIMIT_MULT;
};