#include <iostream>

int main() {

	//sizeof() = determines the size in bytes of a variable, dataType, class, object, etc.

	std::string name = "coco";
	char meow = 'W';
	bool cat = true;
	double gpa = 2.5;

	std::cout << sizeof(gpa) << " bytes\n";
	//8 bytes

	std::cout << sizeof(name) << " bytes\n";
	//32 bytes - even if the size of the string changes
	//this is because a string is a reference data type!!

	std::cout << sizeof(meow) << " bytes\n";
	std::cout << sizeof(cat) << " bytes\n";
	//1 byte

	return 0;

}