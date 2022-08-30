/**
 * @file  PackIdVersion.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "SemVersion.hpp"
#include "ResourcePack.hpp"
#undef BEFORE_EXTRA

/**
 * @brief MC structure PackIdVersion.
 *
 */
struct PackIdVersion {

#define AFTER_EXTRA
// Add Member There
public:
    mce::UUID mUUID;
    SemVersion mVersion;
    PackType mType;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKIDVERSION
public:
    struct PackIdVersion& operator=(struct PackIdVersion const &) = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKIDVERSION
#endif
    MCAPI PackIdVersion();
    MCAPI PackIdVersion(class mce::UUID const &, class SemVersion const &, enum PackType);
    MCAPI PackIdVersion(struct PackIdVersion const &);
    MCAPI std::string asString() const;
    MCAPI bool operator!=(struct PackIdVersion const &) const;
    MCAPI bool operator<(struct PackIdVersion const &) const;
    MCAPI struct PackIdVersion & operator=(struct PackIdVersion &&);
    MCAPI bool operator==(struct PackIdVersion const &) const;
    MCAPI bool satisfies(struct PackIdVersion const &) const;
    MCAPI ~PackIdVersion();

};