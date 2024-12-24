cmake_minimum_required(VERSION 3.12)

project ("CMakeProjectTemplate")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED On)
set(CMAKE_CXX_EXTENSIONS Off)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/lib)

# Sub-projects.
add_subdirectory("Libs/Lib1")
add_subdirectory("Libs/Lib2")
add_subdirectory("DriverProject")
add_subdirectory("DriverProject2")
