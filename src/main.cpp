// Copyright 2023 Pavel Cheklin
#include <iostream>

#include "MyClass.hpp"

int main() {
    auto a = MyClass("Ivan");

    std::cout << a.getName() << std::endl;

    return 0;
}
