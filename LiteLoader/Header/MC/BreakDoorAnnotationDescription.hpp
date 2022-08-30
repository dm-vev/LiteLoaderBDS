/**
 * @file  BreakDoorAnnotationDescription.hpp
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
 * @brief MC class BreakDoorAnnotationDescription.
 *
 */
class BreakDoorAnnotationDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKDOORANNOTATIONDESCRIPTION
public:
    class BreakDoorAnnotationDescription& operator=(class BreakDoorAnnotationDescription const &) = delete;
    BreakDoorAnnotationDescription(class BreakDoorAnnotationDescription const &) = delete;
    BreakDoorAnnotationDescription() = delete;
#endif

public:
    virtual char const * getJsonName() const;
    virtual ~BreakDoorAnnotationDescription();
    virtual void deserializeData(struct DeserializeDataParams);
    virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BREAKDOORANNOTATIONDESCRIPTION
#endif

};