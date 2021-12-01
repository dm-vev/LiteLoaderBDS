// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_GOHOMEGOAL
#include "Extra/GoHomeGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_GOHOMEGOAL
class GoHomeGoal {
#include "Extra/GoHomeGoalAPI.hpp"
public:
    virtual ~GoHomeGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();

public:
    MCAPI GoHomeGoal(class Mob&, float, int, float, std::vector<class DefinitionTrigger>, std::vector<class DefinitionTrigger>);

    MCAPI static int const GIVE_UP_TICKS;

private:
    MCAPI bool _hasRequiredComponents() const;


protected:
    MCAPI class AutomaticID<class Dimension, int> _getHomeDimension() const;
    MCAPI class BlockPos _getHomePos() const;
    MCAPI void _triggerOnFailedEvents();
};