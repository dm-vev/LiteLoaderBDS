/**
 * @file  TickingAreaCommand.hpp
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
 * @brief MC class TickingAreaCommand.
 *
 */
class TickingAreaCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKINGAREACOMMAND
public:
    class TickingAreaCommand& operator=(class TickingAreaCommand const &) = delete;
    TickingAreaCommand(class TickingAreaCommand const &) = delete;
    TickingAreaCommand() = delete;
#endif

public:
    virtual ~TickingAreaCommand();
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TICKINGAREACOMMAND
#endif
    MCAPI static std::string formatTickingAreaList(std::vector<struct TickingAreaDescription> const &);
    MCAPI static void setup(class CommandRegistry &);

//private:
    MCAPI void _add(class CommandOrigin const &, class CommandOutput &, class Level &, class Dimension &) const;
    MCAPI void _list(class CommandOrigin const &, class CommandOutput &, class Level &, class Dimension &) const;
    MCAPI void _preload(class CommandOrigin const &, class CommandOutput &, class Level &, class Dimension &) const;
    MCAPI void _remove(class CommandOrigin const &, class CommandOutput &, class Level &, class Dimension &) const;
    MCAPI void _removeAll(class CommandOrigin const &, class CommandOutput &, class Level &, class Dimension &) const;

private:

};