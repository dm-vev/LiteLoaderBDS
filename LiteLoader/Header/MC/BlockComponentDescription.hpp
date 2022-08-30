/**
 * @file  BlockComponentDescription.hpp
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
 * @brief MC structure BlockComponentDescription.
 *
 */
struct BlockComponentDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOMPONENTDESCRIPTION
public:
    struct BlockComponentDescription& operator=(struct BlockComponentDescription const &) = delete;
    BlockComponentDescription(struct BlockComponentDescription const &) = delete;
    BlockComponentDescription() = delete;
#endif
public:
    virtual ~BlockComponentDescription();
    virtual std::string const & getName() const;
    virtual void __unk_vfn_2();
    virtual void __unk_vfn_3();
    virtual bool isNetworkComponent() const;
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKCOMPONENTDESCRIPTION
    MCVAPI void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>> &, class BlockComponentFactory const &) const;
    MCVAPI void initializeComponent(class EntityContext &) const;
    MCVAPI void initializeFromNetwork(class CompoundTag const &);
#endif
    MCAPI static void bindType();
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};