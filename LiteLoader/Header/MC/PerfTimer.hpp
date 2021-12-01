// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_PERFTIMER
#include "Extra/PerfTimerAPI.hpp"
#undef EXTRA_INCLUDE_PART_PERFTIMER
class PerfTimer {
#include "Extra/PerfTimerAPI.hpp"

public:
    MCAPI PerfTimer(class std::thread::id);
    MCAPI ~PerfTimer();

    MCAPI static bool mEnabled;
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class PerfTimer, class std::allocator<class PerfTimer>> test;


protected:
    MCAPI static int const* const const MultiplyDeBruijnBitPosition;
    MCAPI static class Core::PathBuffer<std::string> mPath;
};