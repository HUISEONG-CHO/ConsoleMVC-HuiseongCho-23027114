#pragma once
#include <string>

class Item {
public:
    Item();
    Item(int id, const std::string& name, int quantity);

    int getId() const;
    const std::string& getName() const;
    int getQuantity() const;

private:
    int id;
    std::string name;
    int quantity;
};
