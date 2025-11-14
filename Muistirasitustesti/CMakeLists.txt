cmake_minimum_required(VERSION 3.16)

project(Muistirasitustesti LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Muistirasitustesti main.cpp
)

include(GNUInstallDirs)
install(TARGETS Muistirasitustesti
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
