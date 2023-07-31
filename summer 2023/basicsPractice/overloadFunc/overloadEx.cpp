#include <iostream> 

int main() {
	return 0;
}

//overloading - sharing names, diff parameters
//function name + parameters = signature
//each signature needs to be unique - like an ID!!

void bakePizza() {
	std::cout << "Here is your pizza!\n";
}

void bakePizza(std::string topping1) {
	std::cout << "Here is your " << topping1 << " pizza!\n";
}

void bakePizza(std::string topping1, std::string topping2) {
	std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}
