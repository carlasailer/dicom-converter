#include <dirent.h>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <string>
#include <memory>

//#include "dcmtk/dcmimgle/dcmimage.h"
#include "dicomreader.h"
#include "dicomobj.h"

std::unique_ptr<DicomObj> DicomReader::readFile() 
{
    std::cout << _filepath << std::endl;
    std::ifstream stream(_filepath);
    if (stream.is_open()) 
    {
        std::cout << _filepath << std::endl;
    }

    return nullptr;
   
}