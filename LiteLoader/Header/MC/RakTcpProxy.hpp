// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_RAKTCPPROXY
#include "Extra/RakTcpProxyAPI.hpp"
#undef EXTRA_INCLUDE_PART_RAKTCPPROXY
class RakTcpProxy {
#include "Extra/RakTcpProxyAPI.hpp"
public:
    virtual ~RakTcpProxy();
    virtual bool start(unsigned short, unsigned short, unsigned short);
    virtual struct RakNet::SystemAddress connect(std::string const&, unsigned short);
    virtual void send(char const*, unsigned int, struct RakNet::SystemAddress);
    virtual void close(struct RakNet::SystemAddress);
    virtual bool packetsAvailable();
    virtual struct RakNet::Packet* nextPacket();
    virtual void deallocatePacket(struct RakNet::Packet*);
    virtual struct RakNet::SystemAddress nextCompletedConnectionAttempt();
    virtual struct RakNet::SystemAddress nextFailedConnectionAttempt();
    virtual struct RakNet::SystemAddress nextLostConnection();

public:
    MCAPI RakTcpProxy();
};