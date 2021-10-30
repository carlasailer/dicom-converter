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
#include "dicomobj.h"

class DicomReader 
{
public:
    DicomReader(std::string path); 
    void getImage();
    void loadFile();
    void extractPatientName();

private:
    OFString _filepath;
    DicomImage* _image; 

};

#endif