#include <iostream>
#include <memory>
#include <string>
#include <thread>

#include "dicomobject.h"
#include "renderer.h"
#include "controller.h"
#include "userinput.h"

int main(int argc, char** args) {

    constexpr std::size_t kFramesPerSecond{60};
    constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
    constexpr std::size_t kScreenWidth{700};
    constexpr std::size_t kScreenHeight{700};
    constexpr std::size_t kGridWidth{32};
    constexpr std::size_t kGridHeight{32};

    // user input
    UserInput userInput = UserInput();
    userInput.User_getFilename();
    userInput.User_getDisplayMetaData();
    userInput.User_getSave();

    std::string file = userInput.getFilename();
    bool metadata = userInput.getDisplayMeta();
    bool save = userInput.getSave();
    
    // read and render data 
    Renderer renderer = Renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
    Controller controller;

    //std::string file = "/home/workspace/dicom-converter/data/import/MRBRAIN.DCM";
   // std::string file = "/home/workspace/dicom-converter/data/import/CT.dcm";
    
    DicomObject dicomObj = DicomObject(file);

    //std::thread t = std::thread(&DicomObject::renderImage, &dicomObj, controller, renderer, kMsPerFrame, metadata, save)
    dicomObj.renderImage(controller, renderer, kMsPerFrame, metadata, save);
    std::cout << "DICOM Converter was closed." << std::endl;
    return 0;
}