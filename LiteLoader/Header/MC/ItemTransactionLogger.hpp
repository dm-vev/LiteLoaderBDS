// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ITEMTRANSACTIONLOGGER
#include "Extra/ItemTransactionLoggerAPI.hpp"
#undef EXTRA_INCLUDE_PART_ITEMTRANSACTIONLOGGER
namespace ItemTransactionLogger {
#include "Extra/ItemTransactionLoggerAPI.hpp"

MCAPI void initializeLogger(bool);
MCAPI void log(class InventoryAction const&, std::string);
MCAPI void log(class InventoryTransactionPacket const&, std::string);
MCAPI void log(class ItemStack const&, std::string);
MCAPI void log(class ItemStackResponsePacket const&, std::string);
MCAPI void log(std::string);


} // namespace ItemTransactionLogger