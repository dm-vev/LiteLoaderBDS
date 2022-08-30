/**
 * @file  I18n.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
class Localization;

#undef BEFORE_EXTRA

/**
 * @brief MC class I18n.
 *
 */
class I18n {

#define AFTER_EXTRA
// Add Member There
public:
    LIAPI static Localization const* getLanguage(std::string const& languageCode);
    inline static std::string get(std::string const& key)
    {
        return get(key, mCurrentLanguage);
    }
    inline static std::string get(std::string const& key, std::vector<std::string> args)
    {
        return get(key, args, mCurrentLanguage);
    }
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_I18N
public:
    class I18n& operator=(class I18n const &) = delete;
    I18n(class I18n const &) = delete;
    I18n() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_I18N
#endif
MCAPI static char const NeutralLangCode[];
    MCAPI static void addI18nObserver(class I18nObserver &);
    MCAPI static void appendLanguageStringsFromPack(class PackManifest const &, class std::multimap<std::string, struct std::pair<std::string, std::string>, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, struct std::pair<std::string, std::string>>>> const &);
    MCAPI static void chooseLanguage(std::string const &);
    MCAPI static void chooseLanguage(class Localization const &);
    MCAPI static class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> findAvailableLanguageNames(class ResourcePackManager &);
    MCAPI static std::vector<std::string> findAvailableLanguages(class ResourcePackManager &);
    MCAPI static std::string get(std::string const &, std::vector<std::string> const &, class Localization const *);
    MCAPI static std::string get(std::string const &, class Localization const *);
    MCAPI static class optional_ref<class Localization const> getCurrentLanguage();
    MCAPI static std::vector<std::string> getLanguageCodesFromPack(class PackAccessStrategy const &);
    MCAPI static std::string getPackKeywordValue(class PackManifest const &, std::string const &);
    MCAPI static std::string getPackKeywordValueForTelemetry(class PackManifest const &, std::string const &);
    MCAPI static bool isPackKeyword(std::string const &);
    MCAPI static void loadAllLanguages(class ResourcePackManager &);
    MCAPI static void loadLanguageKeywordsFromPack(class PackManifest const &, class PackAccessStrategy const &, std::vector<std::string> const &);

//private:
    MCAPI static void _findAvailableLanguageNames(class Json::Value const &, class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> &);
    MCAPI static void _findAvailableLanguages(class Json::Value const &, std::vector<std::string> &);
    MCAPI static class Localization * _findLocaleFor(std::string const &);
    MCAPI static std::string _generatePackKeyPrefix(class PackManifest const &);
    MCAPI static class Localization * _getAdditionalTranslationsBackupLocale(std::string const &, bool);
    MCAPI static std::string & _getLocaleCodeFor(std::string const &);
    MCAPI static class Localization & _getPackKeywordLocale(std::string const &);

private:
MCAPI static std::vector<std::unique_ptr<class Localization>> mAdditionalTranslationsBackup;
MCAPI static class std::mutex mAdditionalTranslationsBackupMutex;
MCAPI static class Localization const * mCurrentLanguage;
MCAPI static class Localization const * mCurrentPackMetaLanguage;
MCAPI static class Localization const mEmptyLanguage;
MCAPI static class std::unordered_map<std::string, std::vector<std::string>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::vector<std::string>>>> mFormatDictionary;
MCAPI static std::vector<std::string> mLanguageCodes;
MCAPI static class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> mLanguageNames;
MCAPI static bool mLanguageSupportsHypenSplitting;
MCAPI static std::vector<std::unique_ptr<class Localization>> mLanguages;
MCAPI static std::vector<std::unique_ptr<class Localization>> mPackKeywordLanguages;
MCAPI static std::vector<std::string> const mPackReservedKeys;
MCAPI static class ResourcePackManager * mResourcePackManager;
MCAPI static class Core::Subject<class I18nObserver, class Core::SingleThreadedLock> mSubject;

};