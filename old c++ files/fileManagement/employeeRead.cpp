#include <iostream>
#include <fstream>
#include <string>
//includes
using namespace std;
//namespace
/**
* Name: Humna Sultan

* Program Name: Worksheet Create Part 2
* Date: 15 January 2020
* Extra Thing: N/A; on other part of lab
*/
int main()
//main
{
	ofstream Employ;
	Employ.open("PAYROLL.txt");
	//opens/creates file
	string num = " ";
	string fullname = " ";
	string wage = " ";
	string hours = " ";
	//declares variables
	cout << "How many employees are there :: ";
	getline(cin, num);
	//asks for number of employees and stores
	Employ << num << " employees\n";
	//prints num of employees to file
	int num2 = stoi(num);
	//converts number to integer for for loop
	for (int i = 0; i < num2; i++)
		//for loop for interation of employees
	{
		Employ << "Employee " << i + 1 << " -\n";
		cout << "Employee " << i + 1 << " : \n";
		cout << "Enter the employee's full name :: ";
		getline(cin, fullname);
		Employ << fullname << "\n";
		cout << "Enter the employee's hourly wage :: ";
		getline(cin, wage);
		Employ << "Wage: " << wage << "\n";
		cout << "Enter the number of hours the employee worked this week :: ";
		getline(cin, hours);

		Employ << "Hours worked past week: " << hours << "\n";

		Employ << "-----------------------------------\n";
		cout << "-----------------------------------\n";
		//asks user for info, stores, and puts into file
	}
	Employ.close();
	//closes file
}