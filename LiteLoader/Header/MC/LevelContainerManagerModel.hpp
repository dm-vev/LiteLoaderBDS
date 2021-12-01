// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ContainerManagerModel.hpp"
#define EXTRA_INCLUDE_PART_LEVELCONTAINERMANAGERMODEL
#include "Extra/LevelContainerManagerModelAPI.hpp"
#undef EXTRA_INCLUDE_PART_LEVELCONTAINERMANAGERMODEL
class LevelContainerManagerModel : public ContainerManagerModel {
#include "Extra/LevelContainerManagerModelAPI.hpp"
public:
    virtual ~LevelContainerManagerModel();
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
    MCAPI LevelContainerManagerModel(enum ContainerID, class Player&, struct ActorUniqueID);
    MCAPI LevelContainerManagerModel(enum ContainerID, class Player&, class BlockPos const&, enum BlockActorType);
    MCAPI class BlockPos const& getBlockPos() const;
    MCAPI struct ActorUniqueID getEntityUniqueID() const;


protected:
    MCAPI class BlockActor* _getBlockEntity();
    MCAPI class Container* _getRawContainer();
};