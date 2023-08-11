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
	
	return 0;
}