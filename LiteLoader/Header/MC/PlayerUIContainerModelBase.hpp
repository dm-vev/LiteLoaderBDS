/**
 * @file  PlayerUIContainerModelBase.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerUIContainerModelBase.
 *
 */
class PlayerUIContainerModelBase : public ContainerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERUICONTAINERMODELBASE
public:
    class PlayerUIContainerModelBase& operator=(class PlayerUIContainerModelBase const &) = delete;
    PlayerUIContainerModelBase(class PlayerUIContainerModelBase const &) = delete;
    PlayerUIContainerModelBase() = delete;
#endif

public:
    virtual void containerContentChanged(int);
    virtual ~PlayerUIContainerModelBase();
    virtual void postInit();
    virtual void releaseResources();
    virtual void __unk_vfn_6();
    virtual class ContainerWeakRef getContainerWeakRef() const;
    virtual void __unk_vfn_12();
    virtual bool isValid();
    virtual void __unk_vfn_15();
    virtual void __unk_vfn_16();
    virtual void __unk_vfn_19();
    virtual class Container * _getContainer() const;
    virtual int _getContainerOffset() const;
    virtual void _onItemChanged(int, class ItemStack const &, class ItemStack const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERUICONTAINERMODELBASE
#endif
    MCAPI PlayerUIContainerModelBase(enum ContainerEnumName, class Player &, int, enum ContainerCategory);

//protected:
    MCAPI void _refreshContainer(bool);

protected:

};