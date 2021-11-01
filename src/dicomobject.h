#ifndef DICOMOBJECT_H
#define DICOMOBJECT_H

#include <string>
#include "dicomreader.h"

class DicomObject
{
    public:
    DicomObject(std::string file);
    
    
    private:
    const char* _filepath;
    DcmDataset* _dataset;
    DicomImage* _image; 

    // metadata
    std::string _patientName{""};   // DICOM Tag (0010,0010)
    long _patientID{0};             // DICOM Tag (0010,0020)
    char _sex{'x'};                 // DICOM Tag (0010,0040)
    std::string _modality{""};      // DICOM Tag (0008,0060)
    std::string _studyDate{""};     // DICOM Tag (0008,0020) maybe turn into a date time object later






};

#endif