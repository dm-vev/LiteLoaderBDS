// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_STRUCTUREPOOLBLOCKTAGPREDICATEBLOCKTAGSTRINGMATCHES
#include "Extra/StructurePoolBlockTagPredicateBlockTagStringMatchesAPI.hpp"
#undef EXTRA_INCLUDE_PART_STRUCTUREPOOLBLOCKTAGPREDICATEBLOCKTAGSTRINGMATCHES
class StructurePoolBlockTagPredicateBlockTagStringMatches {
#include "Extra/StructurePoolBlockTagPredicateBlockTagStringMatchesAPI.hpp"
public:
    virtual ~StructurePoolBlockTagPredicateBlockTagStringMatches();
    virtual bool test(class Block const&, class CompoundTag const&);

public:
    MCAPI StructurePoolBlockTagPredicateBlockTagStringMatches(class Block const&, std::string, std::string);
};