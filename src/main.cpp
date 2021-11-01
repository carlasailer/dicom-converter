#include <iostream>
#include <memory>
#include <string>

#include "dicomobject.h"
#include "renderer.h"
#include "controller.h"

int main() {

    constexpr std::size_t kFramesPerSecond{60};
    constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
    constexpr std::size_t kScreenWidth{640};
    constexpr std::size_t kScreenHeight{640};
    constexpr std::size_t kGridWidth{32};
    constexpr std::size_t kGridHeight{32};

    
    Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
    Controller controller;

    //std::string file = "/home/workspace/dicom-converter/data/MRBRAIN.DCM";
    std::string file = "/home/workspace/dicom-converter/data/CT.dcm";
    DicomObject dicomObj = DicomObject(file);
    
    dicomObj.renderImage(controller, renderer, kMsPerFrame);
    //dicomObj.addMetaData();

    std::cout << "DICOM Converter was closed." << std::endl;
    return 0;
}