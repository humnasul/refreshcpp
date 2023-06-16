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
//includes header and other libraries
int main()
{
	double res = input();
	//function call
	std::cout << "You've lived " << res << " years for each letter in your name." << std::endl;
	//prints
	std::cout << "----------------------------------" << std::endl;
	//border
	int res2 = extra();
	//function call
	std::cout << "The number of letters in your favorite food plus the number of letters of your pet's name is " << res2 << "." << std::endl;
	//prints
	//extra
	return 0;
}