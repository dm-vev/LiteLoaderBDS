// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "NavigationDescription.hpp"
#define EXTRA_INCLUDE_PART_NAVIGATIONCLIMBDESCRIPTION
#include "Extra/NavigationClimbDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_NAVIGATIONCLIMBDESCRIPTION
class NavigationClimbDescription : public NavigationDescription {
#include "Extra/NavigationClimbDescriptionAPI.hpp"
public:
    virtual char const* getJsonName();
    virtual ~NavigationClimbDescription();
};