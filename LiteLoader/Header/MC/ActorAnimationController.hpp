// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ACTORANIMATIONCONTROLLER
#include "Extra/ActorAnimationControllerAPI.hpp"
#undef EXTRA_INCLUDE_PART_ACTORANIMATIONCONTROLLER
class ActorAnimationController {
#include "Extra/ActorAnimationControllerAPI.hpp"

public:
    MCAPI class std::shared_ptr<class ActorAnimationControllerState>& addState(class HashedString const&);
    MCAPI unsigned __int64 findStateIndex(std::string const&, bool, unsigned __int64) const;
    MCAPI void resolveTransitionStateIndices();
};