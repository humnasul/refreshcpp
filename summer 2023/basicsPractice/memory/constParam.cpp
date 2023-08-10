#include <iostream>

int main() {
	//const parameter - parameter that is effectively read-only
	//					code is more secure & conveys intent
	//					useful for references and pointers!!
	//					makes it so that references cannot be changed and addresses that a pointer is pointing to cannot be changed!!


	std::string name = "humna";
	int age = 19;

	printInfo(name, age);

	return 0;
}

void printInfo(const std::string name, const int age) {
	//name = " ";
	//age = 0;
	// you do not want this to happen!! make constants
	// when you make name and age into constants, you will have an error when changing value
	std::cout << name << '\n';
	std::cout << age << '\n';
}