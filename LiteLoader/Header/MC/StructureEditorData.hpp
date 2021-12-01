// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_STRUCTUREEDITORDATA
#include "Extra/StructureEditorDataAPI.hpp"
#undef EXTRA_INCLUDE_PART_STRUCTUREEDITORDATA
class StructureEditorData {
#include "Extra/StructureEditorDataAPI.hpp"

public:
    MCAPI StructureEditorData();
    MCAPI StructureEditorData(class StructureEditorData const&);
    MCAPI StructureEditorData(class StructureEditorData&&);
    MCAPI std::string getAnimationModeAsString() const;
    MCAPI float getAnimationSeconds() const;
    MCAPI bool getIgnoreBlocks() const;
    MCAPI bool getIgnoreEntities() const;
    MCAPI bool getIncludePlayers() const;
    MCAPI unsigned int getIntegritySeed() const;
    MCAPI float getIntegrityValue() const;
    MCAPI enum Mirror getMirror() const;
    MCAPI class Vec3 const& getPivot() const;
    MCAPI enum StructureRedstoneSaveMode getRedstoneSaveMode() const;
    MCAPI enum Rotation getRotation() const;
    MCAPI bool getShowBoundingBox() const;
    MCAPI enum StructureBlockType getStructureBlockType() const;
    MCAPI std::string const& getStructureName() const;
    MCAPI class BlockPos const& getStructureOffset() const;
    MCAPI class StructureSettings const& getStructureSettings() const;
    MCAPI class BlockPos const& getStructureSize() const;
    MCAPI void load(class CompoundTag const&, class DataLoadHelper&);
    MCAPI void save(class CompoundTag&) const;
    MCAPI void setAnimationMode(enum AnimationMode);
    MCAPI void setAnimationSeconds(float);
    MCAPI void setAnimationTicks(unsigned int);
    MCAPI void setIgnoreBlocks(bool);
    MCAPI void setIgnoreEntities(bool);
    MCAPI void setIntegritySeed(unsigned int);
    MCAPI void setIntegrityValue(float);
    MCAPI void setLastTouchedByPlayerID(struct ActorUniqueID);
    MCAPI void setMirror(enum Mirror);
    MCAPI void setRotation(enum Rotation);
    MCAPI void setShowBoundingBox(bool);
    MCAPI void setStructureBlockType(enum StructureBlockType);
    MCAPI void setStructureName(class gsl::basic_string_span<char const, -1>);
    MCAPI void setStructureOffset(class BlockPos const&);
    MCAPI void setStructureSize(class BlockPos const&);
    MCAPI ~StructureEditorData();

    MCAPI static std::string const DEFAULT_EXPORT_NAME;
    MCAPI static std::string const DEFAULT_STRUCTURE_NAMESPACE;
    MCAPI static class BlockPos const MAX_STRUCTURE_OFFSET;
    MCAPI static class BlockPos const MAX_STRUCTURE_SIZE;
    MCAPI static class BlockPos const MIN_STRUCTURE_OFFSET;
    MCAPI static class BlockPos const MIN_STRUCTURE_SIZE;
    MCAPI static char const NAMESPACE_DELIMITER;
    MCAPI static class BlockPos getOrientedBounds(class BlockPos const&, enum Rotation);

private:
    MCAPI static enum StructureBlockType const DEFAULT_STRUCTURE_TYPE;
};