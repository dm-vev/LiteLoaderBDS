// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_AABB
#include "Extra/AABBAPI.hpp"
#undef EXTRA_INCLUDE_PART_AABB
class AABB {
#include "Extra/AABBAPI.hpp"

public:
    MCAPI class Vec3 axisInside(class AABB const&, class Vec3) const;
    MCAPI bool operator==(class AABB const&);
    MCAPI AABB(float, float, float, float, float, float);
    MCAPI AABB(class Vec3 const&, float);
    MCAPI AABB(class Vec3 const&, class Vec3 const&);
    MCAPI class HitResult clip(class Vec3 const&, class Vec3 const&) const;
    MCAPI class Vec3 clipCollide(class AABB const&, class Vec3 const&, bool, float*) const;
    MCAPI class AABB cloneAndExpandAlongDirection(class Vec3 const&) const;
    MCAPI class AABB cloneAndFloor(float, float) const;
    MCAPI class AABB cloneAndFloorMinAndCeilingMax() const;
    MCAPI class AABB cloneAndGrow(class Vec3 const&) const;
    MCAPI class AABB cloneAndShrink(class Vec3 const&) const;
    MCAPI class AABB cloneAndTransformByMatrix(class Matrix const&) const;
    MCAPI bool contains(class Vec3 const&) const;
    MCAPI float distanceTo(class AABB const&) const;
    MCAPI float distanceTo(class Vec3 const&) const;
    MCAPI class Vec3 getBounds() const;
    MCAPI class Vec3 getCenter() const;
    MCAPI float getSize() const;
    MCAPI float getVolume() const;
    MCAPI bool hasZeroVolume() const;
    MCAPI bool intersects(class AABB const&) const;
    MCAPI bool intersects(class Vec3 const&, class Vec3 const&) const;
    MCAPI bool intersectsInner(class AABB const&) const;
    MCAPI bool isValid() const;
    MCAPI class AABB& set(float, float, float, float, float, float);
    MCAPI class AABB& set(class AABB const&);
    MCAPI class AABB& set(class Vec3 const&, class Vec3 const&);
    MCAPI class AABB& shrink(class Vec3 const&);
    MCAPI class AABB& translateCenterTo(class Vec3 const&);

    MCAPI static class AABB const BLOCK_SHAPE;
    MCAPI static class AABB const BOX_AT_ORIGIN_WITH_NO_VOLUME;
};