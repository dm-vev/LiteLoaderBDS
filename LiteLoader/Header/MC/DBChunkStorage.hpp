/**
 * @file  DBChunkStorage.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ChunkSource.hpp"
#include "ConsoleChunkBlender.hpp"
#include "LevelChunk.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DBChunkStorage.
 *
 */
class DBChunkStorage : public ChunkSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DBCHUNKSTORAGE
public:
    class DBChunkStorage& operator=(class DBChunkStorage const &) = delete;
    DBChunkStorage(class DBChunkStorage const &) = delete;
    DBChunkStorage() = delete;
#endif

public:
    virtual ~DBChunkStorage();
    virtual void shutdown();
    virtual bool isShutdownDone();
    virtual bool isChunkKnown(class ChunkPos const &);
    virtual bool isChunkSaved(class ChunkPos const &);
    virtual bool postProcess(class ChunkViewSource &);
    virtual void checkAndReplaceChunk(class ChunkViewSource &, class LevelChunk &);
    virtual void loadChunk(class LevelChunk &, bool);
    virtual bool saveLiveChunk(class LevelChunk &);
    virtual void writeEntityChunkTransfer(class LevelChunk &);
    virtual void writeEntityChunkTransfersToUnloadedChunk(class ChunkKey const &, std::vector<struct ActorUnloadedChunkTransferEntry> const &);
    virtual void hintDiscardBatchBegin();
    virtual void hintDiscardBatchEnd();
    virtual void acquireDiscarded(class std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>);
    virtual void flushPendingDiscardedChunkWrites();
    virtual void flushThreadBatch();
    virtual std::unique_ptr<class BlendingDataProvider> tryGetBlendingDataProvider();
    virtual class std::shared_ptr<class LevelChunkMetaDataDictionary> loadLevelChunkMetaDataDictionary();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DBCHUNKSTORAGE
#endif
    MCAPI DBChunkStorage(std::unique_ptr<class ChunkSource>, class DBStorage &, class Scheduler &, class Experiments const &);
    MCAPI void freeCaches();
    MCAPI enum ConsoleChunkBlender::BlenderMode getBlenderMode(class LevelChunk const &);
    MCAPI static std::string deserializeActorStorageToString(bool, std::string const &, class std::function<bool (class gsl::basic_string_span<char const, -1>, std::string &)>);

//private:
    MCAPI struct std::pair<bool, class std::shared_ptr<class BlendingData>> _cacheSeamlessChunkBlendingData(class ChunkPos, bool, class std::shared_ptr<class BlendingData>);
    MCAPI bool _checkSubChunksUseAbsoluteIndices(class DBChunkStorageKey, class LevelChunk const &, bool &) const;
    MCAPI void _deserializeIndependentActorStorage(class LevelChunk &, std::string const &);
    MCAPI class LevelChunk::Neighbors _getChunkNeighbors(class ChunkPos, class AutomaticID<class Dimension, int>);
    MCAPI class std::optional<enum LevelChunkFormat> _getLevelChunkFormat(class gsl::basic_string_span<char const, -1>, std::string &);
    MCAPI bool _hasChunk(class DBChunkStorageKey const &);
    MCAPI bool _hasChunkUncached(class DBChunkStorageKey const &);
    MCAPI struct std::pair<bool, std::unique_ptr<struct PersistentBlendData>> _levelChunkCanBeUsedForBlending(class DBChunkStorageKey const &);
    MCAPI bool _loadChunkFromDB(class LevelChunk &, class LevelChunk &, class ChunkViewSource &);
    MCAPI void _saveBlendData(class LevelStorageWriteBatch &, class gsl::basic_string_span<char const, -1> const &, std::string &, struct PersistentBlendData) const;
    MCAPI void _serializeChunk(class LevelChunk &, class LevelStorageWriteBatch &, bool);
    MCAPI void _serializeEntities(class LevelChunk &, class LevelStorageWriteBatch &, std::string &, bool);
    MCAPI struct std::pair<bool, class std::shared_ptr<class BlendingData>> _tryGetBlendingDataForChunk(class ChunkPos const &);
    MCAPI std::string _upgradeActorStorage(class ChunkKey, class gsl::basic_string_span<char const, -1> &);
    MCAPI void _writeActorDigest(class LevelStorageWriteBatch &, class ChunkKey const &, std::string const &);
    MCAPI void _writeActorDigestFormatVersion(class LevelStorageWriteBatch &, class ChunkKey const &, enum ActorDigestFormat);
    MCAPI void _writeDiscardChunksBatch();
    MCAPI static std::vector<std::string> _deserializeChunkActorStorageKeys(class IDataInput &);

private:
MCAPI static class Bedrock::Threading::ThreadLocalObject<class LevelStorageWriteBatch, class std::allocator<class LevelStorageWriteBatch>> threadBatch;
MCAPI static class Bedrock::Threading::ThreadLocalObject<std::string, class std::allocator<std::string>> threadBuffer;

};