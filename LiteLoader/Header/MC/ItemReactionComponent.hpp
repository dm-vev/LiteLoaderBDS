/**
 * @file  ItemReactionComponent.hpp
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
 * @brief MC class ItemReactionComponent.
 *
 */
class ItemReactionComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMREACTIONCOMPONENT
public:
    class ItemReactionComponent& operator=(class ItemReactionComponent const &) = delete;
    ItemReactionComponent(class ItemReactionComponent const &) = delete;
    ItemReactionComponent() = delete;
#endif

public:
    virtual ~ItemReactionComponent();
    virtual void __unk_vfn_1();
    virtual void __unk_vfn_2();
    virtual void _onEnd(class LabTableReaction &, class BlockSource &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMREACTIONCOMPONENT
#endif

};