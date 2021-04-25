#include "gtest/gtest.h"
#include <smart_pointer.h>

TEST(testSmartPointer, copy) {
    SmartPointer<int> ptr1(new int(5));
    SmartPointer<int> ptr2(ptr1);
    SmartPointer<int> ptr3(ptr2);
    EXPECT_EQ(ptr1.GetCount(), 3);
    EXPECT_EQ(ptr2.GetCount(), 3);
    EXPECT_EQ(ptr3.GetCount(), 3);
    EXPECT_EQ(*ptr1, *ptr2);
    EXPECT_EQ(*ptr2, *ptr3);
}

TEST(testSmartPointer, normal) {
    SmartPointer<int> ptr1(new int(1));
    SmartPointer<int> ptr2(new int(2));
    SmartPointer<int> ptr3(new int(3));
    EXPECT_EQ(ptr1.GetCount(), 1);
    EXPECT_EQ(ptr2.GetCount(), 1);
    EXPECT_EQ(ptr3.GetCount(), 1);
}