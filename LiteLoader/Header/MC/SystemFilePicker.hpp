// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SYSTEMFILEPICKER
#include "Extra/SystemFilePickerAPI.hpp"
#undef EXTRA_INCLUDE_PART_SYSTEMFILEPICKER
class SystemFilePicker {
#include "Extra/SystemFilePickerAPI.hpp"
public:
    virtual ~SystemFilePicker();
    virtual void initFilePick(class Core::Path const&, class std::function<void(bool, struct FileInfo)>);
    virtual unsigned __int64 readBytes(struct FileInfo const&, unsigned __int64, unsigned __int64, std::vector<unsigned char>&);
    virtual bool writeBytes(struct FileInfo const&, unsigned __int64, unsigned __int64, std::vector<unsigned char> const&);

public:
    MCAPI SystemFilePicker();


protected:
    MCAPI struct FileInfo _fillFileInfo(class Core::Path const&);
};