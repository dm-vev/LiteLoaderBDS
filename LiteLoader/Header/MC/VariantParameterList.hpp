/**
 * @file  VariantParameterList.hpp
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
 * @brief MC class VariantParameterList.
 *
 */
class VariantParameterList {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VARIANTPARAMETERLIST
public:
    class VariantParameterList& operator=(class VariantParameterList const &) = delete;
    VariantParameterList(class VariantParameterList const &) = delete;
    VariantParameterList() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VARIANTPARAMETERLIST
#endif
    MCAPI bool hasParameter(enum FilterSubject) const;

};