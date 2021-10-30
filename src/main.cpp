#include <iostream>
#include <memory>
//#include <filesystem>

#include "dicomobj.h"
#include "dicomreader.h"

int main() {
   
    //DicomReader dicomReader = DicomReader(std::filesystem::current_path() + "/data/mrbrain.zip");
    //DicomReader dicomReader = DicomReader("home/workspace/dicom-converter/data/MRBRAIN.DCM");

    DicomReader dicomReader = DicomReader("home/workspace/dicom-converter/data/CT.dcm");
    //std::unique_ptr<DicomObj> dicomObj;
    
    
    return 0;
}