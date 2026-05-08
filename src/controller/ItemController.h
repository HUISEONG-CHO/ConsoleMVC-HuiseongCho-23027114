#pragma once
#include <vector>
#include "model/Item.h"

class ItemController {
public:
    void addItem(const Item& item);
    Item getItem(int id) const;
    std::vector<Item> getAllItems() const;
    void updateItem(int id, const Item& updated);
    void deleteItem(int id);

private:
    std::vector<Item> items;
};
