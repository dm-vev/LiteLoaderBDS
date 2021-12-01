// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "IRequestAction.hpp"
#define EXTRA_INCLUDE_PART_TESTACTION
#include "Extra/TestActionAPI.hpp"
#undef EXTRA_INCLUDE_PART_TESTACTION
class TestAction : public IRequestAction {
#include "Extra/TestActionAPI.hpp"
public:
    virtual ~TestAction();
    virtual void execute(class ServerLevel&, class Dimension&);
    virtual bool operator==(class IRequestAction&);
};