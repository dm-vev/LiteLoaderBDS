/**
 * @file  PlayerActionPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
// Refer to https://github.com/LiteLDev/BEProtocolGolang/blob/master/minecraft/protocol/player.go
enum PlayerActionType {
    StartBreak,
    AbortBreak,
    StopBreak,
    GetUpdatedBlock,
    DropItem,
    StartSleeping,
    StopSleeping,
    Respawn,
    Jump,
    StartSprint,
    StopSprint,
    StartSneak,
    StopSneak,
    CreativePlayerDestroyBlock,
    DimensionChangeDone,
    StartGlide,
    StopGlide,
    BuildDenied,
    CrackBreak,
    ChangeSkin,
    SetEnchantmentSeed,
    StartSwimming,
    StopSwimming,
    StartSpinAttack,
    StopSpinAttack,
    StartBuildingBlock,
    PredictDestroyBlock,
    ContinueDestroyBlock,
};

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerActionPacket.
 *
 */
class PlayerActionPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    BlockPos position;           // 48
    BlockPos position2;          // 60
    FaceID blockFace;            // 72
    PlayerActionType actionType; // 76
    ActorRuntimeID runtimeID;    // 80

    inline std::string toDebugString() {
        return fmt::format("{}: position: ({}), blockFace: {}, actionType: {}, runtimeID: {}",
            __super::toDebugString(),
            position.toString(), (int)blockFace, (int)actionType, runtimeID.id);
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERACTIONPACKET
public:
    class PlayerActionPacket& operator=(class PlayerActionPacket const &) = delete;
    PlayerActionPacket(class PlayerActionPacket const &) = delete;
#endif

public:
    virtual ~PlayerActionPacket();
    virtual enum MinecraftPacketIds getId() const;
    virtual std::string getName() const;
    virtual void write(class BinaryStream &) const;
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERACTIONPACKET
#endif
    MCAPI PlayerActionPacket();
    MCAPI PlayerActionPacket(enum PlayerActionType, class ActorRuntimeID);
    MCAPI PlayerActionPacket(enum PlayerActionType, class BlockPos const &, class ActorRuntimeID);
    MCAPI PlayerActionPacket(enum PlayerActionType, class BlockPos const &, int, class ActorRuntimeID);
    MCAPI PlayerActionPacket(enum PlayerActionType, class BlockPos const &, unsigned char, class ActorRuntimeID);
    MCAPI PlayerActionPacket(enum PlayerActionType, class BlockPos const &, class BlockPos const &, int, class ActorRuntimeID);

};