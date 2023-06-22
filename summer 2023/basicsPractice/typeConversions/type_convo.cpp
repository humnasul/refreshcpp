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

	//grades example below
	int correct = 8;
	int questions = 10;
	//double score = correct / questions * 100; OLD - you need to cast questions as a double!
	double score = correct / (double)questions * 100;

	std::cout << score << "%";
	return 0;
}