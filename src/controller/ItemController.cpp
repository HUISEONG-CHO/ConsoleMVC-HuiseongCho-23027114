#include "ItemController.h"
#include <stdexcept>
#include <algorithm>

void ItemController::addItem(const Item& item) {
    items.push_back(item);
}

Item ItemController::getItem(int id) const {
    for (const auto& item : items) {
        if (item.getId() == id) return item;
    }
    throw std::runtime_error("Item not found: " + std::to_string(id));
}

std::vector<Item> ItemController::getAllItems() const {
    return items;
}

void ItemController::updateItem(int id, const Item& updated) {
    for (auto& item : items) {
        if (item.getId() == id) {
            item = updated;
            return;
        }
    }
    throw std::runtime_error("Item not found: " + std::to_string(id));
}

void ItemController::deleteItem(int id) {
    items.erase(
        std::remove_if(items.begin(), items.end(),
            [id](const Item& item) { return item.getId() == id; }),
        items.end()
    );
}
