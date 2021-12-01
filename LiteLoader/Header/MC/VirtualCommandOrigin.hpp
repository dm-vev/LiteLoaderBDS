// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "CommandOrigin.hpp"
#define EXTRA_INCLUDE_PART_VIRTUALCOMMANDORIGIN
#include "Extra/VirtualCommandOriginAPI.hpp"
#undef EXTRA_INCLUDE_PART_VIRTUALCOMMANDORIGIN
class VirtualCommandOrigin : public CommandOrigin {
#include "Extra/VirtualCommandOriginAPI.hpp"
public:
    virtual ~VirtualCommandOrigin();
    virtual std::string const& getRequestId();
    virtual std::string getName();
    virtual class BlockPos getBlockPosition();
    virtual class Vec3 getWorldPosition();
    virtual class Level* getLevel();
    virtual class Dimension* getDimension();
    virtual class Actor* getEntity();
    virtual int /*enum CommandPermissionLevel*/ getPermissionsLevel();
    virtual std::unique_ptr<class CommandOrigin> clone();
    virtual class std::optional<class BlockPos> getCursorHitBlockPos();
    virtual class std::optional<class Vec3> getCursorHitPos();
    virtual bool hasChatPerms();
    virtual bool hasTellPerms();
    virtual bool canUseAbility(int /*enum AbilitiesIndex*/);
    virtual bool canUseCommandsWithoutCheatsEnabled();
    virtual bool isSelectorExpansionAllowed();
    virtual class NetworkIdentifier const& getSourceId();
    virtual unsigned char getSourceSubId();
    virtual void unk_vfn_20();
    virtual struct CommandOriginIdentity getIdentity();
    virtual void unk_vfn_22();
    virtual void unk_vfn_24();
    virtual void handleCommandOutputCallback(class Json::Value&&);
    virtual class CompoundTag serialize();
    virtual bool isValid();

public:
    MCAPI VirtualCommandOrigin(class CommandOrigin const&, class Actor&, class CommandPositionFloat const&, int);
    MCAPI void updateExecutePosition();

    MCAPI static class Vec3 const getExecutePosition(int, class Actor&, class CommandPositionFloat const&, class CommandOrigin const&);
    MCAPI static std::unique_ptr<class VirtualCommandOrigin> load(class CompoundTag const&, class ServerLevel&);
};