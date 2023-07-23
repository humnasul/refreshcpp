#include <iostream>
using namespace std;

int main() {
	//ternary ? - replacement of if/else
	// condition ? expression 1 : expression 2

	int nom = 10;
	nom >= 15 ? cout << "yay!" : cout << "not big enough";

	int cat = 9;
	cat % 2 == 1 ? cout << "ODD" : cout << "EVEN";

	bool meow = true;
	meow ? cout << "cat!" : cout << "dog?";

	cout << (meow ? "yes cat" : "no cat");

	return 0;
}