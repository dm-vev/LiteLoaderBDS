/**
 * @file  EducationMetadata.hpp
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
 * @brief MC structure EducationMetadata.
 *
 */
struct EducationMetadata {

#define AFTER_EXTRA
// Add Member There
enum ContentType;
enum UserType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDUCATIONMETADATA
public:
    struct EducationMetadata& operator=(struct EducationMetadata const &) = delete;
    EducationMetadata(struct EducationMetadata const &) = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EDUCATIONMETADATA
#endif
    MCAPI EducationMetadata();
    MCAPI ~EducationMetadata();
MCAPI static class std::unordered_map<std::string, enum EducationMetadata::ContentType, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, enum EducationMetadata::ContentType>>> const STRING_TO_CONTENT_TYPE;
MCAPI static class std::unordered_map<std::string, enum EducationMetadata::UserType, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, enum EducationMetadata::UserType>>> const STRING_TO_USER_TYPE;

};