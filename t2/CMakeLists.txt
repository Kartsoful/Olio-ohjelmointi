cmake_minimum_required(VERSION 3.16)

project(t2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(t2 main.cpp
    myclass.h myclass.cpp)

include(GNUInstallDirs)
install(TARGETS t2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
