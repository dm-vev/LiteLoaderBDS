/**
 * @file  InMemorySequentialFile.hpp
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
 * @brief MC class InMemorySequentialFile.
 *
 */
class InMemorySequentialFile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INMEMORYSEQUENTIALFILE
public:
    class InMemorySequentialFile& operator=(class InMemorySequentialFile const &) = delete;
    InMemorySequentialFile(class InMemorySequentialFile const &) = delete;
    InMemorySequentialFile() = delete;
#endif

public:
    virtual ~InMemorySequentialFile();
    virtual class leveldb::Status Read(unsigned __int64, class leveldb::Slice *, char *);
    virtual class leveldb::Status Skip(unsigned __int64);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INMEMORYSEQUENTIALFILE
#endif
    MCAPI InMemorySequentialFile(class std::shared_ptr<class InMemoryFile>);

};