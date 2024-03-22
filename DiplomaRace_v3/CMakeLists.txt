CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

project(RaceProject VERSION 1.0)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

set(SOURCE_EXE main.cpp)

add_executable(RaceProject ${SOURCE_EXE})

set(SOURCE_DLL Transport.cpp SuperBoots.cpp Camel.cpp SuperCamel.cpp Centaur.cpp GroundTransport.cpp AirTransport.cpp Eagle.cpp SuperCarpet.cpp Nimbus2000.cpp Race.cpp RaceAir.cpp RaceGround.cpp MyException.cpp DialogFunctions.cpp)

add_library(RaceLibrary SHARED ${SOURCE_DLL})

target_link_libraries(RaceProject RaceLibrary)