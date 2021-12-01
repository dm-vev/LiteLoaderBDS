// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_VANILLABIOMES
#include "Extra/VanillaBiomesAPI.hpp"
#undef EXTRA_INCLUDE_PART_VANILLABIOMES
class VanillaBiomes {
#include "Extra/VanillaBiomesAPI.hpp"

public:
    MCAPI static class mce::Color const SWAMP_WATER_COLOR;
    MCAPI static class mce::Color const WATER_FOG_COLOR_SWAMP;
    MCAPI static void initBiomeComponents(class BiomeComponentFactory&);
    MCAPI static void initBiomeDimensionComponent(class BiomeRegistry&);
    MCAPI static void initBiomes(class BiomeRegistry&, struct SpawnSettings const&, class BaseGameVersion const&, class Experiments const&);
    MCAPI static void initClientOnlyComponents(class BiomeRegistry&);
    MCAPI static void initDefaultWorldGenComponents(class IWorldRegistriesProvider&);
    MCAPI static void initSurfaceBuilders(class SurfaceBuilderRegistry&);
    MCAPI static void initVanillaBiomeTypeComponent(class BiomeRegistry&);
    MCAPI static class Biome* mBambooJungle;
    MCAPI static class Biome* mBambooJungleHills;
    MCAPI static class Biome* mBasaltDeltas;
    MCAPI static class Biome* mBeaches;
    MCAPI static class Biome* mBirchForest;
    MCAPI static class Biome* mBirchForestHills;
    MCAPI static class Biome* mBirchForestMutated;
    MCAPI static class Biome* mColdBeach;
    MCAPI static class Biome* mCrimsonForest;
    MCAPI static class Biome* mDesert;
    MCAPI static class Biome* mDesertHills;
    MCAPI static class Biome* mDripstoneCaves;
    MCAPI static class Biome* mExtremeHills;
    MCAPI static class Biome* mExtremeHillsMutated;
    MCAPI static class Biome* mExtremeHillsWithTrees;
    MCAPI static class Biome* mFlowerForest;
    MCAPI static class Biome* mForest;
    MCAPI static class Biome* mForestHills;
    MCAPI static class Biome* mFrozenRiver;
    MCAPI static class Biome* mIceFlats;
    MCAPI static class Biome* mIceFlatsMutated;
    MCAPI static class Biome* mIceMountains;
    MCAPI static class Biome* mJungle;
    MCAPI static class Biome* mJungleEdge;
    MCAPI static class Biome* mJungleHills;
    MCAPI static class Biome* mLoftyPeaks;
    MCAPI static class Biome* mLushCaves;
    MCAPI static class Biome* mMesa;
    MCAPI static class Biome* mMesaBryce;
    MCAPI static class Biome* mMesaClearRock;
    MCAPI static class Biome* mMesaRock;
    MCAPI static class Biome* mMountainGrove;
    MCAPI static class Biome* mMountainMeadow;
    MCAPI static class Biome* mMushroomIsland;
    MCAPI static class Biome* mMushroomIslandShore;
    MCAPI static class Biome* mNether;
    MCAPI static class Biome* mOcean;
    MCAPI static class Biome* mOceanCold;
    MCAPI static class Biome* mOceanColdDeep;
    MCAPI static class Biome* mOceanDeep;
    MCAPI static class Biome* mOceanFrozen;
    MCAPI static class Biome* mOceanFrozenDeep;
    MCAPI static class Biome* mOceanLukewarm;
    MCAPI static class Biome* mOceanLukewarmDeep;
    MCAPI static class Biome* mOceanWarm;
    MCAPI static class Biome* mOceanWarmDeep;
    MCAPI static class Biome* mPlains;
    MCAPI static class Biome* mPlainsMutated;
    MCAPI static class std::set<int, struct std::less<int>, class std::allocator<int>> mPlayerValidSpawns;
    MCAPI static class Biome* mRedwoodTaiga;
    MCAPI static class Biome* mRedwoodTaigaHills;
    MCAPI static class Biome* mRedwoodTaigaMutated;
    MCAPI static class Biome* mRiver;
    MCAPI static class Biome* mRoofedForest;
    MCAPI static class Biome* mRoofedForestMutated;
    MCAPI static class Biome* mSavanna;
    MCAPI static class Biome* mSavannaMutated;
    MCAPI static class Biome* mSavannaRock;
    MCAPI static class Biome* mSavannaRockMutated;
    MCAPI static class Biome* mSky;
    MCAPI static class Biome* mSmallerExtremeHills;
    MCAPI static class Biome* mSnowCappedPeaks;
    MCAPI static class Biome* mSnowySlopes;
    MCAPI static class Biome* mSoulsandValley;
    MCAPI static class Biome* mStoneBeach;
    MCAPI static class Biome* mStonyPeaks;
    MCAPI static class Biome* mSwampland;
    MCAPI static class Biome* mSwamplandMutated;
    MCAPI static class Biome* mTaiga;
    MCAPI static class Biome* mTaigaCold;
    MCAPI static class Biome* mTaigaColdHills;
    MCAPI static class Biome* mTaigaColdMutated;
    MCAPI static class Biome* mTaigaHills;
    MCAPI static class Biome* mWarpedForest;
    MCAPI static void shutdownBiomes();

private:
    MCAPI static void addBiomeDimensionAttributeComponentHelper(class BiomeRegistry&, std::string const&, class AutomaticID<class Dimension, int>);
};