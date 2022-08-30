/**
 * @file  VanillaVillageJigsawStructures.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VanillaVillageJigsawStructures.
 *
 */
class VanillaVillageJigsawStructures {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAVILLAGEJIGSAWSTRUCTURES
public:
    class VanillaVillageJigsawStructures& operator=(class VanillaVillageJigsawStructures const &) = delete;
    VanillaVillageJigsawStructures(class VanillaVillageJigsawStructures const &) = delete;
    VanillaVillageJigsawStructures() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VANILLAVILLAGEJIGSAWSTRUCTURES
#endif
    MCAPI static void initialize(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class FeatureRegistry &, class JigsawStructureRegistry &);

};