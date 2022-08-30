/**
 * @file  LevelDataWrapper.hpp
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
 * @brief MC class LevelDataWrapper.
 *
 */
class LevelDataWrapper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELDATAWRAPPER
public:
    class LevelDataWrapper& operator=(class LevelDataWrapper const &) = delete;
    LevelDataWrapper(class LevelDataWrapper const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELDATAWRAPPER
#endif
    MCAPI LevelDataWrapper();
    MCAPI class LevelData const & operator*() const;
    MCAPI class LevelData & operator*();
    MCAPI class LevelData const * operator->() const;
    MCAPI class LevelData * operator->();
    MCAPI void setLevelData(class LevelData &);
    MCAPI ~LevelDataWrapper();

};