// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_DEDICATEDSERVER
#include "Extra/DedicatedServerAPI.hpp"
#undef EXTRA_INCLUDE_PART_DEDICATEDSERVER
class DedicatedServer {
#include "Extra/DedicatedServerAPI.hpp"
public:
    virtual ~DedicatedServer();
    virtual class gsl::not_null<class Bedrock::NonOwnerPointer<class Minecraft>> getPrimaryMinecraft();
    virtual void unk_vfn_2();
    virtual bool isEduMode();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
    virtual();
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual void unk_vfn_11();
    virtual bool stop();
    virtual void unk_vfn_13();
    virtual void unk_vfn_14();

public:
    MCAPI DedicatedServer();
    MCAPI enum DedicatedServer::StartResult start(std::string const&);


private:
    MCAPI void initalizeAppConfigs();
    MCAPI void initializeLogging();
};