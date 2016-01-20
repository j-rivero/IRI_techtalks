cmake_minimum_required(VERSION 2.8)
include(CheckCXXCompilerFlag)

CHECK_CXX_COMPILER_FLAG("-std=c++11" CXX11_SUPPORT)

if (CXX11_SUPPORT)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11") 
else()
  message(FATAL_ERROR "Daaaaaah no c++11 support")
endif()
