#include "functions.h"
#include "gtest/gtest.h"

TEST(testArrayMaxMinComp, Single) {
    int array[] = {0};
    EXPECT_EQ(maxValueArray(array, 1), 0);
    EXPECT_EQ(minValueArray(array, 1), 0);
    int compValue = 0;
    EXPECT_EQ(countValueArray(array, 1, compValue), 1);
    compValue = 1;
    EXPECT_EQ(countValueArray(array, 1, compValue), 0);
    array[0] = 555;
    EXPECT_EQ(maxValueArray(array, 1), 555);
    EXPECT_EQ(minValueArray(array, 1), 555);
    compValue = 555;
    EXPECT_EQ(countValueArray(array, 1, compValue), 1);
    compValue = 43;
    EXPECT_EQ(countValueArray(array, 1, compValue), 0);
    array[0] = -125;
    EXPECT_EQ(maxValueArray(array, 1), -125);
    EXPECT_EQ(minValueArray(array, 1), -125);
    compValue = -125;
    EXPECT_EQ(countValueArray(array, 1, compValue), 1);
    compValue = -43;
    EXPECT_EQ(countValueArray(array, 1, compValue), 0);
}

TEST(testArrayMaxMinComp, positiveValue) {
    int array[8] = {0, 5, 10, 444, 1243, 43, 1, 43};
    EXPECT_EQ(maxValueArray(array, 8), 1243);
    EXPECT_EQ(minValueArray(array, 8), 0);
    int compValue = 0;
    EXPECT_EQ(countValueArray(array, 8, compValue), 1);
    compValue = 43;
    EXPECT_EQ(countValueArray(array, 8, compValue), 2);
    compValue = 64;
    EXPECT_EQ(countValueArray(array, 8, compValue), 0);
}

TEST(testArrayMaxMinComp, negativeValue) {
    int array[8] = {0, -5, -10, -444, -1243, -43, -1, -43};
    EXPECT_EQ(maxValueArray(array, 8), 0);
    EXPECT_EQ(minValueArray(array, 8), -1243);
    int compValue = 0;
    EXPECT_EQ(countValueArray(array, 8, compValue), 1);
    compValue = -43;
    EXPECT_EQ(countValueArray(array, 8, compValue), 2);
    compValue = -64;
    EXPECT_EQ(countValueArray(array, 8, compValue), 0);
}

TEST(testArrayMaxMinComp, allValue) {
    int array[16] = {0, -5, -10, -444, -2543, -43, -1, -43, 0, 5, 10, 444, 31243, 43, 1, 43};
    EXPECT_EQ(maxValueArray(array, 16), 31243);
    EXPECT_EQ(minValueArray(array, 16), -2543);
    int compValue = 0;
    EXPECT_EQ(countValueArray(array, 16, compValue), 2);
    compValue = -43;
    EXPECT_EQ(countValueArray(array, 16, compValue), 2);
    compValue = -64;
    EXPECT_EQ(countValueArray(array, 16, compValue), 0);
}