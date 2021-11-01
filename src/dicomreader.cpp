#include <dirent.h>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <string>
#include <memory>

#include "dicomreader.h"

//constructor for class DicomReader
DicomReader::DicomReader() 
{ 
        
}

DcmDataset* DicomReader::loadFile(const char* file) 
{
  std::cout << file << std::endl;
  DcmFileFormat fileformat;
  OFCondition status = fileformat.loadFile(file);
  if (status.good())
  {
    std::cout << "Load file: " << file << std::endl;
    return fileformat.getDataset();
  }
  else
  { 
    std::cerr << "Error: cannot read DICOM file (" << status.text() << ")" << std::endl;
    return nullptr;
  }
}
 

DicomImage* DicomReader::loadImage(const char* file) 
{
    DicomImage *image = new DicomImage(file);
    if (image != NULL)
    {
      if (image->getStatus() == EIS_Normal)
      {  
        if (image->isMonochrome())
        {
          std::cout << "Load image complete. " << std::endl;
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

void DicomReader::extractPatientName()
{
    /*OFCondition condition;
    OFString patient_name;
    std::cout << "start of patientname" << std::endl;

    if (_dataset->findAndGetOFString(DCM_PatientName, patient_name).good())
    {
      std::cout << "Name of this patient: " << patient_name << std::endl;
    }
    // extract Patient Name from dataset using the DCMTagKey DCM_PatientName
    */
    return;
}