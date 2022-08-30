/**
 * @file  BrazeSDKManager.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BrazeSDKManager.
 *
 */
class BrazeSDKManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BRAZESDKMANAGER
public:
    class BrazeSDKManager& operator=(class BrazeSDKManager const &) = delete;
    BrazeSDKManager(class BrazeSDKManager const &) = delete;
    BrazeSDKManager() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BRAZESDKMANAGER
    MCVAPI void _disableBrazeSDK();
    MCVAPI void _enableBrazeSDK();
    MCVAPI void setBrazeId(std::string const &);
#endif

};