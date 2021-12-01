// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_FILECHUNKMANAGER
#include "Extra/FileChunkManagerAPI.hpp"
#undef EXTRA_INCLUDE_PART_FILECHUNKMANAGER
class FileChunkManager {
#include "Extra/FileChunkManagerAPI.hpp"

public:
    MCAPI FileChunkManager();
    MCAPI struct FileChunkInfo getChunkInfo(int) const;
    MCAPI std::vector<struct FileChunkInfo> const& getChunks() const;
    MCAPI int getTotalNumberOfChunks();
    MCAPI void reset();
    MCAPI void reset(unsigned __int64, unsigned int);
    MCAPI ~FileChunkManager();


private:
    MCAPI void _generateChunkInfo();
};