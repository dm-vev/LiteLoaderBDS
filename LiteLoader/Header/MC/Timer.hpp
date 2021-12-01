// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_TIMER
#include "Extra/TimerAPI.hpp"
#undef EXTRA_INCLUDE_PART_TIMER
class Timer {
#include "Extra/TimerAPI.hpp"

public:
    MCAPI Timer(float, class std::function<__int64(void)>);
    MCAPI void advanceTime(float);
    MCAPI unsigned __int64 getTicks() const;
    MCAPI float getTimeScale() const;
    MCAPI void resetTimePassed();
    MCAPI void setTimeScale(float);
    MCAPI void stepTick(int);
    MCAPI bool stepping() const;
};