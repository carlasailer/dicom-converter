# dicomConverter - a simple dicomConverter that lets you view your favourite medical images! 

The **DICOM (Digital Imaging and Communications in Medicine)** standard serves to save, send and retrieve medical image data in a standardized way. Use this DICOM converter to:
<p align="center">
  <img src="utils/DICOMLogo.jpg" height="40" />
 </p>
 
* Read a DICOM file (.dcm)
* Display the image (e.g. CT, MRT, PET)
* Display meta information such as patient name, study data, or modality
* Export image as .png

<p align="center">
  <img src="utils/output.png" height="400"/>
</p>
Note: This project was developed as final capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213).


## Dependencies for Running Locally

* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
* dcmtk == 3.6.6 (DICOM Toolkit)
  * See build instructions below if not already installed
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  >Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source. 
* SDL_ttf
  * On Linux, use `sudo apt-get install libsdl2-ttf-dev`
  
## Build DCMTIK - DICOM Toolkit 

1. Download `dcmtk` from  [DCMTK - DICOM Toolkit](https://dicom.offis.de/dcmtk.php.en)

2. Extract the files to your workspace folder

3. Build `dcmtk` in your workspace folder 
* `mkdir dcmtk-3.6.6-build`
* `cd dcmtk-3.6.6-build`
* `cmake ..`
* `make DESTDIR=../dcmtk-3.6.6-install install`

3. Alternatively, use the install script:
* Open a bash terminal
* `chmod +x /home/workspace/dicom-converter/install-dcmtk.sh`
* `./home/workspcae/dicom-converter/install-dcmtk.sh`

4. Ensure that the DCMDICTPATH environment variable is set correctly (points to ".../dcmdata/data/dicom.dic" file). 

## Build this project

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./dicomConverter`.

