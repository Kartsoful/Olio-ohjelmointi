cmake_minimum_required(VERSION 3.16)

project(Luokka_esim2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Luokka_esim2 main.cpp
    person.h person.cpp)

include(GNUInstallDirs)
install(TARGETS Luokka_esim2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
