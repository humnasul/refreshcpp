#include <iostream>

template <typename T>

T max(T x, T y) {
	//use a generic 'T' instead of 'int' or 'double'
	return (x > y) ? x : y;
}

int main() {
	// function template - describes what a function looks like
	//	can be used to generate as many overloaded functions as needed,
	//	each using different data types

	std::cout << max(1, 2) << '\n';
	//you can't use this with doubles, which is inconvenient! - you can make an overloaded function, but that's annoying

	return 0;
}