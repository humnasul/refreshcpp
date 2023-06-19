#include <iostream>
/**
* Name: Humna Sultan
* Program Name: C++ Structs
* Date: 31 March 2020
* Extra Thing: Asks user for number of calculations they want to
do
*/
struct Frac
{
	int num;
	int deno;
};
//declares struct for numerator and denominator
Frac getValues()
{
	Frac info;

	//defines variable of struct
	std::cout << "Enter a value for numerator :: ";
	std::cin >> info.num;
	std::cout << "Enter a value for denominator: ";
	std::cin >> info.deno;
	//takes values from user and stores in variables in struct
	std::cout << std::endl;
	//next line
	return info;
	//returns definition of variable of struct
}
void calc(Frac m1, Frac m2)
//function for calculations
{
	double num_mult = m1.num * m2.num;
	double deno_mult = m1.deno * m2.deno;
	double total = num_mult / deno_mult;
	//calculates product of fractions
	std::cout << "Answer : " << total << std::endl;
	//prints answer
}
int main()
{
	int c = 0;
	std::cout << "How many calculations would you like to do? :: ";
		std::cin >> c;
	//asks user for number of calculations and stores
	//extra
	for (int i = 0; i < c; i++)
		//for loop for number of calculations that user wants to do
	{

		Frac m1{ getValues() };
		Frac m2{ getValues() };
		//defines structs with values from user (function)
		calc(m1, m2);
		//calls function to find product
		std::cout << "--------------------------------------"

			<< std::endl;
		//border
	}
	return 0;
}