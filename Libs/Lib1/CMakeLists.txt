set(LIB_NAME lib1 CACHE INTERNAL "Library name")

add_library(${LIB_NAME} "src/lib1.cpp")
 
target_include_directories(${LIB_NAME} PUBLIC "include" PRIVATE ${PROJECT_SOURCE_DIR} "include/lib1")

