// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BLOCKACTOR
#include "Extra/BlockActorAPI.hpp"
#undef EXTRA_INCLUDE_PART_BLOCKACTOR
class BlockActor {
#include "Extra/BlockActorAPI.hpp"
public:
    virtual ~BlockActor();
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);
    virtual bool save(class CompoundTag&);
    virtual bool saveItemInstanceData(class CompoundTag&);
    virtual void saveBlockData(class CompoundTag&, class BlockSource&);
    virtual void loadBlockData(class CompoundTag const&, class BlockSource&, class DataLoadHelper&);
    virtual void onCustomTagLoadDone(class BlockSource&);
    virtual void tick(class BlockSource&);
    virtual void onChanged(class BlockSource&);
    virtual bool isMovable(class BlockSource&);
    virtual bool isCustomNameSaved();
    virtual void onPlace(class BlockSource&);
    virtual void unk_vfn_12();
    virtual void onRemoved(class BlockSource&);
    virtual void triggerEvent(int, int);
    virtual void unk_vfn_15();
    virtual void unk_vfn_16();
    virtual void unk_vfn_17();
    virtual void unk_vfn_18();
    virtual class BlockActor* getCrackEntity(class BlockSource&, class BlockPos const&);
    virtual void getDebugText(std::vector<std::string>&, class BlockPos const&);
    virtual void unk_vfn_21();
    virtual std::string const& getFilteredCustomName(class UIProfanityContext const&);
    virtual std::string getName();
    virtual void setCustomName(std::string const&);
    virtual std::string getImmersiveReaderText(class BlockSource&);
    virtual void unk_vfn_26();
    virtual class PistonBlockActor* getOwningPiston(class BlockSource&);
    virtual void unk_vfn_28();
    virtual void unk_vfn_29();
    virtual void unk_vfn_30();
    virtual void unk_vfn_31();
    virtual void unk_vfn_32();
    virtual void unk_vfn_33();
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);
    virtual bool _playerCanUpdate(class Player const&);

public:
    MCAPI BlockActor(enum BlockActorType, class BlockPos const&, std::string const&);
    MCAPI void assignBlockIfNotAssigned(class BlockSource&);
    MCAPI class AABB const& getAABB() const;
    MCAPI class Block const* getBlock() const;
    MCAPI class BlockPos const& getPosition() const;
    MCAPI std::unique_ptr<class BlockActorDataPacket> getServerUpdatePacket(class BlockSource&);
    MCAPI enum BlockActorType const& getType() const;
    MCAPI bool const ignoreLighting() const;
    MCAPI bool isType(enum BlockActorType) const;
    MCAPI void moveTo(class BlockPos const&);
    MCAPI bool onUpdatePacket(class CompoundTag const&, class BlockSource&, class Player const*);
    MCAPI void setChanged();
    MCAPI void setCustomNameSaved(bool);
    MCAPI void setIgnoreLighting(bool);
    MCAPI void setMovable(bool);

    MCAPI static bool isType(class BlockActor&, enum BlockActorType);
    MCAPI static class std::shared_ptr<class BlockActor> loadStatic(class Level&, class CompoundTag const&, class DataLoadHelper&);


protected:
    MCAPI void _resetAABB();
};