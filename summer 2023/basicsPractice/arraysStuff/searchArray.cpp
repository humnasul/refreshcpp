#include <iostream> 

int main() {
	int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::string foods[] = { "candy", "pizza", "chocolate", "mac and cheese" };

	int size1 = sizeof(numbers) / sizeof(numbers[0]);
	int size2 = sizeof(foods) / sizeof(foods[0]);

	int index, myNum;
	//std::string myFood;

	std::cout << "Enter element to search for :: " << "\n";
	std::cin >> myNum;
	//std::getline(std::cin, myFood);

	index = searchArray(numbers, size1, myNum);
	//call could also be using food

	if (index != -1) {
		std::cout << myNum << " is at " << index;
	}
	else {
		std::cout << myNum << " is not in the array :( ";
	}

	return 0;
}

int searchArray(int array[], int size, int element) {
	//change to strings for myFoods

	for (int i = 0; i < size; i++) {
		if (array[i] == element) {
			//you can uxe == for strings in c++!
			return i;
		}
	}
}