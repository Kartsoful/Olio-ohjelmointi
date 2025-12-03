cmake_minimum_required(VERSION 3.16)

project(VK5_Viikkokokeen_tehtavat LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(VK5_Viikkokokeen_tehtavat main.cpp)

include(GNUInstallDirs)
install(TARGETS VK5_Viikkokokeen_tehtavat
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
