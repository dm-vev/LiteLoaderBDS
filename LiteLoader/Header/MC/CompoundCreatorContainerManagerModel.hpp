// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ContainerManagerModel.hpp"
#define EXTRA_INCLUDE_PART_COMPOUNDCREATORCONTAINERMANAGERMODEL
#include "Extra/CompoundCreatorContainerManagerModelAPI.hpp"
#undef EXTRA_INCLUDE_PART_COMPOUNDCREATORCONTAINERMANAGERMODEL
class CompoundCreatorContainerManagerModel : public ContainerManagerModel {
#include "Extra/CompoundCreatorContainerManagerModelAPI.hpp"
public:
    virtual ~CompoundCreatorContainerManagerModel();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual std::vector<class ItemStack> getItemCopies();
    virtual void setSlot(int, class ItemStack const&, bool);
    virtual class ItemStack const& getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual bool isValid(float);
    virtual class ContainerScreenContext _postInit();

public:
    MCAPI CompoundCreatorContainerManagerModel(enum ContainerID, class Player&, class BlockPos const&);
};