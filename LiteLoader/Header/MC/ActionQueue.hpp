/**
 * @file  ActionQueue.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActionQueue.
 *
 */
class ActionQueue {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTIONQUEUE
public:
    class ActionQueue& operator=(class ActionQueue const &) = delete;
    ActionQueue(class ActionQueue const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTIONQUEUE
#endif
    MCAPI ActionQueue();
    MCAPI void pushBackActionEvent(class ActionEvent);

};