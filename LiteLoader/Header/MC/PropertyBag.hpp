// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_PROPERTYBAG
#include "Extra/PropertyBagAPI.hpp"
#undef EXTRA_INCLUDE_PART_PROPERTYBAG
class PropertyBag {
#include "Extra/PropertyBagAPI.hpp"

public:
    MCAPI PropertyBag();
    MCAPI PropertyBag(class Json::Value const&);
    MCAPI class Json::Value const& toJsonValue() const;
    MCAPI std::string toString() const;

    MCAPI static class PropertyBag EMPTY;
};