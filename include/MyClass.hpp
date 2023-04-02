// Copyright 2023 Pavel Cheklin
#pragma once

#include <string>
#include <cstdlib>

class MyClass {
 public:
    explicit MyClass(std::string aName);

    std::string getName();

    void func() { void* x = malloc(10); x = NULL; }
 private:
    std::string mName;
};
