#include "gtest/gtest.h"
#include <smart_pointer.h>

TEST(testSmartPointer, normal) {
    SmartPointer<int> ptr1(new int(5));
    SmartPointer<int> ptr2(ptr1);
    SmartPointer<int> ptr3(new int(1));
    SmartPointer<char> ptr4(new char('*'));
    EXPECT_EQ(SmartPointer<int>::COUNT, 3);
    EXPECT_EQ(SmartPointer<char>::COUNT, 1);
}