/**
 * @file  ScreenCapabilitiesRepo.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScreenCapabilitiesRepo.
 *
 */
class ScreenCapabilitiesRepo {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCREENCAPABILITIESREPO
public:
    class ScreenCapabilitiesRepo& operator=(class ScreenCapabilitiesRepo const &) = delete;
    ScreenCapabilitiesRepo(class ScreenCapabilitiesRepo const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCREENCAPABILITIESREPO
#endif
    MCAPI ScreenCapabilitiesRepo();
    MCAPI std::unique_ptr<class IScreenCapabilities> get(std::string const &) const;

};