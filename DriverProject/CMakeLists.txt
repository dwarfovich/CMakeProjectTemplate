set(ProjectName "project_driver")

add_executable(${ProjectName} "main.cpp")

target_link_libraries(${ProjectName} lib1 shared_lib)