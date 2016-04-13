project(mgr)
cmake_minimum_required(VERSION 2.8)
find_package( OpenCV REQUIRED )
include_directories("Include")
file(GLOB SOURCES "Source/*.cpp")
file(GLOB HEADERS "Include/*.h")
add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})
target_link_libraries( ${PROJECT_NAME} ${OpenCV_LIBS} )

