#include "dicomobject.h"
#include "dicomreader.h"

DicomObject::DicomObject(std::string file) : _filepath(file.c_str()) {
   
    DicomReader dicomReader = DicomReader();
    _dataset = dicomReader.loadFile(_filepath);
    _image = dicomReader.loadImage(_filepath);
    //_patientName = dicomReader.extractPatientName();
}

