cmake_minimum_required (VERSION 2.8)
project (matlab2cpp)

include_directories ("${PROJECT_SOURCE_DIR}/libcbdetect")
add_subdirectory (libcbdetect) 
 
# add the executable
add_executable (matlab2cpp main.cpp)
target_link_libraries (matlab2cpp libcbdetect)