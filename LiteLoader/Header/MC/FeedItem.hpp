// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_FEEDITEM
#include "Extra/FeedItemAPI.hpp"
#undef EXTRA_INCLUDE_PART_FEEDITEM
class FeedItem {
#include "Extra/FeedItemAPI.hpp"

public:
    MCAPI FeedItem(struct FeedItem const&);
    MCAPI void addEffect(struct FeedItem::Effect const&);
    MCAPI ~FeedItem();
};