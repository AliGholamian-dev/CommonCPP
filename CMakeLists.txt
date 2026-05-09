cmake_minimum_required(VERSION 3.10)
project(CommonCPP LANGUAGES CXX)

add_library(
    CommonCPP
    INTERFACE
    Include/CommonCPP/PlatformDetection.hpp
    Include/CommonCPP/CompilerDetection.hpp
    Include/CommonCPP/BasicDataTypes.hpp
    Include/CommonCPP/Keywords.hpp
    Include/CommonCPP/Packed.hpp)
    
target_include_directories(CommonCPP INTERFACE ${CMAKE_CURRENT_LIST_DIR}/Include)
