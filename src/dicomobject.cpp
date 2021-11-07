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
    
    //_imagewidth = std::atoi(DicomReader::extractDcmTag(file.c_str(), DCM_Rows).c_str());
   // _imageheight = std::atoi(DicomReader::extractDcmTag(file.c_str(), DCM_Columns).c_str());

    std::cout << "Width: " << _imagewidth << std::endl;
    std::cout << "Height: " << _imageheight << std::endl;
    std::cout << "Color space: " << rd << std::endl;
    
}


void DicomObject::renderImage(Controller &controller, Renderer &renderer, std::size_t target_frame_duration)
{
    Uint32 title_timestamp = SDL_GetTicks();
    Uint32 frame_start;
    Uint32 frame_end;
    Uint32 frame_duration;
    int frame_count = 0;
    bool running = true;

    while (running) {
        frame_start = SDL_GetTicks();

        // Input, Update, Render - the main game loop.
        controller.HandleInput(running);
        renderer.Render(_pixeldata, _imagewidth, _imageheight);

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

        SDL_Delay(1000);
        running = false;
      }
    
  }
 //TODO: uncomment and test
 // renderer.Save("png", "/home/workspace/dicom-converter/data/export");
  
}




