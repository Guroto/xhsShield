cmake_minimum_required(VERSION 3.19)
project(xhsShield)

set(CMAKE_CXX_STANDARD 14)

add_executable(xhsShield main.cpp utils/xyAes.h utils/xyAes.cpp utils/xyMd5.h utils/xyMd5.cpp utils/xyXor.h utils/xyXor.cpp utils/base64.h utils/base64.cpp utils/shield.cpp utils/shield.h)