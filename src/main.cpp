#include <iostream>
#include <memory>
//#include <filesystem>

#include "dicomobj.h"
#include "dicomreader.h"

int main() {
    //std::cout << "Hello World!" << "\n";
    //DicomReader dicomReader = DicomReader(std::filesystem::current_path() + "/data/mrbrain.zip");
    DicomReader dicomReader = DicomReader("home/workspace/dicom-converter/data/MRBRAIN.DCM");
    
    std::unique_ptr<DicomObj> dicomObj;
    dicomObj = dicomReader.readFile(); 
    
    
    return 0;
}