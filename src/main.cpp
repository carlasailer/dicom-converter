#include <iostream>
#include <memory>
#include <string>

#include "dicomobject.h"
#include "renderer.h"
#include "controller.h"

int main(int argc, char** args) {

    constexpr std::size_t kFramesPerSecond{60};
    constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
    constexpr std::size_t kScreenWidth{600};
    constexpr std::size_t kScreenHeight{600};
    constexpr std::size_t kGridWidth{32};
    constexpr std::size_t kGridHeight{32};

    
    Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
    Controller controller;

    std::string file = "/home/workspace/dicom-converter/data/import/MRBRAIN.DCM";
    //std::string file = "/home/workspace/dicom-converter/data/import/CT.dcm";
    DicomObject dicomObj = DicomObject(file);
    
    dicomObj.renderImage(controller, renderer, kMsPerFrame);
    std::cout << "DICOM Converter was closed." << std::endl;
    return 0;
}