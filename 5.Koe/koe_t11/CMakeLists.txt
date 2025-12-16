cmake_minimum_required(VERSION 3.16)

project(koe_t11 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(koe_t11 main.cpp
    processor.h processor.cpp
    computer.h computer.cpp
)

include(GNUInstallDirs)
install(TARGETS koe_t11
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
