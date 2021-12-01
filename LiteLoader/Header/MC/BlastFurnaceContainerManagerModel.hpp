// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "FurnaceContainerManagerModel.hpp"
#define EXTRA_INCLUDE_PART_BLASTFURNACECONTAINERMANAGERMODEL
#include "Extra/BlastFurnaceContainerManagerModelAPI.hpp"
#undef EXTRA_INCLUDE_PART_BLASTFURNACECONTAINERMANAGERMODEL
class BlastFurnaceContainerManagerModel : public FurnaceContainerManagerModel {
#include "Extra/BlastFurnaceContainerManagerModelAPI.hpp"
public:
    virtual ~BlastFurnaceContainerManagerModel();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();

public:
    MCAPI BlastFurnaceContainerManagerModel(enum ContainerID, class Player&, class BlockPos const&);
};