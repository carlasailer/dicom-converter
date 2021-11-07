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
    std::unique_ptr<DicomImage> getDicomImage(const char* file);
    Uint8* getPixelData(DicomImage *image);
    OFString extractDcmTag(const char* file, DcmTagKey DICOMTag);
    const Uint8* extractPixeldataViaTag(const char* file, DcmTagKey DICOMTag);
    template<typename TargetType> TargetType extractDcmTag(const char* file, DcmTagKey DICOMTag);

}; // namespace DICOMReader

#endif