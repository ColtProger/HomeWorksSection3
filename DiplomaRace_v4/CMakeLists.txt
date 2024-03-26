CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

project(RaceProject  VERSION 1.0)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib) 
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(lib)

set(SOURCE_EXE main.cpp)

add_executable(RaceProject ${SOURCE_EXE})

target_include_directories(RaceProject PUBLIC  "${PROJECT_SOURCE_DIR}/lib")

target_link_libraries(RaceProject lib_dll)

