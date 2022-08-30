/**
 * @file  SpreadPlayersCommand.hpp
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
 * @brief MC class SpreadPlayersCommand.
 *
 */
class SpreadPlayersCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPREADPLAYERSCOMMAND
public:
    class SpreadPlayersCommand& operator=(class SpreadPlayersCommand const &) = delete;
    SpreadPlayersCommand(class SpreadPlayersCommand const &) = delete;
    SpreadPlayersCommand() = delete;
#endif

public:
    virtual ~SpreadPlayersCommand();
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPREADPLAYERSCOMMAND
#endif
    MCAPI static std::vector<class Vec2> createInitialPositions(class Random &, int, class Vec2 const &, class Vec2 const &);
    MCAPI static bool isDangerousSpawn(class BlockSource &, class BlockPos const &, short, int);
    MCAPI static void setup(class CommandRegistry &);
    MCAPI static bool spreadPositions(class CommandOutput &, class Random &, class CommandOrigin const &, class Vec2 const &, float, class Vec2 const &, class Vec2 const &, std::vector<class Vec2> &, class std::map<class ChunkPos, std::unique_ptr<class CommandArea>, struct std::less<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, std::unique_ptr<class CommandArea>>>> &, int);

//private:
    MCAPI static bool _checkPositionValid(class CommandOrigin const &, class BlockPos const &, class std::map<class ChunkPos, std::unique_ptr<class CommandArea>, struct std::less<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, std::unique_ptr<class CommandArea>>>> &, int);
    MCAPI static float _setPlayerPositions(class CommandSelectorResults<class Actor> &, std::vector<class Vec2> &, class std::map<class ChunkPos, std::unique_ptr<class CommandArea>, struct std::less<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, std::unique_ptr<class CommandArea>>>> &);
    MCAPI static bool _spreadEntities(class CommandOutput &, class CommandSelectorResults<class Actor> &, class CommandOrigin const &, class Vec2 const &, float, float, int);

private:

};