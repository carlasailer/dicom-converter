#include "dicomobject.h"
#include "dicomreader.h"

DicomObject::DicomObject(std::string file) 
{
    _image = DicomReader::loadImage(file.c_str());
    //_patientName = DicomReader::extractDcmTag<OFString>(file.c_str(), DCM_PatientName);
    _patientName = DicomReader::extractDcmTag(file.c_str(), DCM_PatientName);
    
}

void DicomObject::displayImage()
{
    // get pixel data from member variable
    _image->setMinMaxWindow();
    Uint8 *pixelData = (Uint8 *) _image->getOutputData(8 /*bits*/);
    if (pixelData != NULL) 
    {
        
    }

}

void renderImage(Renderer &renderer, std::size_t target_frame_duration)
{
    renderer.Render();
}


