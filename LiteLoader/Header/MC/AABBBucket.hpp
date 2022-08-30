/**
 * @file  AABBBucket.hpp
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
 * @brief MC structure AABBBucket.
 *
 */
struct AABBBucket {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AABBBUCKET
public:
    struct AABBBucket& operator=(struct AABBBucket const &) = delete;
    AABBBucket(struct AABBBucket const &) = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AABBBUCKET
#endif
    MCAPI AABBBucket();
    MCAPI void clearDirty();
    MCAPI void clearNeedsFinalize();
    MCAPI bool isDirty();
    MCAPI void markDirty();
    MCAPI void mergeAABBs();
    MCAPI bool needsFinalize() const;

};