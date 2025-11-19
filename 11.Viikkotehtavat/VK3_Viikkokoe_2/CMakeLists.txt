cmake_minimum_required(VERSION 3.16)

project(VK3_Viikkokoe_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(VK3_Viikkokoe_2 main.cpp
    grandfather.h grandfather.cpp
    father.h father.cpp
    son.h son.cpp)

include(GNUInstallDirs)
install(TARGETS VK3_Viikkokoe_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
