/**
 * @file  BlockBreathabilityDescription.hpp
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
 * @brief MC structure BlockBreathabilityDescription.
 *
 */
struct BlockBreathabilityDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKBREATHABILITYDESCRIPTION
public:
    struct BlockBreathabilityDescription& operator=(struct BlockBreathabilityDescription const &) = delete;
    BlockBreathabilityDescription(struct BlockBreathabilityDescription const &) = delete;
    BlockBreathabilityDescription() = delete;
#endif
public:
    virtual ~BlockBreathabilityDescription();
    virtual std::string const & getName() const;
    virtual void initializeComponent(class EntityContext &) const;
    virtual void __unk_vfn_3();
    virtual bool isNetworkComponent() const;
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    virtual void initializeFromNetwork(class CompoundTag const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKBREATHABILITYDESCRIPTION
#endif
MCAPI static std::string const NameID;
    MCAPI static void bindType();
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};