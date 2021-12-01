// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "NetworkPeer.hpp"
#define EXTRA_INCLUDE_PART_ENCRYPTEDNETWORKPEER
#include "Extra/EncryptedNetworkPeerAPI.hpp"
#undef EXTRA_INCLUDE_PART_ENCRYPTEDNETWORKPEER
class EncryptedNetworkPeer : public NetworkPeer {
#include "Extra/EncryptedNetworkPeerAPI.hpp"
public:
    virtual ~EncryptedNetworkPeer();
    virtual void sendPacket(std::string const&, int /*enum NetworkPeer::Reliability*/, int, unsigned short, int /*enum Compressibility*/);
    virtual int /*enum NetworkPeer::DataStatus*/ receivePacket(std::string&, class std::shared_ptr<class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>> const&);
    virtual struct NetworkPeer::NetworkStatus getNetworkStatus();

public:
    MCAPI void enableEncryption(std::string const&);
};