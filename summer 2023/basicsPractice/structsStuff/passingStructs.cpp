#include <iostream>

struct Car {
	std::string model;
	int year;
	std::string color;
};

int main() {

	Car car1;
	Car car2;
	// two structs!!

	car1.model = "model1";
	car1.year = 2000;
	car1.color = "pink";

	car2.model = "model2";
	car2.year = 2004;
	car2.color = "purple";

	printCar(car1);
	//passed by value, not reference
	// almost like the function makes a copy of the struct :o


	return 0;
}

void printCar(Car car) {
	std::cout << car.model << '\n';
	std::cout << car.year << '\n';
	std::cout << car.color << '\n';
}