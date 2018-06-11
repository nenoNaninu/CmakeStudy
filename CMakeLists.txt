cmake_minimum_required(VERSION 3.10)
project(MytestCode1)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(MytestCode1 main.cpp MyTest.cpp)
target_link_libraries(MytestCode1 ${OpenCV_LIBRARIES})
