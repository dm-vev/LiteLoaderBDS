/**
 * @file  FillContainerFunction.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "LootItemFunction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FillContainerFunction.
 *
 */
class FillContainerFunction : public LootItemFunction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILLCONTAINERFUNCTION
public:
    class FillContainerFunction& operator=(class FillContainerFunction const &) = delete;
    FillContainerFunction(class FillContainerFunction const &) = delete;
    FillContainerFunction() = delete;
#endif

public:
    virtual ~FillContainerFunction();
    virtual void apply(class ItemStack &, class Random &, class LootTableContext &);
    virtual void apply(class ItemInstance &, class Random &, class LootTableContext &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FILLCONTAINERFUNCTION
#endif
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>> &);

};