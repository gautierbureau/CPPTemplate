//
// Created by bureaugau on 25/11/2021.
//

#include <gtest/gtest.h>
#include "Library.h"

// Demonstrate some basic assertions.
TEST(LibraryTest, hello) {
  Library lib;
  ASSERT_EQ(lib.hello(), "hello");
}
