#include <iostream>

/*
* implicit conversion = automatic
* explicit conversion = precede value with new data type to convert
*/

int main() {

	int x = 3.14;
	std::cout << x;
	// the ".14" is truncated

	double x2 = 3.14;
	std::cout << x2;
	//prints out the decimal

	double x3 = (int)3.14;
	//truncates to 3

	char y = 100;
	std::cout << y;
	//converts y to associated ascii character and prints

	std::cout << (char)100;
	//converts value 100 to associated ascii and prints because of the (char)
	return 0;
}