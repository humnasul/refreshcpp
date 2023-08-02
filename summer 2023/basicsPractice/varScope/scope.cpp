#include <iostream>

int myNum = 3;
//global variable :)

int main() {
	int myNum = 1;
	std::cout << myNum;
	//prints local variable value (1)

	return 0;
}

void printNum() {
	//cannot access 'myNum' variable in main!!
}

void printNum2(int myNum) {
	std::cout << myNum;
	//has a diff scope from the 'myNum' in main - this works, but its 2 different vars!!
}

void printNum3() {
	std::cout << myNum;
}
//try to avoid global variables because it fills up global namespace
//variables stored within a function are more secure!!