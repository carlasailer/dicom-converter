#include <iostream>
#include <memory>
#include <string>

#include "dicomobject.h"
#include "renderer.h"

int main() {

    constexpr std::size_t kFramesPerSecond{60};
    constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
    constexpr std::size_t kScreenWidth{640};
    constexpr std::size_t kScreenHeight{640};
    constexpr std::size_t kGridWidth{32};
    constexpr std::size_t kGridHeight{32};

    Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
    
    std::string file = "/home/workspace/dicom-converter/data/MRBRAIN.DCM";
    DicomObject dicomObj = DicomObject(file);
    
    //dicomObj.renderImage(renderer, kMsPerFrame);
    //dicomObj.addMetaData();
   
    
    
    return 0;
}