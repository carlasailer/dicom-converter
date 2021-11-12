#
# DCMTKConfig.cmake - DCMTK CMake configuration file for external projects
#


####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was DCMTKConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../../usr/local" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

####################################################################################

# Basic version information
set(DCMTK_MAJOR_VERSION 3)
set(DCMTK_MINOR_VERSION 6)
set(DCMTK_BUILD_VERSION 6)

# DCMTK libraries and modules
set(DCMTK_MODULES "ofstd;oflog;dcmdata;dcmimgle;dcmimage;dcmjpeg;dcmjpls;dcmtls;dcmnet;dcmsr;dcmsign;dcmwlm;dcmqrdb;dcmpstat;dcmrt;dcmiod;dcmfg;dcmseg;dcmtract;dcmpmap;dcmect")
set(DCMTK_LIBRARIES "ofstd;oflog;dcmdata;i2d;dcmimgle;dcmimage;dcmjpeg;ijg8;ijg12;ijg16;dcmjpls;dcmtkcharls;dcmtls;dcmnet;dcmsr;cmr;dcmdsig;dcmwlm;dcmqrdb;dcmpstat;dcmrt;dcmiod;dcmfg;dcmseg;dcmtract;dcmpmap;dcmect")

# Optional DCMTK 3rd party libraries
set(DCMTK_WITH_TIFF ON)
set(DCMTK_WITH_PNG ON)
set(DCMTK_WITH_XML ON)
set(DCMTK_WITH_ZLIB ON)
set(DCMTK_WITH_OPENSSL ON)
set(DCMTK_WITH_SNDFILE OFF)
set(DCMTK_WITH_ICONV OFF)
set(DCMTK_WITH_STDLIBC_ICONV ON)
set(DCMTK_WITH_ICU ON)
set(DCMTK_WITH_WRAP OFF)
set(DCMTK_WITH_OPENJPEG OFF)
set(DCMTK_WITH_DOXYGEN OFF)

# Dictionary-related
set(DCMTK_ENABLE_BUILTIN_DICTIONARY OFF)
set(DCMTK_ENABLE_EXTERNAL_DICTIONARY ON)
set(DCMTK_ENABLE_PRIVATE_TAGS OFF)

# Compiler / standard library features
set(DCMTK_ENABLE_CXX11 INFERRED)
set(DCMTK_CXX11_FLAGS )
set(DCMTK_ENABLE_STL OFF)
set(DCMTK_ENABLE_STL_ALGORITHM INFERRED)
set(DCMTK_ENABLE_STL_LIMITS INFERRED)
set(DCMTK_ENABLE_STL_LIST INFERRED)
set(DCMTK_ENABLE_STL_MAP INFERRED)
set(DCMTK_ENABLE_STL_MEMORY INFERRED)
set(DCMTK_ENABLE_STL_STACK INFERRED)
set(DCMTK_ENABLE_STL_STRING INFERRED)
set(DCMTK_ENABLE_STL_SYSTEM_ERROR INFERRED)
set(DCMTK_ENABLE_STL_TUPLE INFERRED)
set(DCMTK_ENABLE_STL_TYPE_TRAITS INFERRED)
set(DCMTK_ENABLE_STL_VECTOR INFERRED)

set(DCMTK_FORCE_FPIC_ON_UNIX OFF)

# DCMTK documentation
set(DCMTK_GENERATE_DOXYGEN_TAGFILE OFF)

# DCMTK shared libraries and build model
set(DCMTK_OVERWRITE_WIN32_COMPILER_FLAGS OFF)
set(DCMTK_COMPILE_WIN32_MULTITHREADED_DLL OFF)
set(DCMTK_SHARED_LIBRARIES OFF)
set(DCMTK_SINGLE_SHARED_LIBRARY OFF)

# DCMTK additional options
set(DCMTK_BUILD_APPS ON)
set(DCMTK_WITH_THREADS ON)
set(DCMTK_WIDE_CHAR_FILE_IO_FUNCTIONS OFF)
set(DCMTK_WIDE_CHAR_MAIN_FUNCTION OFF)
set(DCMTK_ENABLE_LFS lfs64)
set(DCMTK_ENABLE_CHARSET_CONVERSION DCMTK_CHARSET_CONVERSION_ICU)


# CMake builtins
set(DCMTK_CMAKE_BUILD_TYPE Release)
set(DCMTK_CMAKE_CXX_COMPILER "/usr/bin/c++")

set(DCMTK_CMAKE_CXX_FLAGS  -D_XOPEN_SOURCE_EXTENDED -D_XOPEN_SOURCE=500 -D_BSD_SOURCE -D_DEFAULT_SOURCE -D_BSD_COMPAT -D_OSF_SOURCE -D_POSIX_C_SOURCE=199506L)
set(DCMTK_CMAKE_CXX_FLAGS_DEBUG -g -DDEBUG)
set(DCMTK_CMAKE_CXX_FLAGS_RELEASE -O3 -DNDEBUG)
set(DCMTK_CMAKE_CXX_FLAGS_MINSIZEREL -Os -DNDEBUG)
set(DCMTK_CMAKE_CXX_FLAGS_RELWITHDEBINFO -O2 -g -DNDEBUG)

