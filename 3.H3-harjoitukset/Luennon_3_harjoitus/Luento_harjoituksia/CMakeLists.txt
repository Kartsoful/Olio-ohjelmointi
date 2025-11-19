cmake_minimum_required(VERSION 3.16)

project(Luento_harjoituksia LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Luento_harjoituksia main.cpp
    utils.h
    utils.cpp
)

include(GNUInstallDirs)
install(TARGETS Luento_harjoituksia
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
