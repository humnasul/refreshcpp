#include <iostream>

namespace first {
	int x = 1;
}

namespace second {
	int x = 2;
}
// namespaces allow for variables of the same name, as long as they are placed in diff namespaces
int main2() {
	using namespace std;
	// saves typing - std:: has a variety of entities within it

	/* using namespace first;
	uses entities within first namespace by default */

	/* using namespace second;
	uses entities within second namespace by default */
	
	const int NUM = 5;
	// value cannot be changed, constant
	// recommended to be caps
	
	std::cout << first::x;
	std::cout << second::x;
	// "first" and "second" are known as scope resolution operator

	return 0;
}