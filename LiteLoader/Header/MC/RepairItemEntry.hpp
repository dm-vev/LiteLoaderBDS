/**
 * @file  RepairItemEntry.hpp
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
 * @brief MC structure RepairItemEntry.
 *
 */
struct RepairItemEntry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRApublic:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REPAIRITEMENTRY
#endif
    MCAPI RepairItemEntry();
    MCAPI RepairItemEntry(struct RepairItemEntry const &);
    MCAPI struct RepairItemEntry & operator=(struct RepairItemEntry &&);
    MCAPI struct RepairItemEntry & operator=(struct RepairItemEntry const &);
    MCAPI ~RepairItemEntry();

};