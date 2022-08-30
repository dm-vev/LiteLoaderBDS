/**
 * @file  ActorInCloudsTest.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorInCloudsTest.
 *
 */
class ActorInCloudsTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORINCLOUDSTEST
public:
    class ActorInCloudsTest& operator=(class ActorInCloudsTest const &) = delete;
    ActorInCloudsTest(class ActorInCloudsTest const &) = delete;
    ActorInCloudsTest() = delete;
#endif

public:
    virtual ~ActorInCloudsTest();
    virtual bool evaluate(struct FilterContext const &) const;
    virtual class gsl::basic_string_span<char const, -1> getName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORINCLOUDSTEST
#endif

};