#include <gtest/gtest.h>
#include <stdexcept>
#include "controller/ItemController.h"

class ItemControllerTest : public ::testing::Test {
protected:
    ItemController controller;
};

TEST_F(ItemControllerTest, AddItemAndGetAll) {
    controller.addItem(Item(1, "ItemA", 10));
    controller.addItem(Item(2, "ItemB", 20));

    auto items = controller.getAllItems();
    ASSERT_EQ(items.size(), 2u);
    EXPECT_EQ(items[0].getId(), 1);
    EXPECT_EQ(items[1].getId(), 2);
}

TEST_F(ItemControllerTest, GetItemById) {
    controller.addItem(Item(1, "ItemA", 10));

    Item found = controller.getItem(1);
    EXPECT_EQ(found.getId(), 1);
    EXPECT_EQ(found.getName(), "ItemA");
    EXPECT_EQ(found.getQuantity(), 10);
}

TEST_F(ItemControllerTest, UpdateItem) {
    controller.addItem(Item(1, "ItemA", 10));
    controller.updateItem(1, Item(1, "ItemA_Updated", 99));

    Item updated = controller.getItem(1);
    EXPECT_EQ(updated.getName(), "ItemA_Updated");
    EXPECT_EQ(updated.getQuantity(), 99);
}

TEST_F(ItemControllerTest, DeleteItem) {
    controller.addItem(Item(1, "ItemA", 10));
    controller.addItem(Item(2, "ItemB", 20));
    controller.deleteItem(1);

    auto items = controller.getAllItems();
    ASSERT_EQ(items.size(), 1u);
    EXPECT_EQ(items[0].getId(), 2);
}

TEST_F(ItemControllerTest, GetItemThrowsOnInvalidId) {
    EXPECT_THROW(controller.getItem(999), std::runtime_error);
}
