add_library(Test INTERFACE)
target_link_libraries(Test INTERFACE
  GTest::gmock_main
  GTest::gtest_main)