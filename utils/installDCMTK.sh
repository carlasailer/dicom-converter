#!/bin/bash
cd /home/workspace/dcmtk-3.6.6
rm -r dcmtk-3.6.6-build
rm -r dcmtk-3.6.6-install
mkdir dcmtk-3.6.6-build
mkdir dcmtk-3.6.6-install
cd dcmtk-3.6.6-build
cmake ..
make DESTDIR=../dcmtk-3.6.6-install install