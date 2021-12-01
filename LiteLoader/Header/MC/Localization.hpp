// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_LOCALIZATION
#include "Extra/LocalizationAPI.hpp"
#undef EXTRA_INCLUDE_PART_LOCALIZATION
class Localization {
#include "Extra/LocalizationAPI.hpp"

public:
    MCAPI Localization(std::string const&, class Localization*);
    MCAPI Localization(std::string const&);
    MCAPI void appendTranslations(class Localization const&);
    MCAPI std::string getFullLanguageCode() const;
    MCAPI ~Localization();

    MCAPI static std::string getLanguageCode(std::string const&);


protected:
    MCAPI class Core::PathBuffer<std::string> _getLangFilePath(std::string const&);
    MCAPI struct OptionalString _getSimple(std::string const&) const;
    MCAPI struct OptionalString _parseFormattedString(std::string const&) const;

    MCAPI static bool _isCommaSeperatedLanguage(std::string const&);
};