/**
 * @file  ItemInstance.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemStackBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemInstance.
 *
 */
class ItemInstance : public ItemStackBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
public:
    virtual ~ItemInstance();
    virtual void reinit(class Item const &, int, int);
    virtual void reinit(class BlockLegacy const &, int);
    virtual void reinit(class gsl::basic_string_span<char const, -1>, int, int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMINSTANCE
#endif
    MCAPI ItemInstance();
    MCAPI ItemInstance(class gsl::basic_string_span<char const, -1>, int, int, class CompoundTag const *);
    MCAPI ItemInstance(class Item const &, int, int, class CompoundTag const *);
    MCAPI ItemInstance(class Item const &, int, int);
    MCAPI ItemInstance(class Item const &, int);
    MCAPI ItemInstance(class Item const &);
    MCAPI ItemInstance(class BlockLegacy const &, int);
    MCAPI ItemInstance(class Block const &, int, class CompoundTag const *);
    MCAPI ItemInstance(class ItemInstance const &);
    MCAPI ItemInstance(class ItemStackBase const &);
    MCAPI class ItemInstance clone() const;
    MCAPI class ItemInstance & operator=(class ItemInstance const &);
MCAPI static class ItemInstance const EMPTY_ITEM;
    MCAPI static class ItemInstance fromTag(class CompoundTag const &);

//protected:
    MCAPI ItemInstance(class BlockLegacy const &, int, short);

protected:

};