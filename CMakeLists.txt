cmake_minimum_required(VERSION 3.7)

add_definitions(-std=c++17)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")
set(DCMTK_DIR "/home/workspace/dcmtk-3.6.6")
project(dicomConverter)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

# specify DCMTK's (default) installation directory
SET(DCMTK_DIRECTORY "/home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-install" CACHE PATH "Directory where DCMTK library is installed.")

# approach #1: use FIND_PACKAGE() to search for installed DCMTK
#FIND_PACKAGE(DCMTK REQUIRED CONFIG PATHS ${DCMTK_DIRECTORY} NO_DEFAULT_PATH)

# approach #2: include DCMTK's CMake configuration directly
INCLUDE(${DCMTK_DIR}/dcmtk-3.6.6-build/DCMTKConfig.cmake)

# declare include directories
INCLUDE_DIRECTORIES(${DCMTK_INCLUDE_DIRS})
INCLUDE_DIRECTORIES("/home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-install/usr/local/include")
# declare executable and link required libraries
ADD_EXECUTABLE(dicomConverter src/main.cpp src/dicomobj.cpp src/dicomreader.cpp)
TARGET_LINK_LIBRARIES(dicomConverter ${DCMTK_LIBRARIES})