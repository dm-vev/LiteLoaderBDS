// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_NPCDIALOGUESCENE
#include "Extra/NpcDialogueSceneAPI.hpp"
#undef EXTRA_INCLUDE_PART_NPCDIALOGUESCENE
class NpcDialogueScene {
#include "Extra/NpcDialogueSceneAPI.hpp"

public:
    MCAPI ~NpcDialogueScene();

    MCAPI static struct NpcDialogueScene parse(class Json::Value const&, std::string const&, int);
};