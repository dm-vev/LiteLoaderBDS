// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_REGISTRYKEY
#include "Extra/RegistryKeyAPI.hpp"
#undef EXTRA_INCLUDE_PART_REGISTRYKEY
class RegistryKey {
#include "Extra/RegistryKeyAPI.hpp"

public:
    MCAPI operator bool();
    MCAPI bool readValue(char const*, unsigned long&) const;
    MCAPI bool readValue(char const*, std::string&) const;
    MCAPI ~RegistryKey();

    MCAPI static class RegistryKey open(struct HKEY__*, char const*, unsigned long);
};