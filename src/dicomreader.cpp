#include <dirent.h>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <string>
#include <memory>

//#include "dcmdata/dctk.h"
//#include "dcmtk/dcmdata/dctk.h"
//#include "dcmtk/dcmimgle/dcmimage.h"
#include "dicomreader.h"
#include "dicomobj.h"

//constructor for class DicomReader
DicomReader::DicomReader(std::string path) : _filepath(path.c_str())
{
    loadFile();
    getImage();
    //extractPatientName();
    
}

void DicomReader::loadFile() 
{
  std::cout << _filepath << std::endl;
  DcmFileFormat fileformat;
  OFCondition status = fileformat.loadFile(_filepath);
if (status.good())
{
  OFString patientName;
  if (fileformat.getDataset()->findAndGetOFString(DCM_PatientName, patientName).good())
  {
    std::cout << "Patient's Name: " << patientName << std::endl;
  } else
    std::cerr << "Error: cannot access Patient's Name!" << std::endl;
} else
  std::cerr << "Error: cannot read DICOM file (" << status.text() << ")" << std::endl;
}

void DicomReader::getImage() 
{
    DicomImage *image = new DicomImage(_filepath.c_str());
    if (image != NULL)
    {
      if (image->getStatus() == EIS_Normal)
      {
        if (image->isMonochrome())
        {
          image->setMinMaxWindow();
          Uint8 *pixelData = (Uint8 *)(image->getOutputData(8 /* bits */));
          if (pixelData != NULL)
          {
            /* do something useful with the pixel data */
          }
        }
      } else
        std::cerr << "Error: cannot load DICOM image (" << DicomImage::getString(image->getStatus()) << ")" << std::endl;
    }

    std::cout << "end of getdataset" << std::endl;
    _image = image;
    delete image;
    return;   
}

void DicomReader::extractPatientName()
{
    OFCondition condition;
    OFString patient_name;
    std::cout << "start of patientname" << std::endl;
    // extract Patient Name from dataset using the DCMTagKey DCM_PatientName
    try 
    { //condition = _dataset->findAndGetOFStringArray(DCM_PatientName, patient_name);
    }

    catch(const std::exception& e)
    {std::cerr << "crash" << std::endl;}

   /* if (condition.good())
    {
        std::cout << "Name of this patient: " << patient_name << std::endl;
    }
*/
    std::cout << "end of patientname" << std::endl;

    return;
}