#include "functions.h"
#include "gtest/gtest.h"

TEST(testArray, min_value_in_array_left_border) {
    int array[6] = {1, 2, 3, 4, 5, 6};
    EXPECT_EQ(min_value_in_array(array, 6), 1);
}
TEST(testArray, min_value_in_array_right_border) {
    int array[6] = {2, 3, 4, 5, 6, 1};
    EXPECT_EQ(min_value_in_array(array, 6), 1);
}
TEST(testArray, min_value_in_array) {
    int array[6] = {2, 0, 4, 6, 5, 7};
    EXPECT_EQ(min_value_in_array(array, 6), 0);
}
TEST(testArray, min_value_in_array2) {
    int array[6] = {2, 2, 0, 6, 5, 7};
    EXPECT_EQ(min_value_in_array(array, 6), 0);
}
TEST(testArray, min_value_in_array3) {
    int array[6] = {2, 1, 4, 0, 5, 7};
    EXPECT_EQ(min_value_in_array(array, 6), 0);
}
TEST(testArray, min_value_in_array4) {
    int array[6] = {2, 1, 4, 6, 0, 7};
    EXPECT_EQ(min_value_in_array(array, 6), 0);
}
TEST(testArray, min_negative_value_in_array) {
    int array[6] = {-2, -1, -4, -3, -5, -7};
    EXPECT_EQ(min_value_in_array(array, 6), -7);
}
