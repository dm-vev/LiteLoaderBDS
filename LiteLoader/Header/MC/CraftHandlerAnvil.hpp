// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "CraftHandlerBase.hpp"
#define EXTRA_INCLUDE_PART_CRAFTHANDLERANVIL
#include "Extra/CraftHandlerAnvilAPI.hpp"
#undef EXTRA_INCLUDE_PART_CRAFTHANDLERANVIL
class CraftHandlerAnvil : public CraftHandlerBase {
#include "Extra/CraftHandlerAnvilAPI.hpp"
public:
    virtual ~CraftHandlerAnvil();
    virtual void unk_vfn_2();
    virtual void endRequestBatch();
    virtual int /*enum ItemStackNetResult*/ _handleCraftAction(class ItemStackRequestActionCraftBase const&);
    virtual void _postCraftRequest(bool);

public:
    MCAPI CraftHandlerAnvil(class Player&, class ItemStackRequestActionCraftHandler&);
};