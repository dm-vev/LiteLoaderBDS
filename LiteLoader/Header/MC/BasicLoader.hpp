// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BASICLOADER
#include "Extra/BasicLoaderAPI.hpp"
#undef EXTRA_INCLUDE_PART_BASICLOADER
class BasicLoader {
#include "Extra/BasicLoaderAPI.hpp"

public:
    MCAPI bool beginArray(unsigned __int64&);
    MCAPI bool beginMember(char const*, bool);
    MCAPI bool beginMember(unsigned __int64, std::string&);
    MCAPI bool beginObject(unsigned __int64&);
    MCAPI bool beginObject();
    MCAPI bool endArray();
    MCAPI bool endMember();
    MCAPI bool endObject();
    MCAPI void error(std::string const&);
    MCAPI std::vector<std::string> const& getErrors() const;
    MCAPI bool serializeBool(bool&);
    MCAPI bool serializeFloat(float&);
    MCAPI bool serializeS32(int&);
    MCAPI bool serializeString(std::string&);


private:
    MCAPI bool beginArrayItem(unsigned __int64);
    MCAPI bool serialize(class entt::meta_any, struct SerializerTraits const&, class entt::meta_any);
    MCAPI bool serialize(class entt::meta_any, class entt::meta_any);
    MCAPI bool serializeAssociativeContainer(class entt::meta_associative_container, struct SerializerTraits const&, class entt::meta_any const&);
    MCAPI bool serializeBasicType(class entt::meta_any&);
    MCAPI bool serializeClass(class entt::meta_any&, struct SerializerTraits const&, class entt::meta_any const&);
    MCAPI bool serializeEnum(class entt::meta_any&, struct SerializerTraits const&);
    MCAPI bool serializeObject(class entt::meta_any, class entt::meta_any);
    MCAPI bool serializePrimary(class entt::meta_any, class entt::meta_any);
    MCAPI bool serializeSequenceContainer(class entt::meta_sequence_container, struct SerializerTraits const&, class entt::meta_any const&);
};