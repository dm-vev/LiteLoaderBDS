/**
 * @file  WeakStorageFeature.hpp
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
 * @brief MC class WeakStorageFeature.
 *
 */
class WeakStorageFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEAKSTORAGEFEATURE
public:
    class WeakStorageFeature& operator=(class WeakStorageFeature const &) = delete;
    WeakStorageFeature(class WeakStorageFeature const &) = delete;
    WeakStorageFeature() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WEAKSTORAGEFEATURE
#endif

//protected:
    MCAPI WeakStorageFeature(enum WeakStorageFeature::EmptyInit);
    MCAPI WeakStorageFeature(class OwnerStorageFeature const &);
    MCAPI WeakStorageFeature(class WeakStorageFeature &&);
    MCAPI bool _isSet() const;
    MCAPI class WeakStorageFeature & operator=(class WeakStorageFeature &&);

protected:

};