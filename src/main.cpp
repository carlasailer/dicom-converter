#include <iostream>
#include <memory>
#include <string>

#include "dicomobject.h"

int main() {
    std::string file = "/home/workspace/dicom-converter/data/CT.dcm";
    DicomObject dicomObj = DicomObject(file);
    
    
    
    return 0;
}