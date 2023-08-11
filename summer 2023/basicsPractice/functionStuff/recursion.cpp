#include <iostream>

void walk(int steps);
int factorial1(int num);
int factorial2(int num);

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
		//need the '-1' or there is a stack overflow
	}
}

int factorial1(int num) {
	int result = 1;
	for (int i = 1; i <= num; i++) {
		result = result * i;
	}
}

int factorial2(int num) {
	if (num > 1) {
		return num + factorial2(num - 1);
	}
	else {
		return 1;
	}
}