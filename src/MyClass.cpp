// Copyright 2023 Pavel Cheklin
#include "MyClass.hpp"

#include <string>
#include <cstdlib>

MyClass::MyClass(std::string aName) : mName(aName) {
}

std::string MyClass::getName() {
    return mName;
}
