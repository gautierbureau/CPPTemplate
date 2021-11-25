add_executable(TestLibrary Test.cpp)

target_link_libraries(TestLibrary library Test)

add_test(NAME TestLibrary
  COMMAND ${CMAKE_COMMAND} -E env "LD_LIBRARY_PATH=${GTEST_ROOT}/lib:$ENV{LD_LIBRARY_PATH}" $<TARGET_FILE:TestLibrary>
  )

# Using gtest_discover_tests forces me to add
# LD_LIBRARY_PATH=/home/bureaugau/Projects/dynamo/dynawo/install-clion/3rdParty/debug/googletest/lib
# to cmake config and to runtime config
# gtest_discover_tests(TestLibrary)
