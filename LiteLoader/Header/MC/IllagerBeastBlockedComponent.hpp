// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ILLAGERBEASTBLOCKEDCOMPONENT
#include "Extra/IllagerBeastBlockedComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_ILLAGERBEASTBLOCKEDCOMPONENT
class IllagerBeastBlockedComponent {
#include "Extra/IllagerBeastBlockedComponentAPI.hpp"

public:
    MCAPI void initFromDefinition(class Actor&);
    MCAPI void onBlocked(class Actor&, class ActorDamageSource const&, class Actor&);
};