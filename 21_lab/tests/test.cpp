#include "functions.h"
#include "gtest/gtest.h"

// Тесты тут
TEST(array_test, max_element) {
    int array[10] = {0};
    int from_number = 5;
    generate(array, 10, from_number);
    EXPECT_EQ(find_max(array, 10), from_number + 9);

}

TEST(array_test, min_element
) {
    int array[15] = {0};
    int from_number = 3;
    generate(array, 15, from_number);
    EXPECT_EQ(find_min(array, 15), from_number);

}

TEST(array_test, cnt_repeat
) {
    int array[5] = {0};
    int from_number = 6;
    generate(array, 5, from_number);
    EXPECT_EQ(cnt_number(array, 5, from_number),
              1);
    EXPECT_EQ(cnt_number(array, 5, from_number + 1),
              1);
    EXPECT_EQ(cnt_number(array, 5, from_number + 3),
              1);

}