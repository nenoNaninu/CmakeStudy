cmake_minimum_required(VERSION 3.5.1)
project(MytestCode1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_MODULE_PATH $ENV{HOME}/oss/cotire/CMake) # 追加
include(cotire)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
set_directory_properties(COTIRE_PREFIX_HEADER_INCLUDE_PATH ${OpenCV_INCLUDE_DIRS}) # 外部プロジェクトのディレクトリ )

add_executable(MytestCode1 main.cpp MyTest.cpp MyTest.h)
target_link_libraries(MytestCode1 ${OpenCV_LIBRARIES})
cotire(MytestCode1)
#set(COTIRE_MINIMUM_NUMBER_OF_TARGET_SOURCES 2)
message(STATUS "*** dump start cmake variables ***")
get_cmake_property(_variableNames VARIABLES)
foreach(_variableName ${_variableNames})
    message(STATUS "${_variableName}=${${_variableName}}")
endforeach()
message(STATUS "*** dump end ***")