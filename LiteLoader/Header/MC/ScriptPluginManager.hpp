// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SCRIPTPLUGINMANAGER
#include "Extra/ScriptPluginManagerAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTPLUGINMANAGER
class ScriptPluginManager {
#include "Extra/ScriptPluginManagerAPI.hpp"

public:
    MCAPI ScriptPluginManager(class Scripting::ScriptEngine&, class Scripting::IPrinter*);
    MCAPI void addNativeModuleFactory(std::unique_ptr<class Scripting::IModuleBindingFactory>);
    MCAPI class ScriptPluginResult discoverPlugins(struct PluginDefStack const&);
    MCAPI void releasePlugins();
    MCAPI class ScriptPluginResult runAll();
    MCAPI ~ScriptPluginManager();


private:
    MCAPI void _reportContextResults(std::string const&, struct Scripting::ScriptContextResult const&, class ScriptPluginResult&);
};