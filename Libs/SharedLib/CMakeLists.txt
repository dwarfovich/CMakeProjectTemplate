set(LIB_NAME shared_lib CACHE INTERNAL "Library name")

add_library(${LIB_NAME} SHARED "src/shared_lib.cpp")
 
target_include_directories(${LIB_NAME} PUBLIC "include" PRIVATE ${PROJECT_SOURCE_DIR} "include/shared_lib")

