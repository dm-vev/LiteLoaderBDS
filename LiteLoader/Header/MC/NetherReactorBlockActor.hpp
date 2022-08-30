/**
 * @file  NetherReactorBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetherReactorBlockActor.
 *
 */
class NetherReactorBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERREACTORBLOCKACTOR
public:
    class NetherReactorBlockActor& operator=(class NetherReactorBlockActor const &) = delete;
    NetherReactorBlockActor(class NetherReactorBlockActor const &) = delete;
    NetherReactorBlockActor() = delete;
#endif

public:
    virtual ~NetherReactorBlockActor();
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    virtual bool save(class CompoundTag &) const;
    virtual void __unk_vfn_12();
    virtual void __unk_vfn_16();
    virtual void __unk_vfn_28();
    virtual void __unk_vfn_29();
    virtual void __unk_vfn_30();
    virtual void __unk_vfn_32();
    virtual void __unk_vfn_33();
    virtual void __unk_vfn_34();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETHERREACTORBLOCKACTOR
#endif
    MCAPI NetherReactorBlockActor(class BlockPos const &);

};