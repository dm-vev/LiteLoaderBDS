/**
 * @file  BlockMaterialInstance.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockMaterialInstance.
 *
 */
struct BlockMaterialInstance {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKMATERIALINSTANCE
public:
    BlockMaterialInstance(struct BlockMaterialInstance const &) = delete;
    BlockMaterialInstance() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKMATERIALINSTANCE
#endif
    MCAPI struct BlockMaterialInstance & operator=(struct BlockMaterialInstance &&);
    MCAPI struct BlockMaterialInstance & operator=(struct BlockMaterialInstance const &);
    MCAPI ~BlockMaterialInstance();
MCAPI static class std::initializer_list<struct std::pair<std::string, enum BlockRenderLayer>> const blockRenderLayerEnumValues;
MCAPI static class BidirectionalUnorderedMap<std::string, enum BlockRenderLayer> const renderLayerNameBiMap;

};