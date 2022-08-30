/**
 * @file  Trade2ContainerManagerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Trade2ContainerManagerModel.
 *
 */
class Trade2ContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADE2CONTAINERMANAGERMODEL
public:
    class Trade2ContainerManagerModel& operator=(class Trade2ContainerManagerModel const &) = delete;
    Trade2ContainerManagerModel(class Trade2ContainerManagerModel const &) = delete;
    Trade2ContainerManagerModel() = delete;
#endif

public:
    virtual ~Trade2ContainerManagerModel();
    virtual std::vector<class ItemStack> getItemCopies() const;
    virtual void setSlot(int, class ItemStack const &, bool);
    virtual class ItemStack const & getSlot(int) const;
    virtual void broadcastChanges();
    virtual bool isValid(float);
    virtual class ContainerScreenContext _postInit();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRADE2CONTAINERMANAGERMODEL
#endif
    MCAPI Trade2ContainerManagerModel(enum ContainerID, class Player &, struct ActorUniqueID const &);
    MCAPI class Actor * getEntity() const;

};