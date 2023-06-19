#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <vector>
//includes
/**
* Name: Humna Sultan
* Program Name: Unit 9 - Worksheet 2; Program 3
* Date: 26 April 2020
* Extra Thing: N/A; on other part of worksheet
*/
struct TV_INFO
{
	std::string c_name;
	int channel;
	std::string loc;
	std::string host;
};
//struct with variables
void fill(TV_INFO& s)
{
	std::cout << "What is the name of the TV Survivor program? :: ";
	std::cin >> s.c_name;
	std::cout << "What is the channel number? :: ";
	std::cin >> s.channel;

	std::cout << "What is the location where the show occurs? :: ";
	std::cin >> s.loc;
	std::cout << "What is the name of the host? :: ";
	std::cin >> s.host;
	//asks for user input and fills variables in struct
}
//function that fills information into struct
void print(TV_INFO& s)
{
	std::cout << s.c_name << std::endl;
	std::cout << s.channel << std::endl;
	std::cout << s.loc << std::endl;
	std::cout << s.host << std::endl;
}
//function for printing variables in struct
void sort(std::vector <TV_INFO>& sorting)
//function for sorting
{
	for (int i = 0; i < sorting.size() - 1; i++)
	{
		TV_INFO temp;
		for (int j = i + 1; j < sorting.size(); j++)
		{
			if (sorting[i].channel > sorting[j].channel)
			{
				temp = sorting[i];
				sorting[i] = sorting[j];
				sorting[j] = temp;
			}
		}
	}
	//sorting of struct by channel number
}
int main()

{
	std::vector <TV_INFO> show(3);
	//vector of structs of tv info
	for (int i = 0; i < 3; i++)
	{
		fill(show[i]);
		std::cout << "-------------------------" << std::endl;
	}
	//for loop that calls function to fill into structs
	sort(show);
	//calls function for sorting
	std::cout << "+++++++++++++++++++++++++++++" << std::endl;
	//border
	for (int j = 0; j < 3; j++)
	{
		print(show[j]);
		std::cout << "-------------------------" << std::endl;
	}
	//for loop that calls function to print struct variables
}