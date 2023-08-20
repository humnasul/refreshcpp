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

	paintCar(car1, "blue");
	printCar(car1);
	//passed by value, not reference
	// almost like the function makes a copy of the struct :o


	return 0;
}

void printCar(Car car) {
	std::cout << &car << '\n';
	std::cout << car.model << '\n';
	std::cout << car.year << '\n';
	std::cout << car.color << '\n';
}

void paintCar(Car &car, std::string color) {
	//you need to use "Car &car" in order to change the original in main - otherwise does not actually change the struct in main!
	//remember & is address of operator
	car.color = color;
}