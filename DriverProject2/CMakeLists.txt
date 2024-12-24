set(ProjectName "project_driver2")

add_executable(${ProjectName} "main.cpp")

target_link_libraries(${ProjectName} lib2)