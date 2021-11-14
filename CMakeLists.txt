cmake_minimum_required(VERSION 3.7)

add_definitions(-std=c++17)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")
set(DCMTK_DIR ${CMAKE_CURRENT_SOURCE_DIR}/dcmtk-3.6.6/)

project(dicom-converter)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake/sdl2 ${CMAKE_CURRENT_SOURCE_DIR}/utils)
#list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR/cmake/})

# specify DCMTK's (default) installation directory
#SET(DCMTK_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR/})
SET(ENV{DCMDICTPATH} "${CMAKE_CURRENT_SOURCE_DIR}/cmake/dcmtk/dicom.dic")

# setup for SDL2 and SDL2_ttf
FIND_PACKAGE(SDL2 REQUIRED)
FIND_PACKAGE(SDL2_ttf REQUIRED)
FIND_PACKAGE(SDL2_image REQUIRED)

#  include DCMTK's CMake configuration directly
INCLUDE("${CMAKE_CURRENT_SOURCE_DIR}/dcmtk-3.6.6/dcmtk-3.6.6-build/DCMTKConfig.cmake")

# declare include directories
INCLUDE_DIRECTORIES(${DCMTK_INCLUDE_DIRS})
INCLUDE_DIRECTORIES("${CMAKE_CURRENT_SOURCE_DIR}/dcmtk-3.6.6/dcmtk-3.6.6-install/usr/local/include/**")
INCLUDE_DIRECTORIES(${SDL2_INCLUDE_DIRS} src)
INCLUDE_DIRECTORIES(${SDL2})
INCLUDE_DIRECTORIES(${SDL2_ttf_INCLUDE_DIRS})

# declare executable and link required libraries
ADD_EXECUTABLE(dicom-converter src/main.cpp src/dicomobject.cpp src/dicomreader.cpp src/renderer.cpp src/controller.cpp src/userinput.cpp)
#string(STRIP ${SDL2_LIBRARIES} SDL2_LIBRARIES)
TARGET_LINK_LIBRARIES(dicom-converter ${DCMTK_LIBRARIES} ${SDL2_LIBRARIES} SDL2::Main SDL2::TTF SDL2::Image)
