// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_INVERTERNODE
#include "Extra/InverterNodeAPI.hpp"
#undef EXTRA_INCLUDE_PART_INVERTERNODE
class InverterNode {
#include "Extra/InverterNodeAPI.hpp"
public:
    virtual ~InverterNode();
    virtual int /*enum BehaviorStatus*/ tick(class Actor&);
    virtual void unk_vfn_2();

public:
    MCAPI InverterNode();
};