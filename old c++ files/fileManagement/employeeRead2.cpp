#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
//includes
using namespace std;
//namespace
/**
* Name: Humna Sultan
* Program Name: Worksheet Read Part 2
* Date: 17 January 2020
* Extra Thing: Calculates how many more hours the person should
work based on average number of hours an individual works per
week (44)

**/
int main()
//main
{
	ifstream Employ;
	Employ.open("PAYROLL.txt");
	//opens/creates file
	string num;
	string employnum = " ";
	string employnum2;
	int employnum3 = 0;
	string name;
	string wage;
	string wage2;
	float wage3;
	string hours;
	string hours2;
	float hours3;
	float gross;
	string bord;
	//declares variables for use
	float hours_left = 44;
	//extra
	std::cout << std::fixed << std::setprecision(2);
	//sets decimal format
	getline(Employ, num);
	int num2 = stoi(num);
	//gets number of employees
	for (int i = 0; i < num2; i++)
		//for loop that goes for number of employees
	{
		getline(Employ, employnum);
		employnum2 = employnum.substr(8, employnum.length());

		employnum3 = stoi(employnum2);
		//finds employee number and converts to int
		cout << "Employee " << employnum3 << endl;
		//prints employee number
		getline(Employ, name);
		cout << "Name: " << name << endl;
		//gets employee's name and prints
		getline(Employ, wage);
		wage2 = wage.substr(6, wage.length());
		wage3 = stof(wage2);
		//gets wage and converts to float
		cout << "Wage: $" << wage3 << endl;
		//prints wage
		getline(Employ, hours);
		hours2 = hours.substr(23, hours.length());
		hours3 = stof(hours2);
		//gets num of hours and converts to float
		cout << "Hours worked this week: " << hours3 << endl;
		//prints hours
		gross = wage3 * hours3;
		cout << "Gross Pay: $" << gross << endl;
		//calculates and prints gross pay
		hours_left = hours_left - hours3;
		cout << "Hours left to work this week: " << hours_left

			<< endl;

		//calculates and prints hours left to work for current week

			getline(Employ, bord);
		cout << bord << endl;
		//finds border and prints
	}
	Employ.close();
	//closes file
	return 0;
}