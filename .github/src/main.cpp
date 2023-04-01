#include "MyClass.hpp"

#include <iostream>

int main() {
	auto a = MyClass("Ivan");
	
	std::cout << a.getName() << std::endl;

	return 0;
}
