#include <iostream>

//includes memory addresses and pass by memory + pass by reference

int main() {
	//memory address - a location in memory where data is stored
	//a memory address can be accessed with & (address-of operator)

	std::string name = "Humna";
	int age = 19;
	bool student = true;

	std::cout << &name << '\n';
	//provides hexadecimal address

	std::string x = "Kool-Aid";
	std::string y = "Water";
	std::string temp;

	std::cout << "X: " << x << '\n';
	std::cout << "Y: " << y << '\n';

	//swap(x, y);
	//does not change values!!
	//pass  by value - you need to pass by reference


	return 0;
}

void swap(std::string x, std::string y) {
	//made copies of x and y
	std::string temp;
	temp = x;
	x = y;
	y = temp;
}

void swap(std::string &x, std::string &y) {
	//passes memory addresses of variables
	std::string temp;
	temp = x;
	x = y;
	y = temp;
}