// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ProducerComponent.hpp"
#define EXTRA_INCLUDE_PART_REDSTONETORCHCAPACITOR
#include "Extra/RedstoneTorchCapacitorAPI.hpp"
#undef EXTRA_INCLUDE_PART_REDSTONETORCHCAPACITOR
class RedstoneTorchCapacitor : public ProducerComponent {
#include "Extra/RedstoneTorchCapacitorAPI.hpp"
public:
    virtual ~RedstoneTorchCapacitor();
    virtual int getStrength();
    virtual void unk_vfn_2();
    virtual void unk_vfn_4();
    virtual void unk_vfn_7();
    virtual bool removeSource(class BlockPos const&, class BaseCircuitComponent const*);
    virtual bool addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const&, int&, bool&);
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);
    virtual void checkLock(class CircuitSystem&, class BlockPos const&);
    virtual bool evaluate(class CircuitSystem&, class BlockPos const&);
    virtual void cacheValues(class CircuitSystem&, class BlockPos const&);
    virtual void updateDependencies(class CircuitSceneGraph&, class BlockPos const&);
    virtual void unk_vfn_17();
    virtual void unk_vfn_18();
    virtual void unk_vfn_20();
    virtual void unk_vfn_21();
    virtual int /*enum CircuitComponentType*/ getCircuitComponentType();
    virtual void unk_vfn_24();

public:
    MCAPI RedstoneTorchCapacitor();
    MCAPI void resetBurnOutCount();
    MCAPI void setOn(bool);


private:
    MCAPI int FindStrongestStrength(class BlockPos const&, class CircuitSystem&, bool&);
};