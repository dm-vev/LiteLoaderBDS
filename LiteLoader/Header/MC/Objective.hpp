// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_OBJECTIVE
#include "Extra/ObjectiveAPI.hpp"
#undef EXTRA_INCLUDE_PART_OBJECTIVE
class Objective {
#include "Extra/ObjectiveAPI.hpp"

public:
    MCAPI Objective(std::string const&, class ObjectiveCriteria const&);
    MCAPI class ObjectiveCriteria const& getCriteria() const;
    MCAPI std::string const& getDisplayName() const;
    MCAPI std::string const& getName() const;
    MCAPI struct ScoreInfo getPlayerScore(struct ScoreboardId const&) const;
    MCAPI bool getPlayerScoreRef(struct ScoreboardId const&, struct ScoreInfoRef&);
    MCAPI std::vector<struct ScoreboardId> getPlayers() const;
    MCAPI bool hasScore(struct ScoreboardId const&) const;

    MCAPI static std::unique_ptr<class Objective> deserialize(class CompoundTag const&, class Scoreboard&);
    MCAPI static std::unique_ptr<class CompoundTag> serialize(class Objective const&);
};