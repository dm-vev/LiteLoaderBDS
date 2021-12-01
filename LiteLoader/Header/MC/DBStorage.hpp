// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "LevelStorage.hpp"
#define EXTRA_INCLUDE_PART_DBSTORAGE
#include "Extra/DBStorageAPI.hpp"
#undef EXTRA_INCLUDE_PART_DBSTORAGE
class DBStorage : public LevelStorage {
#include "Extra/DBStorageAPI.hpp"
public:
    virtual ~DBStorage();
    virtual void addStorageObserver(std::unique_ptr<class LevelStorageObserver>);
    virtual std::unique_ptr<class CompoundTag> getCompoundTag(std::string const&, int /*enum DBHelpers::Category*/);
    virtual bool hasKey(class gsl::basic_string_span<char const, -1>, int /*enum DBHelpers::Category*/);
    virtual void forEachKeyWithPrefix(class gsl::basic_string_span<char const, -1>, int /*enum DBHelpers::Category*/, class std::function<void(class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>)> const&);
    virtual bool loadLevelData(class LevelData&);
    virtual std::unique_ptr<class ChunkSource> createChunkStorage(std::unique_ptr<class ChunkSource>, int /*enum StorageVersion*/);
    virtual void saveLevelData(class LevelData const&);
    virtual void unk_vfn_8();
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> saveData(class LevelStorageWriteBatch const&);
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> saveData(std::string const&, std::string&&, int /*enum DBHelpers::Category*/);
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> deleteData(std::string const&, int /*enum DBHelpers::Category*/);
    virtual void syncIO();
    virtual void getStatistics(std::string&);
    virtual void unk_vfn_15();
    virtual void startShutdown();
    virtual bool isShuttingDown();
    virtual bool checkShutdownDone();
    virtual bool loadData(class gsl::basic_string_span<char const, -1>, std::string&, int /*enum DBHelpers::Category*/);
    virtual void unk_vfn_20();
    virtual std::vector<struct SnapshotFilenameAndLength> createSnapshot(std::string const&);
    virtual void releaseSnapshot();
    virtual void compactStorage();
    virtual void syncAndSuspendStorage();
    virtual void resumeStorage();
    virtual void setFlushAllowed(bool);
    virtual void flushToPermanentStorage();
    virtual void freeCaches();
    virtual void setCompactionCallback(class std::function<void(int /*enum CompactionStatus*/)>);
    virtual void setCriticalSyncSaveCallback(class std::function<void(void)>);
    virtual void corruptLevel();

public:
    MCAPI DBStorage(struct DBStorageConfig);
    MCAPI bool tryRepair(class Core::Path const&) const;


private:
    MCAPI class TaskResult _flushWriteCacheToLevelDB();
    MCAPI std::string _getTelemetryMessage(class leveldb::Status const&) const;
    MCAPI void _markAsCorrupted(class gsl::basic_string_span<char const, -1>) const;
    MCAPI void _scheduleNextAutoCompaction();
    MCAPI bool _suspendAndPerformSaveAction(class std::function<class TaskResult(void)>, class std::function<void(void)>);


protected:
    MCAPI void _handleErrorStatus(class leveldb::Status const&);
    MCAPI void _mergeIntoWriteCache(class LevelStorageWriteBatch const&);
    MCAPI void _queueSaveCallback(bool);
    MCAPI void _read(class gsl::basic_string_span<char const, -1>, enum DBHelpers::Category, class std::function<void(class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>)> const&) const;
    MCAPI struct DBStorage::PendingWriteResult _readPendingWrite(std::string const&, enum DBHelpers::Category) const;
};