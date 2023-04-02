// Copyright 2023 Pavel Cheklin
#pragma once

#include <string>
#include <cstdlib>

class MyClass {
 public:
    explicit MyClass(std::string aName);

    std::string getName();

    void func() { malloc(10); }
 private:
    std::string mName;
};
