// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_IDENTITYDICTIONARY
#include "Extra/IdentityDictionaryAPI.hpp"
#undef EXTRA_INCLUDE_PART_IDENTITYDICTIONARY
class IdentityDictionary {
#include "Extra/IdentityDictionaryAPI.hpp"

public:
    MCAPI IdentityDictionary();
    MCAPI bool clearIdentity(struct ScoreboardId const&);
    MCAPI struct ScoreboardId const& convertFakeToReal(struct ScoreboardId const&, struct PlayerScoreboardId const&);
    MCAPI ~IdentityDictionary();
};