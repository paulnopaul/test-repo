// Copyright 2023 Pavel Cheklin
#pragma once

#include <string>

class MyClass {
 public:
    explicit MyClass(std::string aName);

    std::string getName();
 private:
    std::string mName;
};
