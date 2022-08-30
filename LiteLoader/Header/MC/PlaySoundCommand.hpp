/**
 * @file  PlaySoundCommand.hpp
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
 * @brief MC class PlaySoundCommand.
 *
 */
class PlaySoundCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYSOUNDCOMMAND
public:
    class PlaySoundCommand& operator=(class PlaySoundCommand const &) = delete;
    PlaySoundCommand(class PlaySoundCommand const &) = delete;
    PlaySoundCommand() = delete;
#endif

public:
    virtual ~PlaySoundCommand();
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYSOUNDCOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &);

};