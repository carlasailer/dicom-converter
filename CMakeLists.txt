cmake_minimum_required(VERSION 3.7)

add_definitions(-std=c++17)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")
set(DCMTK_DIR "/home/workspace/dcmtk-3.6.6")

project(dicomConverter)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/" "/home/workspace/dicom-converter/utils/")

# specify DCMTK's (default) installation directory
SET(DCMTK_DIRECTORY "/home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-install" CACHE PATH "Directory where DCMTK library is installed.")
SET(DCMDICTPATH /home/workspace/dcmtk-3.6.6/dcmdata/data/dicom.dic)

# setup for SDL2 and SDL2_ttf
FIND_PACKAGE(SDL2 REQUIRED)
FIND_PACKAGE(SDL2_ttf REQUIRED)

#  include DCMTK's CMake configuration directly
INCLUDE(${DCMTK_DIR}/dcmtk-3.6.6-build/DCMTKConfig.cmake)

# declare include directories
INCLUDE_DIRECTORIES(${DCMTK_INCLUDE_DIRS})
INCLUDE_DIRECTORIES("/home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-install/usr/local/include/**")
INCLUDE_DIRECTORIES(${SDL2_INCLUDE_DIRS} src)
INCLUDE_DIRECTORIES(${SDL2})
INCLUDE_DIRECTORIES("/usr/include/SDL2/**")
INCLUDE_DIRECTORIES(${SDL2_ttf_INCLUDE_DIRS})
INCLUDE_DIRECTORIES("/usr/lib/x86_64-linux-gnu/**")

# declare executable and link required libraries
ADD_EXECUTABLE(dicomConverter src/main.cpp src/dicomobject.cpp src/dicomreader.cpp src/renderer.cpp src/controller.cpp src/userinput.cpp)
#string(STRIP ${SDL2_LIBRARIES} SDL2_LIBRARIES)
TARGET_LINK_LIBRARIES(dicomConverter ${DCMTK_LIBRARIES} ${SDL2_LIBRARIES} SDL2::Main SDL2::TTF)
