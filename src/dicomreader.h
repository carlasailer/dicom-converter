#ifndef DICOMREADER_H
#define DICOMREADER_H

#include <string>
#include <memory>

#include "dcmtk/dcmdata/dctk.h"
#include "dcmtk/dcmimgle/dcmimage.h"
#include "dcmtk/dcmimgle/dipixel.h"
#include "dcmtk/dcmimgle/diimage.h"
#include "dcmtk/dcmimgle/dimo1img.h"
#include "dcmtk/dcmimgle/dimo2img.h"

namespace DicomReader 
{
    Uint8* getPixelData(const char* file);
    OFString extractDcmTag(const char* file, DcmTagKey DICOMTag);
    template<typename TargetType> TargetType extractDcmTag(const char* file, DcmTagKey DICOMTag);

}; // namespace DICOMReader

#endif