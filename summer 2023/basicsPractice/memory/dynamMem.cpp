#include <iostream> 

int main() {
	// dynamic memory - memory that is allocated after tha program is already compiled
	//					and running
	//					use the 'new' operator to allocate memory in the heap rather than the stack

	//					Useful for when we don't know how much memory we will need.
	//					Makes programs more flexible, especially when accepting user input.

	int* pNum = NULL;
	// standard default value to set to if not giving immediate value

	pNum = new int;

	*pNum = 19;

	std::cout << "address: " << pNum << '\n';
	std::cout << "value: " << *pNum << '\n';

	delete pNum;
	//whenever you use 'new', you should use the delete operator!


	//allocating memory dynamically is used when the memory size is unknown
	char* pGrades = NULL;
	int size;

	std::cout << "How many grades to enter in? :: ";
	std::cin >> size;


	pGrades = new char[size];
	//we don't know how many grades!

	for (int i = 0; i < size; i++) {
		std::cout << "Enter grade #" << i + 1 << ": ";
		std::cin >> pGrades[i];
	}

	for (int i = 0; i < size; i++) {
		std::cout << pGrades[i] << " ";
	}

	delete[] pGrades;
	//need to delete because used 'new'
	
	return 0;
}