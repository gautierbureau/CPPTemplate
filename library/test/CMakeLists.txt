add_executable(TestLibrary TestLibrary.cpp)

target_link_libraries(TestLibrary library Test)

add_test(NAME TestLibrary
  COMMAND ${CMAKE_COMMAND} -E env "LD_LIBRARY_PATH=${GTEST_ROOT}/lib:$ENV{LD_LIBRARY_PATH}" $<TARGET_FILE:TestLibrary>
  )

add_executable(TestFoo TestFoo.cpp)

target_link_libraries(TestFoo library Test)

add_test(NAME TestFoo
  COMMAND ${CMAKE_COMMAND} -E env "LD_LIBRARY_PATH=${GTEST_ROOT}/lib:$ENV{LD_LIBRARY_PATH}" $<TARGET_FILE:TestFoo>
  )

# Using gtest_discover_tests forces me to add
# LD_LIBRARY_PATH=/home/bureaugau/Projects/dynamo/dynawo/install-clion/3rdParty/debug/googletest/lib
# to cmake config and to runtime config
# gtest_discover_tests(TestLibrary)
