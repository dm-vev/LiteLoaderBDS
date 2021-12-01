// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_MINECRAFTGAMETESTHELPERPROVIDER
#include "Extra/MinecraftGameTestHelperProviderAPI.hpp"
#undef EXTRA_INCLUDE_PART_MINECRAFTGAMETESTHELPERPROVIDER
class MinecraftGameTestHelperProvider {
#include "Extra/MinecraftGameTestHelperProviderAPI.hpp"
public:
    virtual ~MinecraftGameTestHelperProvider();
    virtual std::unique_ptr<class gametest::BaseGameTestHelper> createGameTestHelper(class gametest::BaseGameTestInstance&);
    virtual std::unique_ptr<class gametest::IGameTestHelperProvider> clone();
};