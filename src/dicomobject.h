#ifndef DICOMOBJECT_H
#define DICOMOBJECT_H

#include <string>
#include <unordered_map>
#include "dcmtk/dcmdata/dctk.h"
#include "dicomreader.h"
#include "renderer.h"
#include "controller.h"

class DicomObject
{
    public:
    DicomObject(std::string file);
    void displayImage();
    void renderImage(Controller &controller, Renderer &renderer, std::size_t target_frame_duration, bool metadata, bool save);
    void saveAs(std::string file_ext, std::string folder);
    std::string getFilenameWithTimestamp(std::string file_ext, std::string location);
    std::vector<std::string> formatMetaData();
          
    const char* _filepath;
    void* _pixeldata; 
    std::unique_ptr<DicomImage> _image;
    
    private:
    std::unordered_map<std::string, OFString> _metadata; 
    int _imagewidth;
    int _imageheight;
};

#endif