// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_PACKSOURCE
#include "Extra/PackSourceAPI.hpp"
#undef EXTRA_INCLUDE_PART_PACKSOURCE
class PackSource {
#include "Extra/PackSourceAPI.hpp"
public:
    virtual void unk_vfn_0();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();

public:
    MCAPI class Pack* fetchPack(struct PackIdVersion const&);
    MCAPI void resolveUpgradeDependencies(class Pack&, class IContentKeyProvider const&);
};