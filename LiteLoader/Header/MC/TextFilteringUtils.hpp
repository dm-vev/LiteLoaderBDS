/**
 * @file  TextFilteringUtils.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class TextFilteringUtils.
 *
 */
class TextFilteringUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTFILTERINGUTILS
public:
    class TextFilteringUtils& operator=(class TextFilteringUtils const &) = delete;
    TextFilteringUtils(class TextFilteringUtils const &) = delete;
    TextFilteringUtils() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TEXTFILTERINGUTILS
#endif
    MCAPI static void checkChatFilteringEventsAndSendToastIfClientWasMuted(std::vector<std::string> const &, class gsl::not_null<class PacketSender *>, class NetworkIdentifier const &, enum SubClientId const &);

};