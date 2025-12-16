cmake_minimum_required(VERSION 3.16)

project(koe_t9 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(koe_t9 main.cpp
    computer.h computer.cpp
    laptop.h laptop.cpp
)

include(GNUInstallDirs)
install(TARGETS koe_t9
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
