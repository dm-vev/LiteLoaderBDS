// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ACTORSKELETALANIMATIONPLAYER
#include "Extra/ActorSkeletalAnimationPlayerAPI.hpp"
#undef EXTRA_INCLUDE_PART_ACTORSKELETALANIMATIONPLAYER
class ActorSkeletalAnimationPlayer {
#include "Extra/ActorSkeletalAnimationPlayerAPI.hpp"
public:
    virtual ~ActorSkeletalAnimationPlayer();
    virtual void unk_vfn_1();
    virtual void resetAnimation();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void bindSoundEffects(class std::unordered_map<class HashedString, std::string, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, std::string>>> const&);
    virtual void unk_vfn_6();
    virtual void unk_vfn_7();
    virtual void unk_vfn_8();
    virtual class HashedString const& getRawName();

public:
    MCAPI ActorSkeletalAnimationPlayer(class HashedString const&, class ActorSkeletalAnimationPtr, class AnimationComponent&, class ExpressionNode const&);
};