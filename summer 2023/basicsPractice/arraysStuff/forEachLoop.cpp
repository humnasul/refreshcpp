#include <iostream>
using namespace std;

int main() {
	//foreach loop = loop that eases the traversal over an iterable dataset

	std::string students[] = { "Spongebob", "Patrick", "Squidward" };
	//you can also increase this size
	int grades[] = { 65, 71, 90, 56 };

	for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++) {
		std::cout << students[i] << std:: endl;
	}
	//the for loop has sizeof(students) / sizeof(students[0]) to get the num of elements!

	for (std::string student : students) {
		std::cout << student;
	}
	//for each loop :)

	return 0;
}