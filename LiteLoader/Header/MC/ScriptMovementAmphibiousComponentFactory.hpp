// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SCRIPTMOVEMENTAMPHIBIOUSCOMPONENTFACTORY
#include "Extra/ScriptMovementAmphibiousComponentFactoryAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTMOVEMENTAMPHIBIOUSCOMPONENTFACTORY
class ScriptMovementAmphibiousComponentFactory {
#include "Extra/ScriptMovementAmphibiousComponentFactoryAPI.hpp"
public:
    virtual ~ScriptMovementAmphibiousComponentFactory();
    virtual class Scripting::StrongObjectHandle createComponent(class WeakEntityRef, class Scripting::WeakLifetimeScope const&, std::string const&);
    virtual bool hasComponent(class WeakEntityRef);
};