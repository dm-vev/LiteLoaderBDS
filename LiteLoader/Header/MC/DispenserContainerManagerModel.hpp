/**
 * @file  DispenserContainerManagerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "LevelContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DispenserContainerManagerModel.
 *
 */
class DispenserContainerManagerModel : public LevelContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DISPENSERCONTAINERMANAGERMODEL
public:
    class DispenserContainerManagerModel& operator=(class DispenserContainerManagerModel const &) = delete;
    DispenserContainerManagerModel(class DispenserContainerManagerModel const &) = delete;
    DispenserContainerManagerModel() = delete;
#endif

public:
    virtual ~DispenserContainerManagerModel();
    virtual class ContainerScreenContext _postInit();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DISPENSERCONTAINERMANAGERMODEL
#endif
    MCAPI DispenserContainerManagerModel(enum ContainerID, class Player &, class BlockPos const &);

};