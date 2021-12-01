// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_LOOPBACKPACKETSENDER
#include "Extra/LoopbackPacketSenderAPI.hpp"
#undef EXTRA_INCLUDE_PART_LOOPBACKPACKETSENDER
class LoopbackPacketSender {
#include "Extra/LoopbackPacketSenderAPI.hpp"
public:
    virtual ~LoopbackPacketSender();
    virtual void send(class Packet&);
    virtual void sendToServer(class Packet&);
    virtual void sendToClient(class NetworkIdentifier const&, class Packet const&, unsigned char);
    virtual void sendToClient(class UserEntityIdentifierComponent const*, class Packet const&);
    virtual void sendToClients(std::vector<struct NetworkIdentifierWithSubId> const&, class Packet const&);
    virtual void sendBroadcast(class NetworkIdentifier const&, unsigned char, class Packet const&);
    virtual void sendBroadcast(class Packet const&);
    virtual void flush(class NetworkIdentifier const&, class std::function<void(void)>&&);

public:
    MCAPI LoopbackPacketSender(unsigned char, class NetworkHandler&);
    MCAPI void addLoopbackCallback(class NetEventCallback&);
    MCAPI void removeLoopbackCallback(class NetEventCallback&);
    MCAPI void setUserList(std::vector<class OwnerPtrT<struct EntityRefTraits>> const*);
};