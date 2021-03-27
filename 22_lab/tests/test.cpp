#include "functions.h"
#include "gtest/gtest.h"

// Тесты тут
TEST(Arrays, search_place_number) {
    int array[14] = {1, 5, 12, 53, 24, 6, 7, 21, 1, 4, 21, 81, 1, 54};
    EXPECT_EQ(find_number(array, 14, 5), 2);
    EXPECT_EQ(find_number(array, 14, 1), 1);
    EXPECT_EQ(find_number(array, 14, 2), 0);
    EXPECT_NE(find_number(array, 14, 0), 1);
    EXPECT_NE(find_number(array, 14, 1), 9);
    EXPECT_NE(find_number(array, 14, 81), 11);

}