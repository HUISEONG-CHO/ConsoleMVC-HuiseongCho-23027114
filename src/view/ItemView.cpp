#include "ItemView.h"
#include <iostream>

void ItemView::showItem(const Item& item) const {
    std::cout << "[Item] ID: " << item.getId()
              << " | Name: " << item.getName()
              << " | Quantity: " << item.getQuantity()
              << "\n";
}

void ItemView::showAllItems(const std::vector<Item>& items) const {
    std::cout << "=== Item List ===\n";
    for (const auto& item : items) {
        showItem(item);
    }
    std::cout << "=================\n";
}

void ItemView::showMessage(const std::string& message) const {
    std::cout << message << "\n";
}
