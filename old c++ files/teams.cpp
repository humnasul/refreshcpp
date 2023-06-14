/**
* Name: Humna Sultan
* Program Name: C++ Worksheet Division and Modulus - Lab 3
* Date: 26 September 2019
* Extra Thing: Asks user for number of students per team
*/
#include <iostream>
using namespace std;
int main()
//function
{
	double i;
	int remain;
	int peeps;
	int stu;
	int team;
	//variables utilized in program
	cout << "How many members are there? :: ";
	cin >> stu;
	//asks how many members there are and stores
	cout << "How many members would you like per team? :: ";
	cin >> team;
	//asks how many students the user wants per team and stores
	peeps = stu / team;
	//calculates num of teams

	remain = stu % team;
	//calculates remaining students
	cout << "There will be " << peeps << " teams with " <<
		remain << " students remaining.";
	//prints result
}