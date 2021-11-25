//
// Created by bureaugau on 25/11/2021.
//

#include <gtest/gtest.h>

#include "Foo.h"

TEST(TestFoo, value) {
Foo foo;
ASSERT_EQ(foo.value(), 12);
}