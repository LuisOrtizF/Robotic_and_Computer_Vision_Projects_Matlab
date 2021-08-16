cmake_minimum_required (VERSION 2.8)
project (libcbdetect)

include_directories ("${PROJECT_SOURCE_DIR}/fce")
add_subdirectory (fce) 
 
# add the executable
add_executable (${PROJECT_NAME} main.cpp)
target_link_libraries (${PROJECT_NAME} fce)

find_package( OpenCV 3.4.1 REQUIRED )
target_link_libraries( ${PROJECT_NAME} ${OpenCV_LIBS} )