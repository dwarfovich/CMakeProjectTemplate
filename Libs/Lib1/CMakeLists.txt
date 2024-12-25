set(LIB_NAME lib1 CACHE INTERNAL "Library name")

add_library(${LIB_NAME} "src/lib1.cpp")
 
target_include_directories(${LIB_NAME} PUBLIC "include" PRIVATE ${PROJECT_SOURCE_DIR} "include/lib1")

set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_LIBS ON)
#if(MSVC)
    #add_definitions("-DHAS_BOOST -D_WIN32_WINNT=0x0601")
#endif()
find_package(Boost 1.87 REQUIRED COMPONENTS thread filesystem)
include_directories(${Boost_INCLUDE_DIR})

target_link_libraries(${LIB_NAME} Boost::thread Boost::filesystem)