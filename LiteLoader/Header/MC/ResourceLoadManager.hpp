/**
 * @file  ResourceLoadManager.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ResourceLoadManager.
 *
 */
class ResourceLoadManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCELOADMANAGER
public:
    class ResourceLoadManager& operator=(class ResourceLoadManager const &) = delete;
    ResourceLoadManager(class ResourceLoadManager const &) = delete;
    ResourceLoadManager() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCELOADMANAGER
#endif
    MCAPI void cancel(enum ResourceLoadType);

};