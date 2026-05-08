#include "controller/ItemController.h"
#include "view/ItemView.h"

int main() {
    ItemController controller;
    ItemView view;

    // Scenario 1: 아이템 3개 등록 → 전체 목록 출력
    controller.addItem(Item(1, "Apple",  50));
    controller.addItem(Item(2, "Banana", 30));
    controller.addItem(Item(3, "Orange", 40));
    view.showMessage("=== Scenario 1: Add 3 Items ===");
    view.showAllItems(controller.getAllItems());

    // Scenario 2: 특정 아이템 수정 → 수정된 목록 출력
    controller.updateItem(2, Item(2, "Banana", 99));
    view.showMessage("=== Scenario 2: Update Item 2 (quantity 30 -> 99) ===");
    view.showAllItems(controller.getAllItems());

    // Scenario 3: 특정 아이템 삭제 → 남은 목록 출력
    controller.deleteItem(1);
    view.showMessage("=== Scenario 3: Delete Item 1 ===");
    view.showAllItems(controller.getAllItems());

    return 0;
}
