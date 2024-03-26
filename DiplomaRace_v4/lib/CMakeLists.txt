CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

project(RaceLibrary)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

set(SOURCE_DLL Transport.cpp SuperBoots.cpp Camel.cpp SuperCamel.cpp Centaur.cpp GroundTransport.cpp AirTransport.cpp Eagle.cpp SuperCarpet.cpp Nimbus2000.cpp Race.cpp RaceAir.cpp RaceGround.cpp DialogFunctions.cpp)

set(HEADERS_DLL Transport.h SuperBoots.h Camel.h SuperCamel.h Centaur.h GroundTransport.h AirTransport.h Eagle.h SuperCarpet.h Nimbus2000.h Race.h RaceAir.h RaceGround.h DialogFunctions.h)

#include_directories(RaceLibrary PUBLIC ${PROJECT_SOURCE_DIR}/lib/src})
#add_executable(${PROJECTNAME} ${SOURCES} ${HEADERS})

add_library(lib_dll SHARED ${SOURCE_DLL} ${HEADERS_DLL})

