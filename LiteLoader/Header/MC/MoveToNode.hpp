// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_MOVETONODE
#include "Extra/MoveToNodeAPI.hpp"
#undef EXTRA_INCLUDE_PART_MOVETONODE
class MoveToNode {
#include "Extra/MoveToNodeAPI.hpp"
public:
    virtual ~MoveToNode();
    virtual int /*enum BehaviorStatus*/ tick(class Actor&);
    virtual void initializeFromDefinition(class Actor&);

public:
    MCAPI MoveToNode();
};