#include <iostream>
//includes
using namespace std;
//namespace
void name();
void ast(int s);
void m_one();
void m_two();
int paws(int n);
//function definitions
/**
* Name: Humna Sultan
* Program Name: 5.0 Functions - Quiz
* Date: 9 January 2020
* Extra Thing: N/A
*/
int main()
//main function
{
	int star = 0;
	cout << "Enter the number of asterisks that you would like printed per row :: ";
		cin >> star;
	//asks user for number of asterisks and stores
	cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&" << endl;
	//border
	ast(star);
	ast(star);
	name();

	ast(star);
	ast(star);
	//calls functions and prints proper result
	cout << "--------------------------------------------" <<
		endl;
	//border
	int mice = 0;
	cout << "Enter how many mice there are :: ";
	cin >> mice;
	//asks user for number of mice and stores
	cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&" << endl;
	//border
	m_one();
	m_one();
	m_two();
	m_two();
	//calls functions in order to print part of output
	int p = paws(mice);
	//sets variable equal to return value of function
	cout << "These " << mice << " blind mice have " << p << "paws.";
		//prints out number of paws (returned from function) with label
		return 0;
}
void name()
//function for name
{
	cout << "Humna Sultan" << endl;
	//prints name
}
void ast(int s)
//function for printing asterisks
{
	for (int i = 0; i < s; i++)

		//for loop that goes for number of asterisks that user wants
	{
	cout << "*";
	//prints
	}
	cout << "\n";
	//goes to next line
}
void m_one()
//function for printing part of mice program
{
	cout << "Three blind mice." << endl;
	//prints statement
}
void m_two()
//function for printing part of mice program
{
	cout << "See how they run." << endl;
	//prints statement
}
int paws(int n)
//function for calculating num of paws
{
	int mult = n * 4;
	return mult;
	//finds num of paws and returns
}