// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ContainerManagerModel.hpp"
#define EXTRA_INCLUDE_PART_ANVILCONTAINERMANAGERMODEL
#include "Extra/AnvilContainerManagerModelAPI.hpp"
#undef EXTRA_INCLUDE_PART_ANVILCONTAINERMANAGERMODEL
class AnvilContainerManagerModel : public ContainerManagerModel {
#include "Extra/AnvilContainerManagerModelAPI.hpp"
public:
    virtual ~AnvilContainerManagerModel();
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
    MCAPI AnvilContainerManagerModel(enum ContainerID, class Player&, class BlockPos const&);

    MCAPI static int const INPUT_SLOT;
    MCAPI static int const MATERIAL_SLOT;
    MCAPI static int const RESULT_SLOT;
};