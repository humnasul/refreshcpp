#include <iostream>
#include <string>
using namespace std;

int main() {
	std::string name;

	std::cout << "Enter your name:: " << endl;
	std::getline(std::cin, name);

	//using length()
	if (name.length() > 12) {
		std::cout << "Your name can't be over 12 characters.";
	}
	else {
		std::cout << "Welcome " << name;
	}

	name.empty();
	//returns boolean value

	if (name.empty()) {
		std::cout << "You didn't enter your name." << endl;
	}

	return 0;
}