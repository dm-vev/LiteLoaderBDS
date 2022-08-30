/**
 * @file  CircuitSceneGraph.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CircuitSceneGraph.
 *
 */
class CircuitSceneGraph {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CIRCUITSCENEGRAPH
public:
    class CircuitSceneGraph& operator=(class CircuitSceneGraph const &) = delete;
    CircuitSceneGraph(class CircuitSceneGraph const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CIRCUITSCENEGRAPH
#endif
    MCAPI CircuitSceneGraph();
    MCAPI void add(class BlockPos const &, std::unique_ptr<class BaseCircuitComponent>);
    MCAPI class BaseCircuitComponent * getBaseComponent(class BlockPos const &);
    MCAPI class BaseCircuitComponent * getComponent(class BlockPos const &, enum CircuitComponentType);
    MCAPI class BaseCircuitComponent * getFromPendingAdd(class BlockPos const &);
    MCAPI class BaseCircuitComponent * getFromPendingAdd(class BlockPos const &, enum CircuitComponentType);
    MCAPI void invalidatePos(class BlockPos const &);
    MCAPI void preSetupPoweredBlocks(class ChunkPos const &);
    MCAPI void remove(class BlockPos const &, class BaseCircuitComponent *);
    MCAPI void update(class BlockSource *);
    MCAPI ~CircuitSceneGraph();

//private:
    MCAPI void findRelationships(class BlockPos const &, class BaseCircuitComponent *, class BlockSource *);
    MCAPI void processPendingAdds();
    MCAPI void removeComponent(class BlockPos const &);
    MCAPI void removeStaleRelationships();
    MCAPI void scheduleRelationshipUpdate(class BlockPos const &, class BaseCircuitComponent *);

private:

};