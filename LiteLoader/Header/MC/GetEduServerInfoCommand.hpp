/**
 * @file  GetEduServerInfoCommand.hpp
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
 * @brief MC class GetEduServerInfoCommand.
 *
 */
class GetEduServerInfoCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETEDUSERVERINFOCOMMAND
public:
    class GetEduServerInfoCommand& operator=(class GetEduServerInfoCommand const &) = delete;
    GetEduServerInfoCommand(class GetEduServerInfoCommand const &) = delete;
    GetEduServerInfoCommand() = delete;
#endif

public:
    virtual ~GetEduServerInfoCommand();
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GETEDUSERVERINFOCOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &);

};