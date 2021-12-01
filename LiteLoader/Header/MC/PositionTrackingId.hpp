// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_POSITIONTRACKINGID
#include "Extra/PositionTrackingIdAPI.hpp"
#undef EXTRA_INCLUDE_PART_POSITIONTRACKINGID
class PositionTrackingId {
#include "Extra/PositionTrackingIdAPI.hpp"

public:
    MCAPI void fromTag(class Tag const*);
    MCAPI class PositionTrackingId& operator=(class PositionTrackingId const&);
    MCAPI PositionTrackingId(class PositionTrackingId const&);
    MCAPI PositionTrackingId(class PositionTrackingId&&);
    MCAPI std::unique_ptr<class Tag> getTag() const;
    MCAPI class PositionTrackingId& operator=(class PositionTrackingId&&);
    MCAPI std::string const toString() const;

    MCAPI static class PositionTrackingId const INVALID_ID;


protected:
    MCAPI static unsigned int sNextId;
};