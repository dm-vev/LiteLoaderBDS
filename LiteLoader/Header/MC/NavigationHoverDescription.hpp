/**
 * @file  NavigationHoverDescription.hpp
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
 * @brief MC class NavigationHoverDescription.
 *
 */
class NavigationHoverDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAVIGATIONHOVERDESCRIPTION
public:
    class NavigationHoverDescription& operator=(class NavigationHoverDescription const &) = delete;
    NavigationHoverDescription(class NavigationHoverDescription const &) = delete;
    NavigationHoverDescription() = delete;
#endif

public:
    virtual char const * getJsonName() const;
    virtual ~NavigationHoverDescription();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NAVIGATIONHOVERDESCRIPTION
#endif

};