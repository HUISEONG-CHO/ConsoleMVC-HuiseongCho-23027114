#include <gtest/gtest.h>
#include "view/ItemView.h"

class ItemViewTest : public ::testing::Test {
protected:
    ItemView view;
};

TEST_F(ItemViewTest, ShowItemContainsIdNameQuantity) {
    testing::internal::CaptureStdout();
    view.showItem(Item(1, "ItemA", 10));
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("1"),     std::string::npos);
    EXPECT_NE(output.find("ItemA"), std::string::npos);
    EXPECT_NE(output.find("10"),    std::string::npos);
}

TEST_F(ItemViewTest, ShowAllItemsContainsAllItems) {
    testing::internal::CaptureStdout();
    view.showAllItems({ Item(1, "ItemA", 10), Item(2, "ItemB", 20) });
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("ItemA"), std::string::npos);
    EXPECT_NE(output.find("ItemB"), std::string::npos);
    EXPECT_NE(output.find("10"),    std::string::npos);
    EXPECT_NE(output.find("20"),    std::string::npos);
}

TEST_F(ItemViewTest, ShowMessageContainsMessage) {
    testing::internal::CaptureStdout();
    view.showMessage("Hello MVC");
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Hello MVC"), std::string::npos);
}
