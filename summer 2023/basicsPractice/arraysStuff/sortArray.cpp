#include <iostream>

//bubble sort - one by one swapping until elements are all in order

int main() {
	int array[] = { 7, 5, 6, 2, 1, 3, 4, 12, 32, 9, 8 };
	int size = sizeof(array) / sizeof(array[0]);

	for (int element : array) {
		std::cout << element << " ";
	}

	return 0;

}

void sort(int array[], int size) {
	int temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	//change to < for descending order
}