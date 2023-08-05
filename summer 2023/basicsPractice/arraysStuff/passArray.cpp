#include <iostream>

int main() {
	double prices[] = { 49.99, 15.05, 9.56 };
	int size = sizeof(prices) / sizeof(prices[0]);
	double total = getTotal(prices, size);

	std::cout << "$" << total;
	return 0;
}

double getTotal(double pr[], int size) {
	//array becomes a pointer - points to the address where array begins
	//with a pointer, you no longer know the size, and you need to know the size to make a for loop!
	double total = 0;
	for (int i = 0; i < size; i++) {
		total += pr[i];
	}

	/*
	for (double p : prices) {

	}
	this does not work because you no longer know the size of an array - you have a pointer!
	*/

	return total;
}