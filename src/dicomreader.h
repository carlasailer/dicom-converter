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

class DicomReader 
{
public:
    DicomReader(); 
    DicomImage* loadImage(const char* file);
    DcmDataset* loadFile(const char* file);
    void extractPatientName();

private:
   

};

#endif