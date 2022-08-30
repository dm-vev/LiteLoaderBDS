/**
 * @file  RecipeCraftInputs.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class RecipeCraftInputs.
 *
 */
class RecipeCraftInputs {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RECIPECRAFTINPUTS
public:
    class RecipeCraftInputs& operator=(class RecipeCraftInputs const &) = delete;
    RecipeCraftInputs(class RecipeCraftInputs const &) = delete;
    RecipeCraftInputs() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RECIPECRAFTINPUTS
#endif
    MCAPI RecipeCraftInputs(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &);
    MCAPI ~RecipeCraftInputs();

};