#include <iostream>
#include "name.h"

int main()
{
	Name nameObject;
	std::string name;
	nameObject.getFullName(name);
	std::cout << "Hello, " << name << "!\n";
}