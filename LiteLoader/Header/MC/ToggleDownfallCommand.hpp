/**
 * @file  ToggleDownfallCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ToggleDownfallCommand.
 *
 */
class ToggleDownfallCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TOGGLEDOWNFALLCOMMAND
public:
    class ToggleDownfallCommand& operator=(class ToggleDownfallCommand const &) = delete;
    ToggleDownfallCommand(class ToggleDownfallCommand const &) = delete;
    ToggleDownfallCommand() = delete;
#endif

public:
    virtual ~ToggleDownfallCommand();
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TOGGLEDOWNFALLCOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &);

};