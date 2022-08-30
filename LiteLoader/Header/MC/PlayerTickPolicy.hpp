/**
 * @file  PlayerTickPolicy.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace PlayerTickPolicy.
 *
 */
namespace PlayerTickPolicy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    MCAPI std::unique_ptr<struct IPlayerTickPolicy> createPolicy(struct PlayerTickConfig const &);

};