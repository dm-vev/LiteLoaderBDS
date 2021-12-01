// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "LevelContainerManagerModel.hpp"
#define EXTRA_INCLUDE_PART_DISPENSERCONTAINERMANAGERMODEL
#include "Extra/DispenserContainerManagerModelAPI.hpp"
#undef EXTRA_INCLUDE_PART_DISPENSERCONTAINERMANAGERMODEL
class DispenserContainerManagerModel : public LevelContainerManagerModel {
#include "Extra/DispenserContainerManagerModelAPI.hpp"
public:
    virtual ~DispenserContainerManagerModel();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void setData(int, int);
    virtual class ContainerScreenContext _postInit();

public:
    MCAPI DispenserContainerManagerModel(enum ContainerID, class Player&, class BlockPos const&);
};