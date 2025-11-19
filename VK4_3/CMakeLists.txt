cmake_minimum_required(VERSION 3.16)

project(VK4_3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(VK4_3 main.cpp
    roof.h roof.cpp
    house.h house.cpp)

include(GNUInstallDirs)
install(TARGETS VK4_3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
