# configures required and project version/name
if (${CMAKE_SYSTEM_NAME} MATCHES "Linux")
    add_compile_options(-fPIC)
    link_directories("usr/lib/x86_64-linux-gnu")
    MESSAGE(STATUS "current platform: Linux ")
    SET(CMAKE_C_COMPILER /usr/bin/clang-13)
    SET(CMAKE_CXX_COMPILER /usr/bin/clang++-13)


elseif(${CMAKE_SYSTEM_NAME} MATCHES "Windows")
    MESSAGE(STATUS "current platform: Windows")
endif()
cmake_minimum_required(VERSION 3.14)
project(
    BestProcessSimulation VERSION 0.1
    DESCRIPTION "My custom process simulation library and cli-app."
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17) # switch to c++17
set(CMAKE_CXX_STANDARD_REQUIRED True) # prevent fall back behaviour
# modify flat to -std=c++17 rather than -std=gnu++17
set(CMAKE_CXX_EXTENSIONS OFF) 

# custom variables
set(CMAKE_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")
set(PROJECT_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")

add_subdirectory(src)
add_subdirectory(tests)
