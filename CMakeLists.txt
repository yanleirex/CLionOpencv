cmake_minimum_required(VERSION 3.6)
project(CLionOpencv)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
find_package(OpenCV REQUIRED)

set(SOURCE_FILES main.cpp)
add_executable(CLionOpencv ${SOURCE_FILES})
target_link_libraries(CLionOpencv ${OpenCV_LIBS})