#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <vector>
//includes
/**
* Name: Humna Sultan
* Program Name: Unit 9 - Worksheet 1
* Date: 24 April 2020
* Extra Thing: prints information about rocket 15 before and
after sorting
*/
struct ROCKET_TYPE
	//first struct for info
{
	std::string r_name;
	int launch_year;
	std::string space_center;
	struct ROCKET_INFO
		//nested struct for additional info
	{
		double fuel_capacity;
		double r_weight;

	}add;
};
void fill_rock(ROCKET_TYPE& rocket72)
//function used to fill variable of struct
{
	std::cout << "What is the name of the rocket? :: ";
	std::cin >> rocket72.r_name;
	std::cout << "What is the launch year of the rocket? :: ";
	std::cin >> rocket72.launch_year;
	std::cout << "What is the space center where the rocket resides ? :: ";
	std::cin >> rocket72.space_center;
	std::cout << "What is the fuel capacity of the rocket? :: ";
	std::cin >> rocket72.add.fuel_capacity;
	std::cout << "What is the weight of the rocket? :: ";
	std::cin >> rocket72.add.r_weight;
}
void sort(std::vector <ROCKET_TYPE>& sorting)
//function for sorting
{
	for (int i = 0; i < sorting.size() - 1; i++)
	{
		ROCKET_TYPE temp;
		for (int j = i + 1; j < sorting.size(); j++)
		{
			if (sorting[i].add.fuel_capacity >

				sorting[j].add.fuel_capacity)

			{
				temp = sorting[i];
				sorting[i] = sorting[j];
				sorting[j] = temp;
			}
		}
	}
	//sorting of struct by fuel capacity

}
int main()
{
	ROCKET_TYPE rocket_one;
	rocket_one.launch_year = 1972;
	//declares a variable of the struct and fills launch year
	ROCKET_TYPE rocket72;
	rocket72.add.fuel_capacity = 6400;
	//declares a variablr of the struct and fills fuel capacity
	rocket72.space_center = "Langley Research Center";
	std::cout << rocket72.space_center << std::endl;
	//sets space center of variable and prints
	fill_rock(rocket72);
	//uses function to fill values into variable of struct

	std::vector <ROCKET_TYPE> rock(140);
	//declares vector of 140 struct variables
	std::string i_str = "";
	for (int i = 0; i < 140; i++)
	{
		i_str = std::to_string(i + 1);
		rock[i].r_name = "Flyer" + i_str;
		rock[i].launch_year = 1972;
		rock[i].space_center = "MCST";
		rock[i].add.fuel_capacity = 0 + rand() % 101;
		rock[i].add.r_weight = 0 + rand() % 101;
	}
	//fills the vector of 140 struct variables
	std::cout << std::endl;
	//goes to next line
	std::cout << "--Information about 15th rocket BEFORE sorting--" << std::endl;
		std::cout << rock[14].r_name << std::endl;

	std::cout << rock[14].launch_year << std::endl;
	std::cout << rock[14].space_center << std::endl;
	std::cout << rock[14].add.fuel_capacity << std::endl;
	std::cout << rock[14].add.r_weight << std::endl;
	//prints information about rocket #15 before sorting
	std::cout << std::endl;
	sort(rock);
	//sorts rock vector of 140 struct variables
	std::cout << "--Information about 15th rocket AFTER sorting--" << std::endl;
	std::cout << rock[14].r_name << std::endl;
	std::cout << rock[14].launch_year << std::endl;
	std::cout << rock[14].space_center << std::endl;
	std::cout << rock[14].add.fuel_capacity << std::endl;
	std::cout << rock[14].add.r_weight << std::endl;
	//prints information about rocket #15 after sorting
	//extra
}