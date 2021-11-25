add_library(library SHARED Library.cpp Foo.cpp)

target_include_directories(library
  INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
  )

add_subdirectory(test)