/**
 * @file  WebRTCNetworkPeer.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NetworkPeer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WebRTCNetworkPeer.
 *
 */
class WebRTCNetworkPeer : public NetworkPeer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEBRTCNETWORKPEER
public:
    class WebRTCNetworkPeer& operator=(class WebRTCNetworkPeer const &) = delete;
    WebRTCNetworkPeer(class WebRTCNetworkPeer const &) = delete;
    WebRTCNetworkPeer() = delete;
#endif

public:
    virtual ~WebRTCNetworkPeer();
    virtual void sendPacket(std::string const &, enum NetworkPeer::Reliability, int, unsigned short, enum Compressibility);
    virtual enum NetworkPeer::DataStatus receivePacket(std::string &, class std::shared_ptr<class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>> const &);
    virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const;
    virtual void update();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WEBRTCNETWORKPEER
#endif
    MCAPI WebRTCNetworkPeer(class std::shared_ptr<struct NetherNetInstance> const &);
    MCAPI void setRemoteUserID(unsigned __int64);
    MCAPI static void pullIncomingData(class std::shared_ptr<struct NetherNetInstance> const &, class NetworkHandler &);

//private:
    MCAPI void _updateConnectionStatus();

private:

};