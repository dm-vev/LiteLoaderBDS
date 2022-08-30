/**
 * @file  ActorAnimationControllerGroup.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Core.hpp"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorAnimationControllerGroup.
 *
 */
class ActorAnimationControllerGroup {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORANIMATIONCONTROLLERGROUP
public:
    class ActorAnimationControllerGroup& operator=(class ActorAnimationControllerGroup const &) = delete;
    ActorAnimationControllerGroup(class ActorAnimationControllerGroup const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORANIMATIONCONTROLLERGROUP
#endif
    MCAPI ActorAnimationControllerGroup();
    MCAPI class ActorAnimationControllerPtr getActorAnimationController(class HashedString const &);
    MCAPI class std::shared_ptr<class ActorAnimationControllerInfo> getActorAnimationControllerInfo(class HashedString const &);
    MCAPI void loadActorAnimationControllersSync(class ResourcePackManager &);
    MCAPI ~ActorAnimationControllerGroup();
    MCAPI static bool loadFormatVersion(class Json::Value const &, class SemVersion &);

//private:
    MCAPI void _loadActorAnimationController(std::string const &, class Core::Path const &, enum CurrentCmdVersion);
    MCAPI static class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ActorAnimationControllerGroupParseMetaData>> _buildAnimationControllerFileSchema_v1_10_Or_Later(class SemVersion const &);
    MCAPI static class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, bool>> _buildAnimationControllerFileSchema_v1_8();
    MCAPI static bool upgrade_v1_8_to_v1_10(class Json::Value &, class SemVersion const &);

private:

};