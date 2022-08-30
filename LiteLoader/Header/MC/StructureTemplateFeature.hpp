/**
 * @file  StructureTemplateFeature.hpp
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
 * @brief MC class StructureTemplateFeature.
 *
 */
class StructureTemplateFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETEMPLATEFEATURE
public:
    class StructureTemplateFeature& operator=(class StructureTemplateFeature const &) = delete;
    StructureTemplateFeature(class StructureTemplateFeature const &) = delete;
#endif

public:
    virtual ~StructureTemplateFeature();
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTURETEMPLATEFEATURE
#endif
    MCAPI StructureTemplateFeature();

};