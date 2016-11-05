cmake_minimum_required(VERSION 2.6)
project(my_cmake_project)

# The version number.
set(MY_CMAKE_PROJECT_VERSION_MAJOR 1)
set(MY_CMAKE_PROJECT_VERSION_MINOR 0)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file(
  "${PROJECT_SOURCE_DIR}/Config.h.in"
  "${PROJECT_BINARY_DIR}/Config.h"
  )

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")

include_directories("${PROJECT_SOURCE_DIR}/logger")
add_subdirectory(logger)

add_executable(my_cmake_project main.cpp)
target_link_libraries (my_cmake_project Logger)
