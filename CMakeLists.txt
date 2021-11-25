cmake_minimum_required(VERSION 3.16)
project(Template)

set(CMAKE_CXX_STANDARD 17)

# Add custom cmake modules to the path
list(APPEND CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

find_package(GTest REQUIRED)
include(GTestTarget)
find_package(GMock REQUIRED)
include(TestTarget)

enable_testing()

add_executable(main main.cpp)
target_link_libraries(main library)

add_subdirectory(library)