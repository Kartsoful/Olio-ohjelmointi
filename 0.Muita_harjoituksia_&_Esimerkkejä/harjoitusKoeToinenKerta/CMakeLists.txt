cmake_minimum_required(VERSION 3.16)

project(harjoitusKoeToinenKerta LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(harjoitusKoeToinenKerta main.cpp
    person.h person.cpp)

include(GNUInstallDirs)
install(TARGETS harjoitusKoeToinenKerta
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
