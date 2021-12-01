// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_DIEEVENTRESPONSE
#include "Extra/DieEventResponseAPI.hpp"
#undef EXTRA_INCLUDE_PART_DIEEVENTRESPONSE
class DieEventResponse {
#include "Extra/DieEventResponseAPI.hpp"
public:
    virtual ~DieEventResponse();
    virtual std::string const& getName();
    virtual void executeAction(class RenderParams&);
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>>&, class Factory<class EventResponse> const&);

public:
    MCAPI static std::string const NameID;
};