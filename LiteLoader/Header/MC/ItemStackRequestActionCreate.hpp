/**
 * @file  ItemStackRequestActionCreate.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionCreate.
 *
 */
class ItemStackRequestActionCreate {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCREATE
public:
    class ItemStackRequestActionCreate& operator=(class ItemStackRequestActionCreate const &) = delete;
    ItemStackRequestActionCreate(class ItemStackRequestActionCreate const &) = delete;
#endif

public:
    virtual ~ItemStackRequestActionCreate();
    virtual void __unk_vfn_1();
    virtual void __unk_vfn_2();
    virtual void __unk_vfn_3();
    virtual void _write(class BinaryStream &) const;
    virtual bool _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKREQUESTACTIONCREATE
#endif
    MCAPI ItemStackRequestActionCreate();
    MCAPI unsigned char getResultsIndex() const;

};