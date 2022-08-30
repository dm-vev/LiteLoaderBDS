/**
 * @file  BiomeSource3d.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BiomeSource3d.
 *
 */
class BiomeSource3d {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMESOURCE3D
public:
    class BiomeSource3d& operator=(class BiomeSource3d const &) = delete;
    BiomeSource3d(class BiomeSource3d const &) = delete;
    BiomeSource3d() = delete;
#endif

public:
    virtual ~BiomeSource3d();
    virtual void fillBiomes(class LevelChunk &, class ChunkLocalNoiseCache const &) const;
    virtual class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int) const;
    virtual class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int, struct GetBiomeOptions const &) const;
    virtual bool containsOnly(int, int, int, int, class gsl::span<int const, -1>) const;
    virtual class Biome const * getBiome(class BlockPos const &) const;
    virtual class Biome const * getBiome(struct GetBiomeOptions const &) const;
    virtual class Biome const * getBiome(int, int, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BIOMESOURCE3D
#endif

};