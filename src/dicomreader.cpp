#include <dirent.h>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <string>
#include <memory>

#include "dicomreader.h"

Uint8* DicomReader::getPixelData(const char* file) 
{
    // unique pointer to image 
    auto image = std::make_unique<DicomImage>(file);

    if (image != nullptr)
    {
      if (image->getStatus() == EIS_Normal)
      {  
        if (image->isMonochrome())
        {
          std::cout << "Load image complete. " << std::endl;
          
          // get pixel data 
          image->setMinMaxWindow();
          Uint8 *pixelData = (Uint8 *) image->getOutputData(8 /*bits*/);
          if (pixelData != NULL) 
          {
            return pixelData;
          }
        }
      }
    }

    else
    {
      std::cerr << "Error: cannot load DICOM image (" << DicomImage::getString(image->getStatus()) << ")" << std::endl;
      return nullptr;
    }
}

template<typename TargetType> TargetType DicomReader::extractDcmTag(const char* file, DcmTagKey DICOMTag) 
{   
  TargetType target;
  DcmFileFormat fileformat;
  OFCondition status = fileformat.loadFile(file);
    
  if (status.good())
  {
    if (fileformat.getDataset()->findAndGetOFString(DICOMTag,target).good()) 
    {
        std::cout << "Extracted " << DICOMTag << " : " << target << std::endl;
    }
  }
  
  return target;
}


OFString DicomReader::extractDcmTag(const char* file, DcmTagKey DICOMTag) 
{
  OFString target;
  DcmFileFormat fileformat;
  OFCondition status = fileformat.loadFile(file);
    
  if (status.good())
  {
    if (fileformat.getDataset()->findAndGetOFString(DICOMTag,target).good()) 
    {
        std::cout << "Extracted " << DICOMTag << " : " << target << std::endl;
    }
  }
  
  return target;
}
