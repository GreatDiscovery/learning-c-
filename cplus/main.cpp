#include <iostream>
#include <string>
#include "gtest/gtest.h"
using namespace std;

#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
}





//int main() {
//    std::cout << "Hello, World!" << std::endl;
//    return 0;
//}

