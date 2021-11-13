# DicomConverter - a simple converter that let's you view & save your favourite medical images! 

The **DICOM (Digital Imaging and Communications in Medicine)** standard serves to save, send and retrieve medical image data in a standardized way. Use this DICOM converter to:
<p align="center">
  <img src="utils/DICOMLogo.jpg" height="40" />
 </p>
 
* Read a DICOM file (.dcm)
* Display the image (e.g. CT, MRT) (_currently, only monochrome images are supported_)
* Display meta information such as patient name, study data, or modality (optional)
* Export image as .png (optional)

<p align="center">
  <img src="utils/output.png" height="400"/>
</p>

Define your own input file, decide whether you want to include metadata and whether you want to export your image:
<p align="center">
  <img src="utils/userinput.PNG" height="400"/>
</p>

Follow the instructions on the command line and view the DICOM image in a pop-up window. The file will then optionally be exported when closing the window. 

Sample images to test the application were taken from [National Biomedical Imaging Archive](https://imaging.nci.nih.gov/ncia/) and [Rubo Medical Imaging](http://www.rubomedical.com/dicom_files/index.html).

_Note: This project was developed as final capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The repo [CppND-Capstone-Snake-Game](https://github.com/udacity/CppND-Capstone-Snake-Game) served as a starting point._

## Dependencies for Running Locally

* [git](https://git-scm.com/)
* [cmake](https://cmake.org/install/) >= 3.7
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
* [dcmtk (DICOM Toolkit)](https://dicom.offis.de/dcmtk.php.de) == 3.6.6
  * will be installed with first build of repo code
* [SDL2](https://wiki.libsdl.org/Installation) >= 2.0
* [SDL2_ttf](https://www.libsdl.org/projects/SDL_ttf/)

  
**On Debian/Ubuntu based systems, use the following command**

`sudo apt install git build-essential pkg-config cmake cmake-data libsdl2-dev libsdl2-ttf-dev`


## Build instructions
```sh
# Clone this repo
git clone https://github.com/carlasailer/dicom-converter.git
cd dicom-converter

# Build using the build script (downloads and builds dcmtk correctly)
chmod +x utils/build-dicom-converter.sh
. utils/build-dicom-converter.sh

# Run
./dicom-converter
```

## File and Class structure
* `src/`  
  * `./main.cpp` 
  * `./dicomreader.h` & `./dicomreader.cpp`:      `namespace DicomReader`   
  * `./dicomobject.h` & `./dicomobject.cpp`:      `class DicomObject`  
  * `./controller.h` & `.controller.cpp`:         `class Controller`
  * `./renderer.h` & `./renderer.cpp`:            `class Renderer`  
  * `./userinput.h` & `./userinput.cpp`:          `class UserInput`  
* `cmake/`
  * `./sdl2`: contains `FindSLD2.cmake` and `FindSDL2_ttf.cmake` needed for CMake
  * `/dcmtk`: contains files needed by CMake to setup `dcmtk`
* `utils/`  
  * `build-dicom-converter.sh`: downloades DICOM Toolkit `dcmtk` and builds it locally, calls `cmake` and `make` on the repo
  * `arial.ttf`: font used to render text on the image
* `data/` 
  * `./export/`: target folder for saved images
  * `./import/`: example data provided for testing purposes

## Submission as part of the C++ Nanodegree
The following rubric points were implemented in this project:

**Loops, Functions, I/O**
* _The project demonstrates an understanding of C++ functions and control structures._
  * use of conditional control structures, e.g. in `UserInput::User_getDisplayMetaData` (in `src/userinput.cpp`, lines 22-45)
  * modular organization in functions, e.g. in `convertTimeStampToString` and `getFilenameWithTimestamp` (`renderer.cpp`, lines 7-32)
* _The project reads data from a file and process the data, or the program writes data to a file._
  * read contents of `.dcm` file: `namespace DicomReader` (in `src/dicomreader.cpp`, lines 11-67)
* _The project accepts user input and processes the input._: 
  * implemented in `class UserInput` in `src/userinput.cpp`

**Object Oriented Programming**
* _The project uses Object Oriented Programming techniques._
  * implementation of classes `class UserInput` (in `src/userinput.h`, lines 6-27), `class DicomObject` (in `src/dicomobject.h`, lines 10-32) and `class Renderer` (in `src/renderer.h`, lines 10-33)
* _Classes use appropriate access specifiers for class members._
  * public and private member variables of `class UserInput` (in `src/userinput.h`, lines 8-25)
* _Classes encapsulate behavior._
  * implementation of classes `class UserInput` (in `src/userinput.h`, lines 6-27), `class DicomObject` (in `src/dicomobject.h`, lines 10-32) and `class Renderer` (in `src/renderer.h`, lines 10-33)

**Memory Management**
* _The project makes use of references in function declarations._
  * Two functions use pass-by-reference: `DicomObject::renderImage` and `DicomReader::getPixelData`
* _The project follows the Rule of 5._
  * implemented for `class Renderer` in `src/renderer.h`
* _The project uses move semantics to move data, instead of copying it, where possible._ 
  * use of move constructor in `src/main.cpp` line 31
