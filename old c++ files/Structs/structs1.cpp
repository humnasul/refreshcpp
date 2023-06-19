#include <iostream>
/**
* Name: Humna Sultan
* Program Name: C++ Structs
* Date: 31 March 2020
* Extra Thing: N/A
*/
struct Advert
{
	int shown;
	double percent;
	double earnings;
};
//struct for advertising variables
Advert getValues()
{
	Advert info;
	//defines variable of struct for use
	std::cout << "Enter the number of ads shown today :: ";
	std::cin >> info.shown;
	std::cout << "Enter the percentage of ads clicked by users (integer) :: ";
		std::cin >> info.percent;
	std::cout << "Enter the average earnings per click :: ";

	std::cin >> info.earnings;
	//takes values from user and puts them into variables in struct 
	return info;
	//returns definition of struct
}
void printing(Advert print)
//function for printing variables in struct
{
	std::cout << "Number of ads shown to readers :: " <<
		print.shown << std::endl;
	std::cout << "Percentage of ads clicked by users :: " <<
		print.percent << std::endl;
	std::cout << "Average earnings per click on each ad :: $"
		<< print.earnings << std::endl;
	//prints variables
	double total = print.shown * print.percent;
	double earn = print.earnings / 100;
	total = total * earn;
	//calculates total earnings
	std::cout << "Total earnings for the day :: $" << total <<
		std::endl;
	//prints earnings with calculated value
}
int main()
{
	Advert ad{ getValues() };
	//defines variable of struct with variable values from user
	printing(ad);
	//calls function for printing values
	return 0;
}