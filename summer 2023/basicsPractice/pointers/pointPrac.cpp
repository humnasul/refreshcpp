#include <iostream>

int main() {
	//pointers - variable that stores a memory address of another variable

	// & is address of operator
	// * dereference operator

	std::string name = "Humna";
	int age = 21;
	std::string freeCandy[5] = { "reeses1", "reeses2", "reeses3", "reeses4", "reeses5" };

	std::string* pName = &name;
	//how to make a pointer
	//contains memory address as value
	// use deference operator (*) to access value in pointer!

	int* pAge = &age;
	
	//std::string *pFreeCandy = &freeCandy;
	//this gives an error because array is already an address and does not need &!
	std::string* pFreeCandy = freeCandy;
	std::cout << *pFreeCandy << '\n';
	//gives first element of freeCandy!!

	return 0;
}