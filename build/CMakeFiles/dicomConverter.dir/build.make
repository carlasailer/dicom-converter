# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/workspace/dicom-converter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/workspace/dicom-converter/build

# Include any dependencies generated for this target.
include CMakeFiles/dicomConverter.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dicomConverter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dicomConverter.dir/flags.make

CMakeFiles/dicomConverter.dir/src/main.cpp.o: CMakeFiles/dicomConverter.dir/flags.make
CMakeFiles/dicomConverter.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/workspace/dicom-converter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dicomConverter.dir/src/main.cpp.o"
	/usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dicomConverter.dir/src/main.cpp.o -c /home/workspace/dicom-converter/src/main.cpp

CMakeFiles/dicomConverter.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dicomConverter.dir/src/main.cpp.i"
	/usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/workspace/dicom-converter/src/main.cpp > CMakeFiles/dicomConverter.dir/src/main.cpp.i

CMakeFiles/dicomConverter.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dicomConverter.dir/src/main.cpp.s"
	/usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/workspace/dicom-converter/src/main.cpp -o CMakeFiles/dicomConverter.dir/src/main.cpp.s

CMakeFiles/dicomConverter.dir/src/dicomobject.cpp.o: CMakeFiles/dicomConverter.dir/flags.make
CMakeFiles/dicomConverter.dir/src/dicomobject.cpp.o: ../src/dicomobject.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/workspace/dicom-converter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/dicomConverter.dir/src/dicomobject.cpp.o"
	/usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dicomConverter.dir/src/dicomobject.cpp.o -c /home/workspace/dicom-converter/src/dicomobject.cpp

CMakeFiles/dicomConverter.dir/src/dicomobject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dicomConverter.dir/src/dicomobject.cpp.i"
	/usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/workspace/dicom-converter/src/dicomobject.cpp > CMakeFiles/dicomConverter.dir/src/dicomobject.cpp.i

CMakeFiles/dicomConverter.dir/src/dicomobject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dicomConverter.dir/src/dicomobject.cpp.s"
	/usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/workspace/dicom-converter/src/dicomobject.cpp -o CMakeFiles/dicomConverter.dir/src/dicomobject.cpp.s

CMakeFiles/dicomConverter.dir/src/dicomreader.cpp.o: CMakeFiles/dicomConverter.dir/flags.make
CMakeFiles/dicomConverter.dir/src/dicomreader.cpp.o: ../src/dicomreader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/workspace/dicom-converter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/dicomConverter.dir/src/dicomreader.cpp.o"
	/usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dicomConverter.dir/src/dicomreader.cpp.o -c /home/workspace/dicom-converter/src/dicomreader.cpp

CMakeFiles/dicomConverter.dir/src/dicomreader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dicomConverter.dir/src/dicomreader.cpp.i"
	/usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/workspace/dicom-converter/src/dicomreader.cpp > CMakeFiles/dicomConverter.dir/src/dicomreader.cpp.i

CMakeFiles/dicomConverter.dir/src/dicomreader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dicomConverter.dir/src/dicomreader.cpp.s"
	/usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/workspace/dicom-converter/src/dicomreader.cpp -o CMakeFiles/dicomConverter.dir/src/dicomreader.cpp.s

CMakeFiles/dicomConverter.dir/src/renderer.cpp.o: CMakeFiles/dicomConverter.dir/flags.make
CMakeFiles/dicomConverter.dir/src/renderer.cpp.o: ../src/renderer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/workspace/dicom-converter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/dicomConverter.dir/src/renderer.cpp.o"
	/usr/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dicomConverter.dir/src/renderer.cpp.o -c /home/workspace/dicom-converter/src/renderer.cpp

CMakeFiles/dicomConverter.dir/src/renderer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dicomConverter.dir/src/renderer.cpp.i"
	/usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/workspace/dicom-converter/src/renderer.cpp > CMakeFiles/dicomConverter.dir/src/renderer.cpp.i

CMakeFiles/dicomConverter.dir/src/renderer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dicomConverter.dir/src/renderer.cpp.s"
	/usr/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/workspace/dicom-converter/src/renderer.cpp -o CMakeFiles/dicomConverter.dir/src/renderer.cpp.s

# Object files for target dicomConverter
dicomConverter_OBJECTS = \
"CMakeFiles/dicomConverter.dir/src/main.cpp.o" \
"CMakeFiles/dicomConverter.dir/src/dicomobject.cpp.o" \
"CMakeFiles/dicomConverter.dir/src/dicomreader.cpp.o" \
"CMakeFiles/dicomConverter.dir/src/renderer.cpp.o"

# External object files for target dicomConverter
dicomConverter_EXTERNAL_OBJECTS =

dicomConverter: CMakeFiles/dicomConverter.dir/src/main.cpp.o
dicomConverter: CMakeFiles/dicomConverter.dir/src/dicomobject.cpp.o
dicomConverter: CMakeFiles/dicomConverter.dir/src/dicomreader.cpp.o
dicomConverter: CMakeFiles/dicomConverter.dir/src/renderer.cpp.o
dicomConverter: CMakeFiles/dicomConverter.dir/build.make
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libofstd.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/liboflog.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmdata.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libi2d.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmimgle.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmimage.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmjpeg.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libijg8.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libijg12.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libijg16.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmjpls.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmtkcharls.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmtls.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmnet.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmsr.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libcmr.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmdsig.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmwlm.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmqrdb.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmpstat.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmrt.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmiod.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmfg.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmseg.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmtract.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmpmap.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmect.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmtls.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmsr.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmimage.a
dicomConverter: /usr/lib/x86_64-linux-gnu/libtiff.so
dicomConverter: /usr/lib/x86_64-linux-gnu/libjpeg.so
dicomConverter: /usr/lib/x86_64-linux-gnu/libpng.so
dicomConverter: /usr/lib/x86_64-linux-gnu/libxml2.so
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmdsig.a
dicomConverter: /usr/lib/x86_64-linux-gnu/libssl.so
dicomConverter: /usr/lib/x86_64-linux-gnu/libcrypto.so
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmqrdb.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmnet.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmimgle.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmfg.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmiod.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libdcmdata.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/liboflog.a
dicomConverter: /home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/lib/libofstd.a
dicomConverter: /usr/lib/x86_64-linux-gnu/libicuuc.so
dicomConverter: /usr/lib/x86_64-linux-gnu/libicudata.so
dicomConverter: /usr/lib/x86_64-linux-gnu/libz.so
dicomConverter: CMakeFiles/dicomConverter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/workspace/dicom-converter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable dicomConverter"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dicomConverter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dicomConverter.dir/build: dicomConverter

.PHONY : CMakeFiles/dicomConverter.dir/build

CMakeFiles/dicomConverter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dicomConverter.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dicomConverter.dir/clean

CMakeFiles/dicomConverter.dir/depend:
	cd /home/workspace/dicom-converter/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/workspace/dicom-converter /home/workspace/dicom-converter /home/workspace/dicom-converter/build /home/workspace/dicom-converter/build /home/workspace/dicom-converter/build/CMakeFiles/dicomConverter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dicomConverter.dir/depend

