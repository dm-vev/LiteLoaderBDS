/**
 * @file  LevelLooseFileStorage.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelLooseFileStorage.
 *
 */
class LevelLooseFileStorage {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELLOOSEFILESTORAGE
public:
    class LevelLooseFileStorage& operator=(class LevelLooseFileStorage const &) = delete;
    LevelLooseFileStorage(class LevelLooseFileStorage const &) = delete;
    LevelLooseFileStorage() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELLOOSEFILESTORAGE
#endif
    MCAPI LevelLooseFileStorage(class Core::Path const &, class ContentIdentity const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);
    MCAPI std::unique_ptr<class PackAccessStrategy> getAccessStrategy() const;

};