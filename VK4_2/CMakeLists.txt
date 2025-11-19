cmake_minimum_required(VERSION 3.16)

project(VK4_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(VK4_2 main.cpp
    classa.h classa.cpp
    classb.h classb.cpp)

include(GNUInstallDirs)
install(TARGETS VK4_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
