/**
 * @file  BackgroundTaskBase.hpp
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
 * @brief MC class BackgroundTaskBase.
 *
 */
class BackgroundTaskBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BACKGROUNDTASKBASE
public:
    class BackgroundTaskBase& operator=(class BackgroundTaskBase const &) = delete;
    BackgroundTaskBase(class BackgroundTaskBase const &) = delete;
    BackgroundTaskBase() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BACKGROUNDTASKBASE
#endif
    MCAPI BackgroundTaskBase(class gsl::not_null<class IBackgroundTaskOwner *>, struct TaskStartInfoBase const &, bool);
    MCAPI void _makeOrphan();
    MCAPI bool canBeRunBy(class std::thread::id) const;
    MCAPI class IBackgroundTaskOwner * getGroup();
    MCAPI enum TaskGroupState getGroupState() const;
    MCAPI class std::shared_ptr<class BackgroundTaskBase> getNext();
    MCAPI class BackgroundTaskBase * getPrev();
    MCAPI int getPriority() const;
    MCAPI class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>> getStartAfterTime() const;
    MCAPI bool hasAffinity() const;
    MCAPI bool isAsync() const;
    MCAPI bool isOrphaned() const;
    MCAPI bool isReadyToStart(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>) const;
    MCAPI void setNext(class std::shared_ptr<class BackgroundTaskBase>);
    MCAPI void setPrev(class BackgroundTaskBase *);
    MCAPI void setStartAfterTime(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);
    MCAPI void setSyncPriority();
    MCAPI static class BackgroundTaskBase * getCurrent();

//protected:
    MCAPI void backDownPriority();
    MCAPI void taskComplete();

//private:

protected:

private:
MCAPI static class BackgroundTaskBase * gCurrentTask;

};