cmake_minimum_required(version 2.8)

set(CMAKE_CXX_FLAGS "-std=c++11")

find_package(Opencv REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(imageBasics imageBasics.cpp)

#链接Opencv库
target_link_libraries(imageBasics ${OpenCV_LIBS})