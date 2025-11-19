cmake_minimum_required(VERSION 3.16)

project(VK2_1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(VK2_1 main.cpp
    apartment.h apartment.cpp
    vehicle.h vehicle.cpp)

include(GNUInstallDirs)
install(TARGETS VK2_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
