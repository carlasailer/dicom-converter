#ifndef DICOMOBJECT_H
#define DICOMOBJECT_H

#include <string>
#include "dcmtk/dcmdata/dctk.h"
#include "dicomreader.h"
#include "renderer.h"
#include "controller.h"

class DicomObject
{
    public:
    DicomObject(std::string file);
    void displayImage();
    void renderImage(Controller &controller, Renderer &renderer, std::size_t target_frame_duration);
    void saveAs(std::string file_ext, std::string folder);
    std::string getFilenameWithTimestamp(std::string file_ext, std::string location);
    std::vector<std::string> formatMetaData();
    //void addMetaData();
       
    private:
    const char* _filepath;
    const void* _pixeldata; 
    const Uint8* _pixelData_Uint8;
    std::unique_ptr<DicomImage> _image;
    

    // metadata
    OFString _patientName;       //  (0010,0010) --> DCM_PatientName
    long _patientID{0};          //  (0010,0020) --> DCM_PatientID
    OFString _patientSex;       //  (0010,0040) --> DCM_PatientSex
    OFString _patientBirthDate;  // (0010,0030) --> DCM_PatientBirthDate
    OFString _modality{""};      //  (0008,0060) --> DCM_Modality
    OFString _studyDate{""};     //  (0008,0020) --> DCM_StudyDate  maybe turn into a date time object later
    int _imagewidth;
    int _imageheight;
   




};

#endif