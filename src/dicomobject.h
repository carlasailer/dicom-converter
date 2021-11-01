#ifndef DICOMOBJECT_H
#define DICOMOBJECT_H

#include <string>
#include "dcmtk/dcmdata/dctk.h"
#include "dicomreader.h"
#include "renderer.h"

class DicomObject
{
    public:
    DicomObject(std::string file);
    void displayImage();
    void renderImage(Renderer &renderer, std::size_t target_frame_duration);
    
    //void addMetaData();
       
    private:
    const char* _filepath;
    std::unique_ptr<DicomImage> _image; 
    

    // metadata
    OFString _patientName;       //  (0010,0010) --> DCM_PatientName
    long _patientID{0};          //  (0010,0020) --> DCM_PatientID
    char _sex{'x'};              //  (0010,0040) --> DCM_PatientSex
    OFString _modality{""};      //  (0008,0060) --> DCM_Modality
    OFString _studyDate{""};     //  (0008,0020) --> DCM_StudyDate  maybe turn into a date time object later

   




};

#endif