#include <string>
#include <iostream>
#include <sstream>
#include <chrono>
#include <time.h>

#include "dicomobject.h"
#include "dicomreader.h"
   
    
DicomObject::DicomObject(std::string file) 
{
    _image = DicomReader::getDicomImage(file.c_str());
    _imagewidth = _image->getWidth();
    _imageheight = _image->getHeight();
    _pixeldata = DicomReader::getPixelData(_image.get());

    // extract desired metadata 
    _patientName = DicomReader::extractDcmTag(file.c_str(), DCM_PatientName);
    _patientSex = DicomReader::extractDcmTag(file.c_str(), DCM_PatientSex);
    _patientBirthDate = DicomReader::extractDcmTag(file.c_str(), DCM_PatientBirthDate);
    _modality = DicomReader::extractDcmTag(file.c_str(), DCM_Modality);
    _studyDate = DicomReader::extractDcmTag(file.c_str(), DCM_StudyDate);
    OFString rd = DicomReader::extractDcmTag(file.c_str(), DCM_ColorSpace);
    _pixelData_Uint8 = DicomReader::extractPixeldataViaTag(file.c_str(), DCM_PixelData);
    
    //std::cout << "Width: " << _imagewidth << std::endl;
   // std::cout << "Height: " << _imageheight << std::endl;
   // std::cout << "Color space: " << rd << std::endl;
    
}


void DicomObject::renderImage(Controller &controller, Renderer &renderer, std::size_t target_frame_duration)
{
    Uint32 title_timestamp = SDL_GetTicks();
    Uint32 frame_start;
    Uint32 frame_end;
    Uint32 frame_duration;
    int frame_count = 0;
    bool running = true;
    std::vector<std::string> text;

    text = formatMetaData();
    std::cout << text[0] << std::endl;

    while (running) {
        frame_start = SDL_GetTicks();

        // Input, Update, Render - the main game loop.
        controller.HandleInput(running);

        renderer.RenderText(text);
        renderer.Render(_pixeldata, _imagewidth, _imageheight);//, text);


        frame_end = SDL_GetTicks();

        // Keep track of how long each loop through the input/update/render cycle
        // takes.
        frame_count++;
        frame_duration = frame_end - frame_start;

    
        // If the time for this frame is too small (i.e. frame_duration is
        // smaller than the target ms_per_frame), delay the loop to
        // achieve the correct frame rate.
        if (frame_duration < target_frame_duration) {
        SDL_Delay(target_frame_duration - frame_duration);

        SDL_Delay(5000);
        running = false;
      }
    
  }
 //TODO: uncomment and test
  renderer.Save("png", "/home/workspace/dicom-converter/data/export");
  
}

std::vector<std::string> DicomObject::formatMetaData()
{
    std::vector<std::string> text;
    std::string patient =  "Patient name:    ";
    std::string modality = "Modality:           ";
    std::string studydate = "Study date:        ";
 
    patient.append(_patientName.c_str());
    modality.append(_modality.c_str());
    studydate.append(_studyDate.c_str());
    text.emplace_back(patient);
    text.emplace_back(modality);
    text.emplace_back(studydate);

    std::cout << patient << std::endl;

    return text;
}




