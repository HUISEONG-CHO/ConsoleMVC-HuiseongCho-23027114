#include "Item.h"

Item::Item() : id(0), name(""), quantity(0) {}

Item::Item(int id, const std::string& name, int quantity)
    : id(id), name(name), quantity(quantity) {}

int Item::getId() const { return id; }
const std::string& Item::getName() const { return name; }
int Item::getQuantity() const { return quantity; }
