cmake_minimum_required(VERSION 3.10)
project(LAB1 VERSION 0.1.0 LANGUAGES CXX)

if (DEFINED VERSION_PROJECT)
    add_compile_definitions(VERSION_PROJECT="${VERSION_PROJECT}")
else()
    add_compile_definitions(VERSION_PROJECT="0")
endif()

add_executable(LAB1 main.cpp)

set(CPACK_PACKAGE_NAME "LAB1")
set(CPACK_PACKAGE_VERSION ${PROJECT_VERSION})

if(WIN32)
    set(CPACK_GENERATOR "ZIP")
endif()

if(UNIX AND NOT APPLE)
    set(CPACK_GENERATOR "DEB")
    set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Konstantin Apranovich <apranovichkostya@gmail.com>")
endif()

install(TARGETS LAB1 DESTINATION bin)
include(CPack)