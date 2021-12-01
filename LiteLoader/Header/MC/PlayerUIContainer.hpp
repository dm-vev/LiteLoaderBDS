// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "SimpleContainer.hpp"
#define EXTRA_INCLUDE_PART_PLAYERUICONTAINER
#include "Extra/PlayerUIContainerAPI.hpp"
#undef EXTRA_INCLUDE_PART_PLAYERUICONTAINER
class PlayerUIContainer : public SimpleContainer {
#include "Extra/PlayerUIContainerAPI.hpp"
public:
    virtual ~PlayerUIContainer();
    virtual void init();
    virtual void unk_vfn_14();
    virtual int getMaxStackSize();
    virtual void startOpen(class Player&);
    virtual void stopOpen(class Player&);
    virtual void unk_vfn_22();
    virtual void unk_vfn_23();
    virtual void unk_vfn_31();

public:
    MCAPI PlayerUIContainer(std::string const&, bool, int);
    MCAPI void load(class ListTag const&, class SemVersion const&);
    MCAPI std::unique_ptr<class ListTag> save();
};