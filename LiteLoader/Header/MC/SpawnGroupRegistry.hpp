// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SPAWNGROUPREGISTRY
#include "Extra/SpawnGroupRegistryAPI.hpp"
#undef EXTRA_INCLUDE_PART_SPAWNGROUPREGISTRY
class SpawnGroupRegistry {
#include "Extra/SpawnGroupRegistryAPI.hpp"
public:
    virtual ~SpawnGroupRegistry();
    virtual std::string const& getRootKey();
    virtual std::string const& getFileType();
    virtual void unk_vfn_3();
    virtual void readResourceFiles(class ResourcePackManager&, class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>>&);

public:
    MCAPI SpawnGroupRegistry(class ResourcePackManager&);
    MCAPI class SpawnGroupData const* getSpawnGroup(std::string const&) const;
};