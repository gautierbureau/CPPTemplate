//
// Created by bureaugau on 25/11/2021.
//

#include <gtest/gtest.h>

#include "Library.h"

TEST(TestLibrary, hello) {
  Library lib;
  ASSERT_EQ(lib.hello(), "hello");
}

TEST(TestLibrary, hello2) {
  Library lib;
  ASSERT_EQ(lib.hello(), "hello");
}
