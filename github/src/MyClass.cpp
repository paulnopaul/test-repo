#include "MyClass.hpp"

#include <string>

MyClass::MyClass(std::string aName) :
	mName(aName)
{
}

std::string MyClass::getName()
{
	return mName;
}
