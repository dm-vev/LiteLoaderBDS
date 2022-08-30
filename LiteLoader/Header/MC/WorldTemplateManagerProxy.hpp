/**
 * @file  WorldTemplateManagerProxy.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class WorldTemplateManagerProxy.
 *
 */
class WorldTemplateManagerProxy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDTEMPLATEMANAGERPROXY
public:
    class WorldTemplateManagerProxy& operator=(class WorldTemplateManagerProxy const &) = delete;
    WorldTemplateManagerProxy(class WorldTemplateManagerProxy const &) = delete;
    WorldTemplateManagerProxy() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDTEMPLATEMANAGERPROXY
#endif
    MCAPI WorldTemplateManagerProxy(struct WorldTemplateManagerProxyCallbacks const &);
    MCAPI ~WorldTemplateManagerProxy();

};