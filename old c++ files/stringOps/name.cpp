/**
* Name: Humna Sultan
* Program Name: C++ String Introduction
* Date: 19 March 2020
* Extra Thing: Adds the number of letters in the user's favorite food
and the number of letters in the user's pet's name
*/
#include <iostream>
#include <string>
#include "name.h"
//includes libraries and header
double input()
{
	std::string name{};
	double age = 0;
	double ans = 0;
	//initializes variables
	std::cout << "Enter your full name: ";
	std::getline(std::cin, name);
	std::cout << "Enter your age: ";
	std::cin >> age;
	//asks user for values and stores
	ans = age / name.length();
	//calculates
	return ans;
}
int extra()
//extra
{
	std::string food{};
	std::string pet{};
	int sum = 0;
	//initializes variables

	std::cin.ignore(32767, '\n');
	//removes newline from stream
	std::cout << "Enter your favorite food name: ";
	std::getline(std::cin, food);
	std::cout << "Enter your pet's name: ";
	std::getline(std::cin, pet);
	//gets input from user
	sum = food.length() + pet.length();
	//adds values
	return sum;
}