// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ITEMSTACKREQUESTACTIONTRANSFERBASE
#include "Extra/ItemStackRequestActionTransferBaseAPI.hpp"
#undef EXTRA_INCLUDE_PART_ITEMSTACKREQUESTACTIONTRANSFERBASE
class ItemStackRequestActionTransferBase {
#include "Extra/ItemStackRequestActionTransferBaseAPI.hpp"

public:
    MCAPI unsigned char getAmount() const;
    MCAPI struct ItemStackRequestSlotInfo const& getSrc() const;
};