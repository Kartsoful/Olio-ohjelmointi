cmake_minimum_required(VERSION 3.16)

project(KoeTehtavia1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(KoeTehtavia1 main.cpp
    car.h car.cpp)

include(GNUInstallDirs)
install(TARGETS KoeTehtavia1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
