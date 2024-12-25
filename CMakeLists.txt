cmake_minimum_required(VERSION 3.12)

project ("CMakeProjectTemplate")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED On)
set(CMAKE_CXX_EXTENSIONS Off)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin)
# Uncomment to change static libs otput folder.
#set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/lib)

# Sub-projects.
add_subdirectory("Libs/SharedLib")
add_subdirectory("Libs/Lib1")
add_subdirectory("Libs/Lib2")
add_subdirectory("DriverProject")
add_subdirectory("DriverProject2")
