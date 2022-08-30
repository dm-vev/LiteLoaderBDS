/**
 * @file  VanillaVillageJigsawStructureElements.hpp
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
 * @brief MC class VanillaVillageJigsawStructureElements.
 *
 */
class VanillaVillageJigsawStructureElements {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAVILLAGEJIGSAWSTRUCTUREELEMENTS
public:
    class VanillaVillageJigsawStructureElements& operator=(class VanillaVillageJigsawStructureElements const &) = delete;
    VanillaVillageJigsawStructureElements(class VanillaVillageJigsawStructureElements const &) = delete;
    VanillaVillageJigsawStructureElements() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VANILLAVILLAGEJIGSAWSTRUCTUREELEMENTS
#endif
    MCAPI static void initialize(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class FeatureRegistry &, class JigsawStructureRegistry &);

};