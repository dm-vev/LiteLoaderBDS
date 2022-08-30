/**
 * @file  ReloadCommand.hpp
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
 * @brief MC class ReloadCommand.
 *
 */
class ReloadCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RELOADCOMMAND
public:
    class ReloadCommand& operator=(class ReloadCommand const &) = delete;
    ReloadCommand(class ReloadCommand const &) = delete;
    ReloadCommand() = delete;
#endif

public:
    virtual ~ReloadCommand();
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RELOADCOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &);

};