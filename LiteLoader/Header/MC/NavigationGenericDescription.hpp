/**
 * @file  NavigationGenericDescription.hpp
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
 * @brief MC class NavigationGenericDescription.
 *
 */
class NavigationGenericDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAVIGATIONGENERICDESCRIPTION
public:
    class NavigationGenericDescription& operator=(class NavigationGenericDescription const &) = delete;
    NavigationGenericDescription(class NavigationGenericDescription const &) = delete;
    NavigationGenericDescription() = delete;
#endif

public:
    virtual char const * getJsonName() const;
    virtual ~NavigationGenericDescription();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NAVIGATIONGENERICDESCRIPTION
#endif

};