#include <gtest/gtest.h>
#include "../include/addfun.hpp"
// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
//   // Expect two strings not to be equal./
   EXPECT_STRNE("hello", "world"); // Expect equality.
   EXPECT_EQ(7 * 6, 42);
 }
TEST(add,TEST_1_plus_1_Return_2){
  EXPECT_EQ(2,add(1,1));
}
