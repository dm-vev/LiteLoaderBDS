// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SCRIPTMOVEMENTCOMPONENTFACTORY
#include "Extra/ScriptMovementComponentFactoryAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTMOVEMENTCOMPONENTFACTORY
class ScriptMovementComponentFactory {
#include "Extra/ScriptMovementComponentFactoryAPI.hpp"
public:
    virtual ~ScriptMovementComponentFactory();
    virtual class Scripting::StrongObjectHandle createComponent(class WeakEntityRef, class Scripting::WeakLifetimeScope const&, std::string const&);
    virtual bool hasComponent(class WeakEntityRef);
};