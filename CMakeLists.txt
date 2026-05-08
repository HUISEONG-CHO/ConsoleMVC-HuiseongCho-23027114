cmake_minimum_required(VERSION 3.15)
project(ConsoleMVC CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ConsoleMVC
    src/main.cpp
    src/model/Item.cpp
    src/controller/ItemController.cpp
)
target_include_directories(ConsoleMVC PRIVATE src)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_subdirectory(tests)
