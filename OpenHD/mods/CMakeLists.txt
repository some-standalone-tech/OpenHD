cmake_minimum_required(VERSION 3.16.3)
project(COHDMods)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(mods STATIC
    serial/serial.cpp
    serial/serial.h
)
add_library(mods::mods ALIAS mods)

target_include_directories(mods PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/..
)
