// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "NavigationDescription.hpp"
#define EXTRA_INCLUDE_PART_NAVIGATIONFLYDESCRIPTION
#include "Extra/NavigationFlyDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_NAVIGATIONFLYDESCRIPTION
class NavigationFlyDescription : public NavigationDescription {
#include "Extra/NavigationFlyDescriptionAPI.hpp"
public:
    virtual char const* getJsonName();
    virtual ~NavigationFlyDescription();
};