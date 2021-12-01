// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_PROFILERLITE
#include "Extra/ProfilerLiteAPI.hpp"
#undef EXTRA_INCLUDE_PART_PROFILERLITE
class ProfilerLite {
#include "Extra/ProfilerLiteAPI.hpp"

public:
    MCAPI ProfilerLite();
    MCAPI void calculateAndSetServerTickTimes(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);
    MCAPI ~ProfilerLite();

    MCAPI static class std::thread::id sEmptyThreadID;

private:
    MCAPI static class ProfilerLite gProfilerLiteInstance;
};