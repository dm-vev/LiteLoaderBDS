// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BlockSourceListener.hpp"
#define EXTRA_INCLUDE_PART_DANCECOMPONENTLISTENER
#include "Extra/DanceComponentListenerAPI.hpp"
#undef EXTRA_INCLUDE_PART_DANCECOMPONENTLISTENER
class DanceComponentListener : public BlockSourceListener {
#include "Extra/DanceComponentListenerAPI.hpp"
public:
    virtual ~DanceComponentListener();
    virtual void unk_vfn_1();
    virtual void onSourceDestroyed(class BlockSource&);
    virtual bool shouldTick(int /*enum SimulationType*/);
    virtual void unk_vfn_4();
    virtual void unk_vfn_6();
    virtual();
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual void unk_vfn_11();
    virtual void unk_vfn_12();
    virtual void unk_vfn_13();
    virtual void unk_vfn_14();
    virtual void unk_vfn_15();
    virtual void unk_vfn_16();
    virtual void unk_vfn_17();
    virtual void unk_vfn_18();
    virtual void unk_vfn_19();
    virtual void unk_vfn_20();
    virtual void unk_vfn_21();
    virtual void unk_vfn_22();
    virtual void unk_vfn_23();
    virtual void unk_vfn_24();
    virtual void unk_vfn_25();
    virtual void unk_vfn_26();
    virtual void unk_vfn_27();
    virtual void unk_vfn_28();
    virtual void levelSoundEvent(int /*enum LevelSoundEvent*/, class Vec3 const&, int, struct ActorDefinitionIdentifier const&, bool, bool);
    virtual void unk_vfn_30();
    virtual void unk_vfn_31();
    virtual void unk_vfn_32();
    virtual void unk_vfn_33();
};