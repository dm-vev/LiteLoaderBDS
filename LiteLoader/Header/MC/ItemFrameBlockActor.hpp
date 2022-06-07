// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemFrameBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMFRAMEBLOCKACTOR
public:
    class ItemFrameBlockActor& operator=(class ItemFrameBlockActor const &) = delete;
    ItemFrameBlockActor(class ItemFrameBlockActor const &) = delete;
    ItemFrameBlockActor() = delete;
#endif


public:
    /*0*/ virtual ~ItemFrameBlockActor();
    /*1*/ virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /*2*/ virtual bool save(class CompoundTag &) const;
    /*7*/ virtual void tick(class BlockSource &);
    /*8*/ virtual void onChanged(class BlockSource &);
    /*12*/ virtual void __unk_vfn_12();
    /*16*/ virtual void __unk_vfn_16();
    /*17*/ virtual float getShadowRadius(class BlockSource &) const;
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /*35*/ virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMFRAMEBLOCKACTOR
#endif
    MCAPI ItemFrameBlockActor(class BlockPos);
    MCAPI ItemFrameBlockActor(class BlockPos, enum BlockActorType, std::string);
    MCAPI void actuallyDropItem(class BlockSource &, bool);
    MCAPI void dropFramedItem(class BlockSource &, bool);
    MCAPI class ItemInstance & getFramedItem();
    MCAPI float getRotation();
    MCAPI void rotateFramedItem();
    MCAPI void setItem(class BlockSource &, class ItemInstance const &);
    MCAPI void updateNameTag();
    MCAPI static float const ROTATION_DEGREES;

//private:
    MCAPI void _checkMapRemoval(class BlockSource &, class ItemInstance &);
    MCAPI void _updateBit(class BlockSource &, class ItemStateVariant<bool> const &, class HashedString const &);


private:


};