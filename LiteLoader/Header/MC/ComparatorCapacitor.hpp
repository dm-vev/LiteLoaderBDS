/**
 * @file  ComparatorCapacitor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ProducerComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ComparatorCapacitor.
 *
 */
class ComparatorCapacitor : public ProducerComponent {

#define AFTER_EXTRA
// Add Member There
public:
enum Mode;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPARATORCAPACITOR
public:
    class ComparatorCapacitor& operator=(class ComparatorCapacitor const &) = delete;
    ComparatorCapacitor(class ComparatorCapacitor const &) = delete;
#endif

public:
    virtual ~ComparatorCapacitor();
    virtual bool canConsumePowerAnyDirection() const;
    virtual bool canConsumerPower() const;
    virtual bool removeSource(class BlockPos const &, class BaseCircuitComponent const *);
    virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    virtual void cacheValues(class CircuitSystem &, class BlockPos const &);
    virtual void updateDependencies(class CircuitSceneGraph &, class BlockPos const &);
    virtual void __unk_vfn_17();
    virtual void __unk_vfn_20();
    virtual enum CircuitComponentType getCircuitComponentType() const;
    virtual unsigned char getPoweroutDirection() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPARATORCAPACITOR
#endif
    MCAPI ComparatorCapacitor();
    MCAPI void clearAnalogStrength(unsigned char);
    MCAPI int getOldStrength();
    MCAPI bool isSubtractMode();
    MCAPI void setAnalogStrength(int, unsigned char);
    MCAPI void setMode(enum ComparatorCapacitor::Mode);

};