#include <gtest/gtest.h>
#include "model/Item.h"

TEST(ItemTest, ConstructorSetsFields) {
    Item item(1, "SampleA", 100);
    EXPECT_EQ(item.getId(), 1);
    EXPECT_EQ(item.getName(), "SampleA");
    EXPECT_EQ(item.getQuantity(), 100);
}

TEST(ItemTest, DefaultConstructor) {
    Item item;
    EXPECT_EQ(item.getId(), 0);
    EXPECT_EQ(item.getName(), "");
    EXPECT_EQ(item.getQuantity(), 0);
}

TEST(ItemTest, GetterReturnsCorrectValues) {
    Item item(42, "TestItem", 999);
    EXPECT_EQ(item.getId(), 42);
    EXPECT_EQ(item.getName(), "TestItem");
    EXPECT_EQ(item.getQuantity(), 999);
}
