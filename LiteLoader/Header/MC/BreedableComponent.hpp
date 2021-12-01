// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BREEDABLECOMPONENT
#include "Extra/BreedableComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_BREEDABLECOMPONENT
class BreedableComponent {
#include "Extra/BreedableComponentAPI.hpp"

public:
    MCAPI BreedableComponent();
    MCAPI void addAdditionalSaveData(class CompoundTag&);
    MCAPI bool canMate(class Actor const&, class Actor const&) const;
    MCAPI void decrementBreedCooldown();
    MCAPI void decrementLoveTimer();
    MCAPI int getBreedCooldown() const;
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);
    MCAPI int getLoveTimer() const;
    MCAPI void mate(class Actor&, class Actor&);
    MCAPI bool meetsSittingRequirements(class Actor const&) const;
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    MCAPI void resetLove(class Actor&);
    MCAPI void setLoveTimer(int);


private:
    MCAPI void _handleMate(class Actor&, class Actor&);
    MCAPI void _handlePregnancy(class Actor&, class Actor&);
};