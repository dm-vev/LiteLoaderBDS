/**
 * @file  EconomyTradeableDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EconomyTradeableDescription.
 *
 */
class EconomyTradeableDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ECONOMYTRADEABLEDESCRIPTION
public:
    class EconomyTradeableDescription& operator=(class EconomyTradeableDescription const &) = delete;
    EconomyTradeableDescription(class EconomyTradeableDescription const &) = delete;
    EconomyTradeableDescription() = delete;
#endif

public:
    virtual char const * getJsonName() const;
    virtual ~EconomyTradeableDescription();
    virtual void deserializeData(struct DeserializeDataParams);
    virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ECONOMYTRADEABLEDESCRIPTION
#endif

};