// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_MOVENODE
#include "Extra/MoveNodeAPI.hpp"
#undef EXTRA_INCLUDE_PART_MOVENODE
class MoveNode {
#include "Extra/MoveNodeAPI.hpp"
public:
    virtual ~MoveNode();
    virtual int /*enum BehaviorStatus*/ tick(class Actor&);
    virtual void initializeFromDefinition(class Actor&);

public:
    MCAPI MoveNode();


private:
    MCAPI unsigned char convertDirectionStringToKeyPress(std::string);
};