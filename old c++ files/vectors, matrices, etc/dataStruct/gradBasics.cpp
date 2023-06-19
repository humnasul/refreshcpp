#include <iostream>
/**
* Name: Humna Sultan
* Program Name: Unit 9 - Worksheet 2; Program 2
* Date: 26 April 2020
* Extra Thing: Prints students graduating in 2022
*/
struct G_INFO
{
	std::string g_name;
	double c_aver;
	int year;
};
//struct with variables
void fill(G_INFO& s)
{
	std::cout << "What is the name of the student? :: ";
	std::cin >> s.g_name;
	std::cout << "What is the student's cumulative average? :: ";
	std::cin >> s.c_aver;
	std::cout << "What year does the student graduate? :: ";
	std::cin >> s.year;
	//asks for user input and fills variables
}

//function for filling struct
void print(G_INFO& s)
{
	std::cout << s.g_name << std::endl;
	std::cout << s.c_aver << std::endl;
	std::cout << s.year << std::endl;
}
//prints struct variables
int main()
{
	struct G_INFO stu[5];
	//declares array of structs
	for (int i = 0; i < 5; i++)
	{
		fill(stu[i]);
	}
	//fills stu
	int add1 = 0;
	int add2 = 0;
	//counts if a year is equal to 2020 or 2022
	//2022 = extra
	for (int j = 0; j < 5; j++)
	{
		if (stu[j].year == 2020)
		{
			add1++;
		}
		if (stu[j].year == 2022)
		{
			add2++;
		}
	}
	//for loop that counts number of students graduating in 2020 or 2022

	std::cout << "--Students graducating in 2020--" << std::endl;
	
	if (add1 > 0)
	{
		for (int x = 0; x < 5; x++)
		{
			if (stu[x].year == 2020)
			{
				std::cout << stu[x].g_name << std::endl;
			}
		}
	}
	//prints students gradauating in 2020 if applicable
	else
	{
		std::cout << "No students are graduating in 2020." <<

			std::endl;
	}
	//prints appropriate message if there are no students graduating in 2020
	
	std::cout << std::endl;
	std::cout << "--Students graducating in 2022--" <<
		std::endl;
	if (add2 > 0)
	{
		for (int x = 0; x < 5; x++)
		{
			if (stu[x].year == 2022)
			{
				std::cout << stu[x].g_name << std::endl;
			}
		}
	}
	//prints students gradauating in 2022 if applicable
	//extra
	else
	{
		std::cout << "No students are graduating in 2022." << std::endl;
	}
	//prints appropriate message if there are no students graduating in 2022
	//extra
}