/**
 * @file  BlockCommandOrigin.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "CommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockCommandOrigin.
 *
 */
class BlockCommandOrigin : public CommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOMMANDORIGIN
public:
    class BlockCommandOrigin& operator=(class BlockCommandOrigin const &) = delete;
    BlockCommandOrigin(class BlockCommandOrigin const &) = delete;
    BlockCommandOrigin() = delete;
#endif

public:
    virtual ~BlockCommandOrigin();
    virtual std::string const & getRequestId() const;
    virtual std::string getName() const;
    virtual class BlockPos getBlockPosition() const;
    virtual class Vec3 getWorldPosition() const;
    virtual class std::optional<class Vec2> getRotation() const;
    virtual class Level * getLevel() const;
    virtual class Dimension * getDimension() const;
    virtual class Actor * getEntity() const;
    virtual enum CommandPermissionLevel getPermissionsLevel() const;
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    virtual bool isSelectorExpansionAllowed() const;
    virtual enum CommandOriginType getOriginType() const;
    virtual class CompoundTag serialize() const;
    virtual bool isValid() const;
    virtual class BaseCommandBlock * _getBaseCommandBlock(class BlockSource &) const;
    virtual class CommandBlockActor * _getBlockEntity(class BlockSource &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKCOMMANDORIGIN
#endif
    MCAPI BlockCommandOrigin(class Level &, class AutomaticID<class Dimension, int>, std::string const &, class BlockPos const &);
    MCAPI BlockCommandOrigin(class BlockSource &, class BlockPos const &);
    MCAPI static std::unique_ptr<class BlockCommandOrigin> load(class CompoundTag const &, class Level &);

//protected:
    MCAPI std::string _getName(class BlockSource &) const;

protected:

};