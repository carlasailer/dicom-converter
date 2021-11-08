#include <dirent.h>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <string>
#include <memory>
#include <typeinfo>

#include "dicomreader.h"

std::unique_ptr<DicomImage> DicomReader::getDicomImage(const char* file)
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
          std::cout << "frames in getDicomImage: " << image->getNumberOfFrames() << std::endl;
          return image;
          
        }
      }
    }

    else
    {
      std::cerr << "Error: cannot load DICOM image (" << DicomImage::getString(image->getStatus()) << ")" << std::endl;
      return nullptr;
    }
}


Uint8* DicomReader::getPixelData(DicomImage *image) 
{ 
  image->setMinMaxWindow();
  std::cout << image->getOutputDataSize(8) << std::endl;
  //void *pixelData = (void *) malloc(image->getOutputDataSize(8)) ;
  int success;
  const unsigned long buffersize{image->getOutputDataSize(8)};
  //success = image->getOutputData(pixelData, buffersize, 8 /*bits*/, 0);
  std::cout << "Number of frames: " << image->getNumberOfFrames() << std::endl;
  std::cout << "GEt pixel data: " << success << std::endl;
   void *pixelData = (Uint8*) (image->getOutputData(8 /*bits*/, 0));
  if (pixelData != NULL) 
  {
    std::cout << "Data: "<< ((Uint8*) pixelData) << std::endl;
    std::cout << "Size of pixel data: " << sizeof(pixelData) << std::endl;
    //free(pixelData);
    std::cout << "Data: "<< pixelData << std::endl;
    return (Uint8*) pixelData;
  }

  else 
  {
    std::cout << "Pixeldata empty." << std::endl;
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

const Uint8* DicomReader::extractPixeldataViaTag(const char* file, DcmTagKey DICOMTag) 
{
  const Uint8* target;
  DcmFileFormat fileformat;
  OFCondition status = fileformat.loadFile(file);
    
  if (status.good())
  {
    if (fileformat.getDataset()->findAndGetUint8Array(DICOMTag, target).good()) 
    {
        std::cout << "Extracted " << DICOMTag << " : " << target << std::endl;
    }
  }
  
  return target;
}
