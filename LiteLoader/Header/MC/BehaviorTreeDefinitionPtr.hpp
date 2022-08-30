/**
 * @file  BehaviorTreeDefinitionPtr.hpp
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
 * @brief MC class BehaviorTreeDefinitionPtr.
 *
 */
class BehaviorTreeDefinitionPtr {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEHAVIORTREEDEFINITIONPTR
#endif
    MCAPI BehaviorTreeDefinitionPtr(class BehaviorTreeDefinitionPtr const &);
    MCAPI BehaviorTreeDefinitionPtr(class BehaviorTreeGroup &, class BehaviorTreeDefinition &);
    MCAPI BehaviorTreeDefinitionPtr(class BehaviorTreeDefinitionPtr &&);
    MCAPI BehaviorTreeDefinitionPtr();
    MCAPI class BehaviorTreeDefinitionPtr & operator=(class BehaviorTreeDefinitionPtr const &);
    MCAPI class BehaviorTreeDefinitionPtr & operator=(class BehaviorTreeDefinitionPtr &&);
    MCAPI ~BehaviorTreeDefinitionPtr();
MCAPI static class BehaviorTreeDefinitionPtr const NONE;

};