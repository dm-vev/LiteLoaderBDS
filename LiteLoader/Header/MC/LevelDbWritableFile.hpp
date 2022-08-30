/**
 * @file  LevelDbWritableFile.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelDbWritableFile.
 *
 */
class LevelDbWritableFile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELDBWRITABLEFILE
public:
    class LevelDbWritableFile& operator=(class LevelDbWritableFile const &) = delete;
    LevelDbWritableFile(class LevelDbWritableFile const &) = delete;
    LevelDbWritableFile() = delete;
#endif

public:
    virtual ~LevelDbWritableFile();
    virtual class leveldb::Status Append(class leveldb::Slice const &);
    virtual class leveldb::Status Close();
    virtual class leveldb::Status Flush();
    virtual class leveldb::Status Sync();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELDBWRITABLEFILE
#endif
    MCAPI LevelDbWritableFile(std::string, class Core::File &&);

};