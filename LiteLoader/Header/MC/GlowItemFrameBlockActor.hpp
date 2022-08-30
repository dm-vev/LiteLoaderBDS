/**
 * @file  GlowItemFrameBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemFrameBlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GlowItemFrameBlockActor.
 *
 */
class GlowItemFrameBlockActor : public ItemFrameBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLOWITEMFRAMEBLOCKACTOR
public:
    class GlowItemFrameBlockActor& operator=(class GlowItemFrameBlockActor const &) = delete;
    GlowItemFrameBlockActor(class GlowItemFrameBlockActor const &) = delete;
    GlowItemFrameBlockActor() = delete;
#endif

public:
    virtual ~GlowItemFrameBlockActor();
    virtual void __unk_vfn_12();
    virtual void __unk_vfn_16();
    virtual void __unk_vfn_28();
    virtual void __unk_vfn_29();
    virtual void __unk_vfn_30();
    virtual void __unk_vfn_32();
    virtual void __unk_vfn_33();
    virtual void __unk_vfn_34();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GLOWITEMFRAMEBLOCKACTOR
#endif
    MCAPI GlowItemFrameBlockActor(class BlockPos);

};