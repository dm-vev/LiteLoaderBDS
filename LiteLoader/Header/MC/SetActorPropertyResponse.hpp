// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SETACTORPROPERTYRESPONSE
#include "Extra/SetActorPropertyResponseAPI.hpp"
#undef EXTRA_INCLUDE_PART_SETACTORPROPERTYRESPONSE
class SetActorPropertyResponse {
#include "Extra/SetActorPropertyResponseAPI.hpp"
public:
    virtual ~SetActorPropertyResponse();
    virtual std::string const& getName();
    virtual void executeAction(class RenderParams&);
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>>&, class Factory<class EventResponse> const&);

public:
    MCAPI static std::string const NameID;
};