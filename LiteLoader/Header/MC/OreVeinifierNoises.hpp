/**
 * @file  OreVeinifierNoises.hpp
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
 * @brief MC class OreVeinifierNoises.
 *
 */
class OreVeinifierNoises {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OREVEINIFIERNOISES
public:
    class OreVeinifierNoises& operator=(class OreVeinifierNoises const &) = delete;
    OreVeinifierNoises() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OREVEINIFIERNOISES
#endif
    MCAPI OreVeinifierNoises(class OreVeinifierNoises const &);
    MCAPI class XoroshiroPositionalRandomFactory const & getPositionalRandomFactory() const;
    MCAPI float sampleGapNoise(float, float, float) const;
    MCAPI float sampleVeinNoiseA(float, float, float) const;
    MCAPI float sampleVeinNoiseB(float, float, float) const;
    MCAPI float sampleVeininessNoise(float, float, float) const;
    MCAPI ~OreVeinifierNoises();
    MCAPI static class OreVeinifierNoises make(class XoroshiroPositionalRandomFactory const &);

//private:
    MCAPI OreVeinifierNoises(class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class XoroshiroPositionalRandomFactory);

private:

};