set(DCMTK_CMAKE_C_FLAGS_DEBUG -g -DDEBUG)
set(DCMTK_CMAKE_C_FLAGS_RELEASE -O3 -DNDEBUG)
set(DCMTK_CMAKE_C_FLAGS_MINSIZEREL -Os -DNDEBUG)
set(DCMTK_CMAKE_C_FLAGS_RELWITHDEBINFO -O2 -g -DNDEBUG)

set(DCMTK_CMAKE_EXE_LINKER_FLAGS )
set(DCMTK_CMAKE_EXE_LINKER_FLAGS_DEBUG )
set(DCMTK_CMAKE_EXE_LINKER_FLAGS_RELEASE )
set(DCMTK_CMAKE_EXE_LINKER_FLAGS_MINSIZEREL )
set(DCMTK_CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO )

set(DCMTK_CMAKE_INSTALL_BINDIR bin)
set(DCMTK_CMAKE_INSTALL_SYSCONFDIR etc)
set(DCMTK_CMAKE_INSTALL_INCLUDEDIR include)
set(DCMTK_CMAKE_INSTALL_LIBDIR lib)
set(DCMTK_CMAKE_INSTALL_DATAROOTDIR share)

set(DCMTK_CMAKE_INSTALL_PREFIX "/usr/local")


SET_AND_CHECK(DCMTK_TARGETS "/home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/DCMTKTargets.cmake")

####### Expanded from @DCMTK_CONFIG_CODE@ #######
list(APPEND DCMTK_INCLUDE_DIRS "/home/workspace/dcmtk-3.6.6/dcmtk-3.6.6-build/config/include")
list(APPEND DCMTK_INCLUDE_DIRS "/home/workspace/dcmtk-3.6.6/ofstd/include")
list(APPEND DCMTK_INCLUDE_DIRS "/home/workspace/dcmtk-3.6.6/oflog/include")
list(APPEND DCMTK_INCLUDE_DIRS "/home/workspace/dcmtk-3.6.6/dcmdata/include")
list(APPEND DCMTK_INCLUDE_DIRS "/home/workspace/dcmtk-3.6.6/dcmimgle/include")
list(APPEND DCMTK_INCLUDE_DIRS "/home/workspace/dcmtk-3.6.6/dcmimage/include")
list(APPEND DCMTK_INCLUDE_DIRS "/home/workspace/dcmtk-3.6.6/dcmjpeg/include")
list(APPEND DCMTK_INCLUDE_DIRS "/home/workspace/dcmtk-3.6.6/dcmjpls/include")
list(APPEND DCMTK_INCLUDE_DIRS "/home/workspace/dcmtk-3.6.6/dcmtls/include")
list(APPEND DCMTK_INCLUDE_DIRS "/home/workspace/dcmtk-3.6.6/dcmnet/include")
list(APPEND DCMTK_INCLUDE_DIRS "/home/workspace/dcmtk-3.6.6/dcmsr/include")
list(APPEND DCMTK_INCLUDE_DIRS "/home/workspace/dcmtk-3.6.6/dcmsign/include")
list(APPEND DCMTK_INCLUDE_DIRS "/home/workspace/dcmtk-3.6.6/dcmwlm/include")
list(APPEND DCMTK_INCLUDE_DIRS "/home/workspace/dcmtk-3.6.6/dcmqrdb/include")
list(APPEND DCMTK_INCLUDE_DIRS "/home/workspace/dcmtk-3.6.6/dcmpstat/include")
list(APPEND DCMTK_INCLUDE_DIRS "/home/workspace/dcmtk-3.6.6/dcmrt/include")
list(APPEND DCMTK_INCLUDE_DIRS "/home/workspace/dcmtk-3.6.6/dcmiod/include")
list(APPEND DCMTK_INCLUDE_DIRS "/home/workspace/dcmtk-3.6.6/dcmfg/include")
list(APPEND DCMTK_INCLUDE_DIRS "/home/workspace/dcmtk-3.6.6/dcmseg/include")
list(APPEND DCMTK_INCLUDE_DIRS "/home/workspace/dcmtk-3.6.6/dcmtract/include")
list(APPEND DCMTK_INCLUDE_DIRS "/home/workspace/dcmtk-3.6.6/dcmpmap/include")
list(APPEND DCMTK_INCLUDE_DIRS "/home/workspace/dcmtk-3.6.6/dcmect/include")
##################################################

# Compatibility: This variable is deprecated
set(DCMTK_INCLUDE_DIR ${DCMTK_INCLUDE_DIRS})

if(NOT DCMTK_TARGETS_IMPORTED)
  set(DCMTK_TARGETS_IMPORTED 1)
  include(${DCMTK_TARGETS})
endif()
