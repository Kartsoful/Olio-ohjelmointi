cmake_minimum_required(VERSION 3.16)

project(VK3_Viikkokoe LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(VK3_Viikkokoe main.cpp
    calculator.h calculator.cpp
    basicalu.h basicalu.cpp)

include(GNUInstallDirs)
install(TARGETS VK3_Viikkokoe
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
