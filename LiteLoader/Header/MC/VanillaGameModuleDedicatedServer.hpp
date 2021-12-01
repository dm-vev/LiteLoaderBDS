// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_VANILLAGAMEMODULEDEDICATEDSERVER
#include "Extra/VanillaGameModuleDedicatedServerAPI.hpp"
#undef EXTRA_INCLUDE_PART_VANILLAGAMEMODULEDEDICATEDSERVER
class VanillaGameModuleDedicatedServer {
#include "Extra/VanillaGameModuleDedicatedServerAPI.hpp"
public:
    virtual ~VanillaGameModuleDedicatedServer();
    virtual std::unique_ptr<class GameModuleServer> createGameModuleServer();
    virtual class std::shared_ptr<class IInPackagePacks> createInPackagePacks();
    virtual void registerMolangQueries();
    virtual void registerServerInstanceHandler(class ServerInstanceEventCoordinator&);
};