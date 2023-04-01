#pragma once

#include <string>

class MyClass
{
public:
	MyClass(std::string aName);

	std::string getName();
private:
	std::string mName;
};
