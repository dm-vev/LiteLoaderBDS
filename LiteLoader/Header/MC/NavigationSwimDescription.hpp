/**
 * @file  NavigationSwimDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NavigationSwimDescription.
 *
 */
class NavigationSwimDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAVIGATIONSWIMDESCRIPTION
public:
    class NavigationSwimDescription& operator=(class NavigationSwimDescription const &) = delete;
    NavigationSwimDescription(class NavigationSwimDescription const &) = delete;
    NavigationSwimDescription() = delete;
#endif

public:
    virtual char const * getJsonName() const;
    virtual ~NavigationSwimDescription();
    virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NAVIGATIONSWIMDESCRIPTION
#endif

};