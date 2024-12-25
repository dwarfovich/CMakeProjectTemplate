set(LIB_NAME lib2 CACHE INTERNAL "Library name")

add_library(${LIB_NAME} OBJECT "src/lib2.cpp")
set_property(TARGET ${LIB_NAME} PROPERTY POSITION_INDEPENDENT_CODE 1)
# Shared and static libraries built from the same object files.
add_library(${LIB_NAME}_shared SHARED $<TARGET_OBJECTS:${LIB_NAME}>)
add_library(${LIB_NAME}_static STATIC $<TARGET_OBJECTS:${LIB_NAME}>)

target_include_directories(${LIB_NAME} PUBLIC "include" PRIVATE ${PROJECT_SOURCE_DIR} "include/lib2")

set_target_properties(${LIB_NAME} PROPERTIES PUBLIC_HEADER "include/lib2/lib2.hpp")
  