// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "NetworkHandler.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTEVENTCOORDINATOR
#include "Extra/ScriptEventCoordinatorAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTEVENTCOORDINATOR
class ScriptEventCoordinator : public NetworkHandler {
#include "Extra/ScriptEventCoordinatorAPI.hpp"
public:
    virtual ~ScriptEventCoordinator();
    virtual void _onDisable();
    virtual();
    virtual();
    virtual void unk_vfn_12();
    virtual void unk_vfn_13();
    virtual();
    virtual();
    virtual();

public:
    MCAPI void sendScriptAddFilterToView(std::string const&);
    MCAPI void sendScriptBroadcastEvent(std::string const&, enum RegistrationType, bool);
    MCAPI void sendScriptError(std::string const&, std::string const&);
    MCAPI void sendScriptGetComponent(std::string const&, enum RegistrationType, bool);
    MCAPI void sendScriptInternalError(std::string const&);
    MCAPI void sendScriptListenForEvent(std::string const&);
    MCAPI void sendScriptLoaded(std::string const&, unsigned __int64);
    MCAPI void sendScriptRan(std::string const&, std::string const&, bool);
    MCAPI void sendScriptRegisterSpatialView(std::string const&);
    MCAPI void sendScriptRegisterView();
};