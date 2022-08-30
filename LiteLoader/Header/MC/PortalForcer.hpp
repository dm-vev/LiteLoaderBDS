/**
 * @file  PortalForcer.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PortalForcer.
 *
 */
class PortalForcer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PORTALFORCER
public:
    class PortalForcer& operator=(class PortalForcer const &) = delete;
    PortalForcer(class PortalForcer const &) = delete;
    PortalForcer() = delete;
#endif

public:
    virtual ~PortalForcer();
    virtual void deserialize(class CompoundTag const &);
    virtual void serialize(class CompoundTag &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PORTALFORCER
#endif
    MCAPI PortalForcer(class Level &);
    MCAPI class PortalRecord const & addPortalRecord(class AutomaticID<class Dimension, int>, class PortalShape const &);
    MCAPI class PortalRecord const & addPortalRecord(class AutomaticID<class Dimension, int>, class PortalRecord);
    MCAPI class PortalRecord const & createPortal(class Actor const &, int);
    MCAPI bool findPortal(class AutomaticID<class Dimension, int>, class BlockPos const &, int, class BlockPos &) const;
    MCAPI void force(class Actor &, struct DimensionTransitionComponent const &);
    MCAPI bool portalRecordExists(class AutomaticID<class Dimension, int>, class PortalRecord const &) const;
    MCAPI void removeMisalignedPortalRecords(class BlockSource &, class PortalShape const &, class PortalRecord const &);
    MCAPI void removePortalRecord(class BlockSource &, class BlockPos const &);
MCAPI static std::string const PORTAL_FILE_ID;

//private:
    MCAPI class std::optional<class PortalRecord> _findPortal(class AutomaticID<class Dimension, int>, class BlockPos const &, int, class BlockPos &) const;

private:

};