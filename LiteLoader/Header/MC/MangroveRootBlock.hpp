/**
 * @file  MangroveRootBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MangroveRootBlock.
 *
 */
class MangroveRootBlock : public BlockLegacy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MANGROVEROOTBLOCK
public:
    class MangroveRootBlock& operator=(class MangroveRootBlock const &) = delete;
    MangroveRootBlock(class MangroveRootBlock const &) = delete;
    MangroveRootBlock() = delete;
#endif

public:
    virtual ~MangroveRootBlock();
    virtual void __unk_vfn_19();
    virtual bool canConnect(class Block const &, unsigned char, class Block const &) const;
    virtual void __unk_vfn_29();
    virtual void __unk_vfn_30();
    virtual void __unk_vfn_32();
    virtual void __unk_vfn_33();
    virtual void __unk_vfn_34();
    virtual void __unk_vfn_36();
    virtual void __unk_vfn_37();
    virtual void __unk_vfn_38();
    virtual void __unk_vfn_39();
    virtual void __unk_vfn_40();
    virtual void __unk_vfn_41();
    virtual void __unk_vfn_42();
    virtual void __unk_vfn_44();
    virtual void __unk_vfn_45();
    virtual void __unk_vfn_46();
    virtual void __unk_vfn_47();
    virtual void __unk_vfn_48();
    virtual void __unk_vfn_49();
    virtual void __unk_vfn_59();
    virtual void __unk_vfn_60();
    virtual bool canContainLiquid() const;
    virtual void __unk_vfn_73();
    virtual void __unk_vfn_80();
    virtual void __unk_vfn_105();
    virtual void __unk_vfn_124();
    virtual void __unk_vfn_126();
    virtual void __unk_vfn_127();
    virtual void __unk_vfn_132();
    virtual void __unk_vfn_148();
    virtual void __unk_vfn_157();
    virtual void __unk_vfn_168();
    virtual void __unk_vfn_169();
    virtual void __unk_vfn_170();
    virtual void __unk_vfn_177();
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MANGROVEROOTBLOCK
#endif
    MCAPI MangroveRootBlock(std::string const &, int, class Material const &);

};