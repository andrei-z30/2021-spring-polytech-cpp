#include "functions.h"
#include "gtest/gtest.h"

TEST(testAverageArray, Single) {
    int array[] = {0};
    int size = 1;
    EXPECT_EQ(averageArray(array, size), 0);
    array[0] = {65};
    EXPECT_EQ(averageArray(array, size), 65);
    array[0] = {-58};
    EXPECT_EQ(averageArray(array, size), -58);
}

TEST(testAverageArray, ManyValue) {
    int array[] = {-632, 0, 632};
    int size = 3;
    EXPECT_EQ(averageArray(array, size), 0);
    array[0] = 5;
    array[1] = 10;
    array[2] = 15;
    EXPECT_EQ(averageArray(array, size), 10);
    array[0] = -40;
    array[1] = 30;
    array[2] = -20;
    EXPECT_EQ(averageArray(array, size), -10);
    array[0] = 10;
    array[1] = 11;
    size = 2;
    EXPECT_EQ(averageArray(array, size), 10.5);
}