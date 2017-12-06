cmake_minimum_required(VERSION 3.8)
project(cpp_waste_recycling_helgaKalicz)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Garbage.cpp Garbage.h PaperGarbage.cpp PaperGarbage.h PlasticGarbage.cpp PlasticGarbage.h DustbinContentError.cpp DustbinContentError.h Dustbin.cpp Dustbin.h)
add_executable(cpp_waste_recycling_helgaKalicz ${SOURCE_FILES})