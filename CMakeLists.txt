cmake_minimum_required(VERSION 3.16)

project(stupid_sort LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(stupid_sort main.cpp
    stupid_sort.h stupid_sort.cpp)

include(GNUInstallDirs)
install(TARGETS stupid_sort
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
