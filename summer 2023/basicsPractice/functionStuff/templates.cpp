#include <iostream>

template <typename T, typename U>
// adding 'typename U' allows you to have up to 2 vars of diff types!

auto max(T x, U y) {
	//use a generic 'T' instead of 'int' or 'double'
	//you can use 'T' or 'U' as types for x and y!
	return (x > y) ? x : y;
}
//return type 'auto' has the compiler decide the appropriate return type!

int main() {
	// function template - describes what a function looks like
	//	can be used to generate as many overloaded functions as needed,
	//	each using different data types

	std::cout << max(1, 2) << '\n';
	//you can't use this with doubles, which is inconvenient! - you can make an overloaded function, but that's annoying

	return 0;
}