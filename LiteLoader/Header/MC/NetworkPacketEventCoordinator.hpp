// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "NetworkHandler.hpp"
#define EXTRA_INCLUDE_PART_NETWORKPACKETEVENTCOORDINATOR
#include "Extra/NetworkPacketEventCoordinatorAPI.hpp"
#undef EXTRA_INCLUDE_PART_NETWORKPACKETEVENTCOORDINATOR
class NetworkPacketEventCoordinator : public NetworkHandler {
#include "Extra/NetworkPacketEventCoordinatorAPI.hpp"
public:
    virtual ~NetworkPacketEventCoordinator();
    virtual void _onDisable();
    virtual();
    virtual();
    virtual void unk_vfn_12();
    virtual void unk_vfn_13();
    virtual();
    virtual();
    virtual();

public:
    MCAPI void sendPacketReceivedFrom(class PacketHeader const&, class Packet const&);
};