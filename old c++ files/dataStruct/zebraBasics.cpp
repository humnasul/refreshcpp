#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <vector>
//includes
/**
* Name: Humna Sultan
* Program Name: Unit 9 - Worksheet 2; Program 1
* Date: 26 April 2020
* Extra Thing: N/A; on other part of worksheet
*/

struct Z_INFO
{
	std::string z_name;
	int z_age;
	std::string z_zoo;
	double z_height;
	double z_weight;
	std::string z_vet;
};
//struct with variables
void fill(Z_INFO& z)

//function for filling information into a struct
{
	std::cout << "What is the name of the zebra? :: ";
	std::cin >> z.z_name;
	std::cout << "What is the zebra's age? :: ";
	std::cin >> z.z_age;
	std::cout << "What zoo does the zebra live at? :: ";
	std::cin >> z.z_zoo;
	std::cout << "What is zebra's height? :: ";
	std::cin >> z.z_height;
	std::cout << "What is zebra's weight? :: ";
	std::cin >> z.z_weight;
	std::cout << "Who is the zebra's veterinarian? :: ";
	std::cin >> z.z_vet;
	//asks user for input and fills struct
}
void print(Z_INFO& z)
{
	std::cout << z.z_name << std::endl;
	std::cout << z.z_age << std::endl;
	std::cout << z.z_zoo << std::endl;
	std::cout << z.z_height << std::endl;
	std::cout << z.z_weight << std::endl;
	std::cout << z.z_vet << std::endl;
}
//function for printing struct
void sort(std::vector <Z_INFO>& sorting)
//function for sorting
{
	for (int i = 0; i < sorting.size() - 1; i++)
	{
		Z_INFO temp;
		for (int j = i + 1; j < sorting.size(); j++)
		{
			if (sorting[i].z_age > sorting[j].z_age)
			{

				temp = sorting[i];
				sorting[i] = sorting[j];
				sorting[j] = temp;
			}
		}
	}
	//sorting of struct by age
}
int main()
{
	std::vector <Z_INFO> zeb(3);
	//declares vector of structs
	for (int i = 0; i < 3; i++)
	{
		fill(zeb[i]);
		std::cout << "-----------------------" << std::endl;
	}
	//for loop that calls function to fill each struct
	sort(zeb);
	std::cout << "****************************" << std::endl;
	//sorts vector of structs
	for (int j = 0; j < 3; j++)
	{
		print(zeb[j]);
		std::cout << "-----------------------" << std::endl;
	}
	//prints vector of structs
	return 0;
}