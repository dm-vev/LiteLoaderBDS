// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_PACKMANIFESTFACTORY
#include "Extra/PackManifestFactoryAPI.hpp"
#undef EXTRA_INCLUDE_PART_PACKMANIFESTFACTORY
class PackManifestFactory {
#include "Extra/PackManifestFactoryAPI.hpp"
public:
    virtual ~PackManifestFactory();
    virtual std::unique_ptr<class PackManifest> create(class PackAccessStrategy&, class ResourceLocation const&, class PackReport&, class SubpackInfoCollection*);

public:
    MCAPI PackManifestFactory(class IPackTelemetry&);

    MCAPI static class Core::PathBuffer<std::string> const MANIFEST_LOG_PATH;
    MCAPI static std::string const MANIFEST_PACK_UUID_UPGRADE_SALT;
    MCAPI static class Core::PathBuffer<std::string> const MANIFEST_PATH;
    MCAPI static class Core::PathBuffer<std::string> const MANIFEST_PATH_OLD;
    MCAPI static class Core::PathBuffer<std::string> const MANIFEST_PATH_OLD_BACKUP;
    MCAPI static class SemVersion const REQUIRED_VANILLA_FOR_OLD_PACKS;
    MCAPI static std::string contentKeyLookup(std::string const&);
};