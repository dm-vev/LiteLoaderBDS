/**
 * @file  DBStorage.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"
#include "LevelStorageWriteBatch.hpp"
#include "LevelStorage.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "third-party/leveldb/status.h"

#undef BEFORE_EXTRA

/**
 * @brief MC class DBStorage.
 *
 */
class DBStorage : public LevelStorage {

#define AFTER_EXTRA
// Add Member There
public:
struct PendingWriteResult {
    PendingWriteResult() = delete;
    PendingWriteResult(PendingWriteResult const&) = delete;
    PendingWriteResult(PendingWriteResult const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DBSTORAGE
public:
    class DBStorage& operator=(class DBStorage const &) = delete;
    DBStorage(class DBStorage const &) = delete;
    DBStorage() = delete;
#endif

public:
    virtual ~DBStorage();
    virtual void addStorageObserver(std::unique_ptr<class LevelStorageObserver>);
    virtual std::unique_ptr<class CompoundTag> getCompoundTag(std::string const &, enum DBHelpers::Category);
    virtual bool hasKey(class gsl::basic_string_span<char const, -1>, enum DBHelpers::Category) const;
    virtual void forEachKeyWithPrefix(class gsl::basic_string_span<char const, -1>, enum DBHelpers::Category, class std::function<void (class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>)> const &) const;
    virtual bool loadLevelData(class LevelData &);
    virtual std::unique_ptr<class ChunkSource> createChunkStorage(std::unique_ptr<class ChunkSource>, enum StorageVersion);
    virtual void saveLevelData(class LevelData const &);
    virtual class Core::PathBuffer<std::string> const & getFullPath() const;
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> saveData(std::string const &, std::string &&, enum DBHelpers::Category);
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> saveData(class LevelStorageWriteBatch const &);
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> deleteData(std::string const &, enum DBHelpers::Category);
    virtual void syncIO();
    virtual void getStatistics(std::string &) const;
    virtual void __unk_vfn_15();
    virtual void startShutdown();
    virtual bool isShuttingDown() const;
    virtual bool checkShutdownDone();
    virtual bool loadData(class gsl::basic_string_span<char const, -1>, std::string &, enum DBHelpers::Category) const;
    virtual void __unk_vfn_20();
    virtual std::vector<struct SnapshotFilenameAndLength> createSnapshot(std::string const &);
    virtual void releaseSnapshot();
    virtual void compactStorage();
    virtual void syncAndSuspendStorage();
    virtual void resumeStorage();
    virtual void setFlushAllowed(bool);
    virtual void flushToPermanentStorage();
    virtual void freeCaches();
    virtual void setCompactionCallback(class std::function<void (enum CompactionStatus)>);
    virtual void setCriticalSyncSaveCallback(class std::function<void (void)>);
    virtual void corruptLevel();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DBSTORAGE
    MCVAPI struct Core::LevelStorageResult getLevelStorageState() const;
    MCVAPI struct Core::LevelStorageResult getState() const;
#endif
    MCAPI DBStorage(struct DBStorageConfig, class gsl::not_null<class Bedrock::NonOwnerPointer<class LevelDbEnv>>);
    MCAPI void _notifyChunkStorageDestroyed(class DBChunkStorage &);
    MCAPI bool tryRepair(class Core::Path const &) const;

//protected:
    MCAPI struct std::pair<class LevelStorageWriteBatch *, class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<std::string const, struct LevelStorageWriteBatch::BatchEntry>>>>> _findCacheEntry(std::string const &);
    MCAPI class std::map<std::string, struct DBStorage::PendingWriteResult, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, struct DBStorage::PendingWriteResult>>> _getAllPendingWrites() const;
    MCAPI void _handleErrorStatus(class leveldb::Status const &);
    MCAPI void _mergeIntoWriteCache(class LevelStorageWriteBatch const &);
    MCAPI void _queueSaveCallback(bool);
    MCAPI void _read(class gsl::basic_string_span<char const, -1>, enum DBHelpers::Category, class std::function<void (class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>)> const &) const;
    MCAPI struct DBStorage::PendingWriteResult _readPendingWrite(std::string const &, enum DBHelpers::Category) const;

//private:
    MCAPI class TaskResult _flushWriteCacheToLevelDB();
    MCAPI std::string _getTelemetryMessage(class leveldb::Status const &) const;
    MCAPI void _markAsCorrupted(class gsl::basic_string_span<char const, -1>) const;
    MCAPI void _scheduleNextAutoCompaction();
    MCAPI bool _suspendAndPerformSaveAction(class std::function<class TaskResult (void)>, class std::function<void (void)>);

protected:

private:

};