# set variables
message(STATUS "CMake project include dir: " ${PROJECT_INCLUDE_DIR})

# configures the libraries going to build
add_library(
    psp
    addfun.cpp
)
list(APPEND EXTRA_LIBS psp)
target_include_directories(psp PUBLIC ${PROJECT_INCLUDE_DIR})

# configure a header file to pass some of the CMake settings to the source code
#configure_file(psp.config.hpp.in ${PROJECT_INCLUDE_DIR}/psp.config.hpp)

# print default install path
message(STATUS "Default install prefix path is: " ${CMAKE_INSTALL_PREFIX})
# install all libraries to system
install(TARGETS ${EXTRA_LIBS} DESTINATION lib)
install(DIRECTORY ${PROJECT_INCLUDE_DIR} DESTINATION include)

