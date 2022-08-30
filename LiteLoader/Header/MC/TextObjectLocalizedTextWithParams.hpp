/**
 * @file  TextObjectLocalizedTextWithParams.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TextObjectLocalizedTextWithParams.
 *
 */
class TextObjectLocalizedTextWithParams {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTOBJECTLOCALIZEDTEXTWITHPARAMS
public:
    class TextObjectLocalizedTextWithParams& operator=(class TextObjectLocalizedTextWithParams const &) = delete;
    TextObjectLocalizedTextWithParams(class TextObjectLocalizedTextWithParams const &) = delete;
    TextObjectLocalizedTextWithParams() = delete;
#endif

public:
    virtual ~TextObjectLocalizedTextWithParams();
    virtual std::string asString() const;
    virtual class Json::Value asJsonValue() const;
    virtual class Json::Value resolve(struct ResolveData const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TEXTOBJECTLOCALIZEDTEXTWITHPARAMS
#endif
    MCAPI TextObjectLocalizedTextWithParams(std::string, std::unique_ptr<class TextObjectRoot>);
    MCAPI TextObjectLocalizedTextWithParams(std::string, std::vector<std::string> const &);

};