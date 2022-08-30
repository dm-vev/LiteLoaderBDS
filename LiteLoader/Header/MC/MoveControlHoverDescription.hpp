/**
 * @file  MoveControlHoverDescription.hpp
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
 * @brief MC class MoveControlHoverDescription.
 *
 */
class MoveControlHoverDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVECONTROLHOVERDESCRIPTION
public:
    class MoveControlHoverDescription& operator=(class MoveControlHoverDescription const &) = delete;
    MoveControlHoverDescription(class MoveControlHoverDescription const &) = delete;
    MoveControlHoverDescription() = delete;
#endif

public:
    virtual char const * getJsonName() const;
    virtual ~MoveControlHoverDescription();
    virtual void deserializeData(struct DeserializeDataParams);
    virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVECONTROLHOVERDESCRIPTION
#endif

};