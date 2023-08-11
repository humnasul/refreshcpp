#include <iostream>

void walk(int steps);

int main() {
	//recursion - a programming technique where a function invokes itself from within
	//				break a complex concept into repeatable single steps
	//				iterative vs recursive!
	//				recursion can use more memory and be slower :( depends on case

	walk(100);



	return 0;
}

void walk(int steps) {
	/*
	for (int i = 0; i < steps; i++) {
		std::cout << "You take a step\n";
	}*/
	if (steps > 0) {
		std::cout << "You take a step\n";
		walk(steps - 1);
		//calling function within itself
	}
}