// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "PathNavigation.hpp"
#define EXTRA_INCLUDE_PART_FLYINGPATHNAVIGATION
#include "Extra/FlyingPathNavigationAPI.hpp"
#undef EXTRA_INCLUDE_PART_FLYINGPATHNAVIGATION
class FlyingPathNavigation : public PathNavigation {
#include "Extra/FlyingPathNavigationAPI.hpp"
public:
    virtual ~FlyingPathNavigation();
    virtual void initializeInternal(class Mob&, struct NavigationDescription*);
    virtual void tick(class NavigationComponent&, class Mob&);
    virtual class Vec3 getTempMobPos(class Mob const&);
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent&, class Mob&, class Actor&);
    virtual std::unique_ptr<class Path> createPath(class NavigationComponent&, class Mob&, class Vec3 const&);
    virtual void stop(class NavigationComponent&, class Mob&);
    virtual bool travel(class NavigationComponent&, class Mob&, float&, float&, float&);
    virtual bool canUpdatePath(class Mob const&);
    virtual void updatePath(class NavigationComponent&, class Mob&);
};