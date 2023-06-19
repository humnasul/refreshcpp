/**
* Name: Humna Sultan
* Program Name: Unit 9 Structs Project
* Date: 18 May 2020
* Extra Thing: Includes ages and takes input
*/
/*REQUIREMENTS:
- A structure was declared that has information about each donor
- Structure for donor information includes donor’s first name, donor’s
last name, donor’s telephone number, and monetary amount of latest
donation
- Array/vector was declared to store donor data
- Maximum array/vector size = 50
- Donor information is read from “donorlist.txt” in main
- Main must store read data from file in a structure
- All functions accept list of structures as a parameter
- A function is designated to sort the list according to donation amount,
with the highest donation amount first
- A function is designated to print information in list in an organized
manner
- Phone numbers are printed as (999) 999-9999
- A function is designated to give a congratulations message to the person
with the highest donation
- Function for congratulations message to person with highest donation can
handle up to 3 individuals with the same donation amount
- A function is designated to receive the list as a parameter and
calculate + return the average of all of the donations
- All information printed must be labeled and organized

- Calculated average donation amount should be appropriately and nicely
formatted
- Appropriate Extra Included
- Requirements in program header
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>
//includes

struct DONORS
{
	std::string f_name, l_name, phone, money;
	int age;
	int money2;
};
//struct of donor info
double average(std::vector <DONORS>& a, int num)
//function for calculating average
{
	double sum = 0;
	double div = num;
	double aver = 0;
	//declares variables
	for (int i = 0; i < num; i++)
	{
		sum = sum + a[i].money2;
	}
	//adds all money values
	aver = sum / div;
	//calculates average
	return aver;

	//returns average
}
void congrats(std::vector <DONORS>& find, int num)
//function for congratulating donors
{
	if (find[0].money2 == find[1].money2 && find[0].money2 ==
		find[2].money2)
		//if there are 3 people with the same highest donation
	{
		std::cout << "+++ 3 HIGHEST DONATIONS +++" << std::endl;
		std::cout << find[0].f_name << " " << find[0].l_name << ": $" <<

			find[0].money2 << std::endl;

		std::cout << find[1].f_name << " " << find[1].l_name << ": $" <<

			find[1].money2 << std::endl;

		std::cout << find[2].f_name << " " << find[2].l_name << ": $" <<

			find[2].money2 << std::endl;

		//prints out info about 3 donors
	}
	else if (find[0].money2 == find[1].money2)
		//if there are 2 people with the same highest donation
	{
		std::cout << "+++ 2 HIGHEST DONATIONS +++" << std::endl;
		std::cout << find[0].f_name << " " << find[0].l_name << ": $" <<

			find[0].money2 << std::endl;

		std::cout << find[1].f_name << " " << find[1].l_name << ": $" <<

			find[1].money2 << std::endl;

		//prints out info about 2 donors
	}
	else
		//anything else (1 highest donor)
	{
		std::cout << "+++ HIGHEST DONATION +++" << std::endl;
		std::cout << find[0].f_name << " " << find[0].l_name << ": $" <<

			find[0].money2 << std::endl;

		//prints info about first donor (highest donation)
	}

}
void print(std::vector <DONORS>& print, int num)
//function for printing information
{
	for (int i = 0; i < num; i++)
	{
		std::cout << "Person #" << i + 1 << std::endl;
		std::cout << "Name: " << print[i].f_name << " " << print[i].l_name

			<< std::endl;

		std::cout << "Age: " << print[i].age << std::endl;
		std::cout << "Phone Number: " << "(" << print[i].phone.substr(0,
			3) << ")" << print[i].phone.substr(3, 3) << "-" << print[i].phone.substr(6,
				4) << std::endl;

		std::cout << "Donation Amount: $" << print[i].money2 << std::endl;
		std::cout << "++++++++++++++++++++++++++" << std::endl;
	}
	//for loop that goes through
}
void sort(std::vector <DONORS>& sorting, int num)
{
	//function that sorts structs by donation amount (highest first)
	for (int i = 0; i < num - 1; i++)
	{
		DONORS temp;
		for (int j = i; j < num; j++)
		{
			if (sorting[i].money2 < sorting[j].money2)
			{
				temp = sorting[i];
				sorting[i] = sorting[j];
				sorting[j] = temp;
			}
		}
	}
	//sorting

}
int main()
{
	std::vector <DONORS> info(50);
	//declares vector of structs
	std::ifstream fin;
	fin.open("DonorList.txt", std::ios::in);
	//opens file
	std::string item = "";
	int f = 0;
	int count = 0;
	//declares variables for use
	fin.clear();
	while (!fin.eof())
	{
		getline(fin, item);
		info[f].f_name = item.substr(0, item.find(" "));
		info[f].l_name = item.substr(item.find(" ") + 1,

			item.length());

		getline(fin, item);
		info[f].phone = item;
		getline(fin, item);
		info[f].money = item;
		f++;
		count++;
	}
	//gets info from file and puts into structs
	for (int o = 0; o < count; o++)
	{
		info[o].money2 = stoi(info[o].money);
	}
	//converts money values from file to integers
	for (int k = 0; k < count; k++)
	{

		std::cout << "-----------------------" << std::endl;
		std::cout << "Enter the age of person #" << k + 1 << " :: " <<

			std::endl;

		std::cin >> info[k].age;
	}
	//extra
	//stores user's age
	sort(info, count);
	print(info, count);
	//calls functions for sorting and printing
	double aver = average(info, count);
	//calls function to calculate average
	std::cout << "******************************" << std::endl;
	std::cout << "Average of all donations: $" << aver << std::endl;
	//prints average of all donations
	std::cout << std::endl;
	congrats(info, count);
	//calls function to congratulate donors
}