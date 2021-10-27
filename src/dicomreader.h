#ifndef DICOMREADER_H
#define DICOMREADER_H

#include <string>
#include <memory>
#include "dicomobj.h"

class DicomReader 
{
    public:
    DicomReader(std::string path) : _filepath(path) {};
    std::unique_ptr<DicomObj> readFile();

    private:
    std::string _filepath;


};

#endif