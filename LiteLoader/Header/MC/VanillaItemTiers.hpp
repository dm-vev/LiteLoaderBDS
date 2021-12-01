// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_VANILLAITEMTIERS
#include "Extra/VanillaItemTiersAPI.hpp"
#undef EXTRA_INCLUDE_PART_VANILLAITEMTIERS
namespace VanillaItemTiers {
#include "Extra/VanillaItemTiersAPI.hpp"

public:
MCAPI static class Item::Tier const DIAMOND;
MCAPI static class Item::Tier const GOLD;
MCAPI static class Item::Tier const IRON;
MCAPI static class Item::Tier const NETHERITE;
MCAPI static class Item::Tier const STONE;
MCAPI static class Item::Tier const WOOD;
MCAPI static std::vector<class ItemStack> const getTierItems(class Item::Tier const&, class BaseGameVersion const&);


} // namespace VanillaItemTiers