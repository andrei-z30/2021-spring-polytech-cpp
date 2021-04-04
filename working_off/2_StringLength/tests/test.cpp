#include "functions.h"
#include "gtest/gtest.h"

TEST(testLengthString, Zero) {
    char str[] = "";
    EXPECT_EQ(lenStr(str), 0);
}

TEST(testLengthString, Single) {
    char str[] = "T";
    EXPECT_EQ(lenStr(str), 1);
}

TEST(testLengthString, ManyChar) {
    char str[] = "Test";
    EXPECT_EQ(lenStr(str), 4);
    char str2[] = "Test completed";
    EXPECT_EQ(lenStr(str2), 14);
}