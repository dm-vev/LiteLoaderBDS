/**
 * @file  ClientChunkGenerationValidationData.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ClientChunkGenerationValidationData.
 *
 */
struct ClientChunkGenerationValidationData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTCHUNKGENERATIONVALIDATIONDATA
public:
    struct ClientChunkGenerationValidationData& operator=(struct ClientChunkGenerationValidationData const &) = delete;
    ClientChunkGenerationValidationData(struct ClientChunkGenerationValidationData const &) = delete;
    ClientChunkGenerationValidationData() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLIENTCHUNKGENERATIONVALIDATIONDATA
#endif
    MCAPI void captureServerChunkData(class ChunkSource &);

//protected:
    MCAPI void _captureChunkData(class std::map<class ChunkPos, std::vector<std::string>, struct std::less<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, std::vector<std::string>>>> &, class ChunkSource &);

};