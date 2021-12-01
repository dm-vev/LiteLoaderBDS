// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_GAMERULES
#include "Extra/GameRulesAPI.hpp"
#undef EXTRA_INCLUDE_PART_GAMERULES
class GameRules {
#include "Extra/GameRulesAPI.hpp"

public:
    MCAPI GameRules();
    MCAPI GameRules(class GameRules const&);
    MCAPI std::unique_ptr<class GameRulesChangedPacket> createAllGameRulesPacket() const;
    MCAPI void deserializeRules(class GameRulesChangedPacketData const&);
    MCAPI bool getBool(struct GameRuleId, bool) const;
    MCAPI int getInt(struct GameRuleId) const;
    MCAPI class GameRule const* getRule(struct GameRuleId) const;
    MCAPI std::vector<class GameRule> const& getRules() const;
    MCAPI void getTagData(class CompoundTag const&);
    MCAPI bool hasRule(struct GameRuleId) const;
    MCAPI struct GameRuleId nameToGameRuleIndex(std::string const&) const;
    MCAPI void setMarketplaceOverrides();
    MCAPI std::unique_ptr<class GameRulesChangedPacket> setRule(struct GameRuleId, int, bool, bool*, bool*, class GameRule::ValidationError*);
    MCAPI std::unique_ptr<class GameRulesChangedPacket> setRule(struct GameRuleId, float, bool, bool*, bool*, class GameRule::ValidationError*);
    MCAPI std::unique_ptr<class GameRulesChangedPacket> setRule(struct GameRuleId, bool, bool, bool*, bool*, class GameRule::ValidationError*);
    MCAPI void setTagData(class CompoundTag&) const;
    MCAPI ~GameRules();

    MCAPI static unsigned int const DEFAULT_PLAYER_SPAWN_RADIUS;
    MCAPI static int const DEFAULT_RANDOMTICKSPEED;
    MCAPI static int const MAX_FUNCTIONCOMMANDLIMIT;
    MCAPI static unsigned int const MAX_PLAYER_SPAWN_RADIUS;
    MCAPI static int const MAX_RANDOMTICKSPEED;
    MCAPI static unsigned int const MIN_PLAYER_SPAWN_RADIUS;
    MCAPI static std::string const WORLD_POLICY_TAG_NAME;

private:
    MCAPI class GameRule& _registerRule(std::string const&, struct GameRuleId);
    MCAPI void _registerRules();
    MCAPI std::unique_ptr<class GameRulesChangedPacket> _setGameRule(class GameRule*, union GameRule::Value, enum GameRule::Type, bool, bool*, bool*, class GameRule::ValidationError*);
    MCAPI std::unique_ptr<class GameRulesChangedPacket> _setRule(struct GameRuleId, union GameRule::Value, enum GameRule::Type, bool, bool*, bool*, class GameRule::ValidationError*);
};