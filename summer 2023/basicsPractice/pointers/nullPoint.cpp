#include <iostream>

int main() {
	//Null value - a special value that means something has no value
	// when a pointer is holding a null value, that pointer is not pointing at anything (null pointer)

	//nullptr = keyword that represents a null pointer literal

	//nullptrs - helpful when determining if an address was successfully assigned to a pointer

	int* pointer = nullptr;
	// if you do not want to assign a value right away, this is standard
	// do not dereference a pointer pointing at null!
	int x = 123;

	pointer = &x;

	if (pointer == nullptr) {
		std::cout << "address was not assigned!\n";
		//std::cout << *pointer; - NO
	}
	else {
		std::cout << "address was successfully assigned\n";
		std::cout << *pointer;
	}

	return 0;
}