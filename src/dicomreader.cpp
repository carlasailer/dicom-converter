#include <dirent.h>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <string>
#include <memory>

//#include "dcmdata/dctk.h"
#include "dcmtk/dcmdata/dctk.h"
#include "dcmtk/dcmimgle/dcmimage.h"
#include "dicomreader.h"
#include "dicomobj.h"

std::unique_ptr<DicomObj> DicomReader::readFile() 
{
    std::cout << _filepath << std::endl;

   DcmFileFormat fileformat;
   OFCondition status = fileformat.loadFile(_filepath.c_str());

   DcmDataset* dataset = fileformat.getDataset();
   
   OFString patient_name;
   


    return nullptr;
   
}