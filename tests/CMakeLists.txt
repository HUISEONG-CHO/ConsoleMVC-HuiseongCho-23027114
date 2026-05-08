add_executable(ConsoleMVC_Tests
    test_placeholder.cpp
    test_item.cpp
    test_item_controller.cpp
    test_item_view.cpp
    ${CMAKE_SOURCE_DIR}/src/model/Item.cpp
    ${CMAKE_SOURCE_DIR}/src/controller/ItemController.cpp
    ${CMAKE_SOURCE_DIR}/src/view/ItemView.cpp
)
target_include_directories(ConsoleMVC_Tests PRIVATE ${CMAKE_SOURCE_DIR}/src)
target_link_libraries(ConsoleMVC_Tests GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(ConsoleMVC_Tests)
