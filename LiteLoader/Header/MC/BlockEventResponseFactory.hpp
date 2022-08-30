/**
 * @file  BlockEventResponseFactory.hpp
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
 * @brief MC class BlockEventResponseFactory.
 *
 */
class BlockEventResponseFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKEVENTRESPONSEFACTORY
public:
    class BlockEventResponseFactory& operator=(class BlockEventResponseFactory const &) = delete;
    BlockEventResponseFactory(class BlockEventResponseFactory const &) = delete;
    BlockEventResponseFactory() = delete;
#endif

public:
    virtual ~BlockEventResponseFactory();
    virtual void initializeFactory(class Experiments const &);
    virtual void initSchema();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKEVENTRESPONSEFACTORY
#endif

};