#include <iostream>

int main() {
	//pointers - variable that stores a memory address of another variable

	// & is address of operator
	// * dereference operator

	std::string name = "Humna";
	int age = 21;

	std::string* pName = &name;
	//how to make a pointer
	//contains memory address as value
	// use deference operator (*) to access value in pointer!

	int* pAge = &age;

	return 0;
}