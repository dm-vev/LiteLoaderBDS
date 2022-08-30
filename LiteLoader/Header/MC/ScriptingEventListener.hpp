/**
 * @file  ScriptingEventListener.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptingEventListener.
 *
 */
class ScriptingEventListener {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTINGEVENTLISTENER
public:
    class ScriptingEventListener& operator=(class ScriptingEventListener const &) = delete;
    ScriptingEventListener(class ScriptingEventListener const &) = delete;
    ScriptingEventListener() = delete;
#endif

public:
    virtual ~ScriptingEventListener();
    virtual enum EventResult onEvent(struct ScriptingNotificationEvent const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTINGEVENTLISTENER
#endif

};