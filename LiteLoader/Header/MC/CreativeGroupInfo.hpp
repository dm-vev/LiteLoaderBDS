// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_CREATIVEGROUPINFO
#include "Extra/CreativeGroupInfoAPI.hpp"
#undef EXTRA_INCLUDE_PART_CREATIVEGROUPINFO
class CreativeGroupInfo {
#include "Extra/CreativeGroupInfoAPI.hpp"
public:
    virtual ~CreativeGroupInfo();

public:
    MCAPI CreativeGroupInfo(class CreativeItemRegistry*, enum CreativeItemCategory, class HashedString const&, unsigned int, class ItemInstance const&);
    MCAPI CreativeGroupInfo(class CreativeGroupInfo const&);
    MCAPI void addCreativeItem(class CreativeItemEntry*);
    MCAPI class ItemInstance const getIcon() const;
    MCAPI unsigned int getIndex() const;
    MCAPI std::string const getName() const;
};