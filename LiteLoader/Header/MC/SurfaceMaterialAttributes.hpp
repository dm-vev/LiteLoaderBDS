/**
 * @file  SurfaceMaterialAttributes.hpp
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
 * @brief MC structure SurfaceMaterialAttributes.
 *
 */
struct SurfaceMaterialAttributes {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SURFACEMATERIALATTRIBUTES
public:
    struct SurfaceMaterialAttributes& operator=(struct SurfaceMaterialAttributes const &) = delete;
    SurfaceMaterialAttributes() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SURFACEMATERIALATTRIBUTES
#endif
    MCAPI SurfaceMaterialAttributes(struct SurfaceMaterialAttributes const &);
    MCAPI SurfaceMaterialAttributes(struct SurfaceMaterialAttributes &&);
    MCAPI struct SurfaceMaterialAttributes & operator=(struct SurfaceMaterialAttributes &&);
    MCAPI ~SurfaceMaterialAttributes();

};