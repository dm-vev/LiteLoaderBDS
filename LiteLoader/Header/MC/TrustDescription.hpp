// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Description.hpp"
#define EXTRA_INCLUDE_PART_TRUSTDESCRIPTION
#include "Extra/TrustDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_TRUSTDESCRIPTION
class TrustDescription : public Description {
#include "Extra/TrustDescriptionAPI.hpp"
public:
    virtual char const* getJsonName();
    virtual ~TrustDescription();
    virtual void unk_vfn_3();
};