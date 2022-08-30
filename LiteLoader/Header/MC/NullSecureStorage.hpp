/**
 * @file  NullSecureStorage.hpp
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
 * @brief MC class NullSecureStorage.
 *
 */
class NullSecureStorage {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NULLSECURESTORAGE
public:
    class NullSecureStorage& operator=(class NullSecureStorage const &) = delete;
    NullSecureStorage(class NullSecureStorage const &) = delete;
    NullSecureStorage() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NULLSECURESTORAGE
    MCVAPI bool add(std::string const &, std::string const &);
    MCVAPI bool addOrUpdate(std::string const &, std::string const &);
    MCVAPI bool get(std::string const &, std::string &);
    MCVAPI bool remove(std::string const &);
#endif

};