#!/bin/bash
# wget https://dicom.offis.de/download/dcmtk/dcmtk366/dcmtk-3.6.6.tar.gz
DIR="dcmtk-3.6.6/"
if  [ -d "$DIR" ]; then 
    echo "dcmtk-3.6.6 folder found..."
   
else
    echo "Downloading dcmtk-3.6.6"
    wget https://dicom.offis.de/download/dcmtk/dcmtk366/dcmtk-3.6.6.tar.gz --no-check-certificate
    echo "Extracting dcmtk-3.6.6 ..."
    tar -xf dcmtk-3.6.6.tar.gz    
    cd dcmtk-3.6.6/
    mkdir dcmtk-3.6.6-build
    mkdir dcmtk-3.6.6-install
    cd dcmtk-3.6.6-build/
    cmake ..
    make DESTDIR=../dcmtk-3.6.6-install install
fi

export DCMDICTPATH="../cmake/dcmtk/dicom.dic"
rm -rf build
mkdir build
cd build/
cmake ..
make 