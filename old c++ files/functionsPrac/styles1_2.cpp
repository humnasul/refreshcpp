#include <iostream>
//include
using namespace std;
//namespace
void company(string comp);
void calc(int one, int two);
void three(char c, int times, int lines);
//function definitions
/**
* Name: Humna Sultan
* Program Name: Worksheet Functions Style 1 and 2
* Date: 3 January 2020
* Extra Thing: asks user for name of company and prints company
header with entered company name
*/
int main()
//main function
{
	string comp = " ";
	cout << "Enter the name of your company :: ";
	cin >> comp;
	//asks for name of company and stores
	company(comp);
	//calls function for company - prints heading
	cout << "\n-------------------------------------------\n";
	//border
	int num1 = 0;

	int num2 = 0;
	//initializing vars
	cout << "Enter a value for the first number :: ";
	cin >> num1;
	cout << "Enter a value for the second number :: ";
	cin >> num2;
	//asks for values of numbers and stores
	calc(num1, num2);
	//calls calculations function - finds final result of calculation
		cout << "\n-------------------------------------------\n";
	//border
	char c = 'a';
	int times = 0;
	int lines = 0;
	//initializing variables
	cout << "Enter the character that you would like to have printed :: ";
	cin >> c;
	//asks user for character and stores
	cout << "Enter the number of times that you would like to print the character on each line :: ";
	cin >> times;
	//asks user for number of times they want character printed on each lineand stores
	cout << "Enter the number of lines that you would like the character printed :: ";
	cin >> lines;
	//asks user for number of lines and stores
	three(c, times, lines);
	//calls function for creating shape using character - uses for loops to print
	cout << "\n-------------------------------------------\n";
	//border
	cout << "Thank you for utilizing this program :)";
	//thank you message

	return 0;
	//return 0
}
void company(string comp)
//function that prints company header
{
	cout << "*******************************" << endl;
	cout << "()()()" << comp << "()()()" << endl;
	cout << "*******************************";
	//prints header
}
void calc(int one, int two)
//function for making calculation with entered values
{
	double square1 = one * one;
	//squares first num + stores
	double square2 = two * two;
	//squares second num + stores
	double sum = square1 + square2;
	//adds squares and stores
	cout << "Value: " << sum;
	//prints calculation value
}
void three(char c, int times, int lines)
//function for printing shape that user desires
{
	for (int i = lines; i > 0; i--)
	{
		//for loop for going to next line
		for (int j = times; j > 0; j--)
			//for loop for printing char certain number of times on each line

		{
		cout << c;
		//prints char
		}
		cout << "\n";

		//new line
	}
}