// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_MOLANGACTORIDARRAYPTR
#include "Extra/MolangActorIdArrayPtrAPI.hpp"
#undef EXTRA_INCLUDE_PART_MOLANGACTORIDARRAYPTR
class MolangActorIdArrayPtr {
#include "Extra/MolangActorIdArrayPtrAPI.hpp"

public:
    MCAPI MolangActorIdArrayPtr(std::vector<struct ActorUniqueID>);
    MCAPI ~MolangActorIdArrayPtr();
};