/**
 * @file  SparseContainer.hpp
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
 * @brief MC class SparseContainer.
 *
 */
class SparseContainer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPARSECONTAINER
public:
    class SparseContainer& operator=(class SparseContainer const &) = delete;
    SparseContainer(class SparseContainer const &) = delete;
    SparseContainer() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPARSECONTAINER
#endif
    MCAPI bool _isSlotInRange(int) const;
    MCAPI void addItemNetworkChangedCallback(enum ContainerEnumName, class std::function<void (int, class ItemStack const &, class ItemStack const &)>);
    MCAPI bool isUsingLegacyScreenTransactions() const;
    MCAPI void removeItemNetworkChangedCallback(enum ContainerEnumName);

//protected:
    MCAPI void _onItemNetworkChanged(int, class ItemStack const &, class ItemStack const &);
    MCAPI void _setBackingContainerSlot(int, class ItemStack const &);

protected:

};