// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptObject.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptBlockType : public ScriptObject {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBLOCKTYPE
public:
    class ScriptBlockType& operator=(class ScriptBlockType const &) = delete;
    ScriptBlockType(class ScriptBlockType const &) = delete;
    ScriptBlockType() = delete;
#endif


public:
    /*0*/ virtual ~ScriptBlockType();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTBLOCKTYPE
#endif
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptBlockPermutation>> createDefaultBlockPermutation() const;
    MCAPI class BlockLegacy const & getBlock() const;
    MCAPI std::string getId() const;
    MCAPI class ScriptBlockType & operator=(class ScriptBlockType &&);
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptBlockType> bind(struct Scripting::Version);
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptBlockType> getOrCreateHandle(class Scripting::WeakLifetimeScope const &, class BlockLegacy const &);



};