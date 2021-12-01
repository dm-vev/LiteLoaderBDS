// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_CONTAINERWEAKREF
#include "Extra/ContainerWeakRefAPI.hpp"
#undef EXTRA_INCLUDE_PART_CONTAINERWEAKREF
class ContainerWeakRef {
#include "Extra/ContainerWeakRefAPI.hpp"

public:
    MCAPI operator bool();
    MCAPI ContainerWeakRef();
    MCAPI ContainerWeakRef(class BlockPos const&, class TypedRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const&);
    MCAPI ContainerWeakRef(struct ActorUniqueID const&, enum ActorContainerType, class TypedRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const&);
    MCAPI struct ContainerWeakRefData tryGetContainer(class BlockSource&) const;
    MCAPI ~ContainerWeakRef();

    MCAPI static class ContainerWeakRef getOrInitActorContainer(class Actor&, enum ActorContainerType);
    MCAPI static class Container* tryGetActorContainer(class Actor&, enum ActorContainerType);
};