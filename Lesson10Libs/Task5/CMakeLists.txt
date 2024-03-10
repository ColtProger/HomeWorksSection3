CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

project(FigureClient VERSION 1.0)

set(SOURCE_EXE FigureClient.cpp)

add_executable(FigureClient ${SOURCE_EXE})

set(SOURCE_DLL FigureLibrary.cpp Triangle.cpp EquilateralTriangle.cpp IsoscalestTriangle.cpp Parallelogram.cpp Quadrangle.cpp Rectangle.cpp Rhombus.cpp RightTriangle.cpp Square.cpp)

add_library(FigureLibrary SHARED ${SOURCE_DLL})

target_link_libraries(FigureClient FigureLibrary)