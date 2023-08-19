#include <iostream>

struct student {
	std::string name;
	double gpa;
	bool enrolled;
};
// struct identifier {}

int main() {
	// struct - groups related variables under one name
	//	structs contain many different data types
	//	variables in a struct are known as 'members'
	//	members can access with . aka "'ass member access operator"

	student student1;
	// format: struct identifer name
	student1.name = "Humna";
	student1.gpa = 3.8;
	student1.enrolled = true;
	//member can be accessed with . !

	student student2;
	// struct identifer name
	student2.name = "Coco";
	student2.gpa = 4.0;
	student2.enrolled = true;
	//member can be accessed with . !

	std::cout << student1.name << '\n';
	std::cout << student1.gpa << '\n';
	std::cout << student1.enrolled << '\n';

	std::cout << student2.name << '\n';
	std::cout << student2.gpa << '\n';
	std::cout << student2.enrolled << '\n';

	//each struct made can have diff values!!

	return 0;
}