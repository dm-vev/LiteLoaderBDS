/**
 * @file  SendPacketsSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SendPacketsSystem.
 *
 */
class SendPacketsSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SENDPACKETSSYSTEM
public:
    class SendPacketsSystem& operator=(class SendPacketsSystem const &) = delete;
    SendPacketsSystem(class SendPacketsSystem const &) = delete;
    SendPacketsSystem() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SENDPACKETSSYSTEM
#endif
    MCAPI static struct TickingSystemWithInfo createSendPacketsSystem();

};