/**
 * @file  DynamicPropertiesDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DynamicPropertiesDefinition.
 *
 */
class DynamicPropertiesDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DYNAMICPROPERTIESDEFINITION
public:
    class DynamicPropertiesDefinition& operator=(class DynamicPropertiesDefinition const &) = delete;
    DynamicPropertiesDefinition(class DynamicPropertiesDefinition const &) = delete;
    DynamicPropertiesDefinition() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DYNAMICPROPERTIESDEFINITION
#endif
    MCAPI void clear();
    MCAPI bool defineProperty(std::string const &, struct DynamicPropertyDefinition, unsigned __int64);
    MCAPI struct DynamicPropertyDefinition const * tryGetPropertyDefinition(std::string const &) const;
    MCAPI std::string tryMergeDefinitions(class DynamicPropertiesDefinition const &, std::string const &, unsigned __int64);
    MCAPI ~DynamicPropertiesDefinition();
    MCAPI static void clearAll(class std::unordered_map<std::string, std::unique_ptr<class ActorDefinition>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::unique_ptr<class ActorDefinition>>>> const &);

//private:
    MCAPI bool _canMergeDefinitions(class DynamicPropertiesDefinition const &, std::string const &, unsigned __int64, std::string &) const;

private:

};