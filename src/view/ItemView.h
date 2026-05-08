#pragma once
#include <string>
#include <vector>
#include "model/Item.h"

class ItemView {
public:
    void showItem(const Item& item) const;
    void showAllItems(const std::vector<Item>& items) const;
    void showMessage(const std::string& message) const;
};
