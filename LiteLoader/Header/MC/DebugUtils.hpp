// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_DEBUGUTILS
#include "Extra/DebugUtilsAPI.hpp"
#undef EXTRA_INCLUDE_PART_DEBUGUTILS
namespace DebugUtils {
#include "Extra/DebugUtilsAPI.hpp"

MCAPI bool DEFAULT_ASSERT_HANDLER(struct AssertHandlerContext const&);
MCAPI void SET_THREAD_NAME(std::string const&);
MCAPI class std::mutex debugUtilMutex;
MCAPI bool gAssertTelemetryRegistered;
MCAPI bool gBreakpadSetupFailed;
MCAPI std::string gPublishAssertFullMessage;
MCAPI bool gShouldDebugBreak;
MCAPI bool gShouldPresentDialog;


} // namespace DebugUtils