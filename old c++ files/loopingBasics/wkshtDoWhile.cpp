#include <iostream>
#include <string>
#include <iomanip>
//includes
/**
* Name: Humna Sultan
* Program Name: Worksheet Do While
* Date: 16 December 2019
* Extra Thing: asks user for a value between 12 and 18 do while
*/
using namespace std;
//namespace
int main()
//main method
{
	double x = 0;
	//double
	do
	{
		cout << "Enter a value that is between 1 and 10 inclusive :: ";
		cin >> x;
	} while (x < 1 || x > 10);
	cout << "------------------------------------------------------------" << endl;
	//border

	int y = 0;
	do
	{
		cout << "Enter a value that is between 12 and 18 inclusive :: ";
			cin >> y;
	} while (y < 12 || y > 18);
	//asks the user to enter value that is between 12 and 18 until condition is met
		//extra
		cout << "------------------------------------------------------------" << endl;
	//border
	int var = 2;
	cout << var << endl;
	do
	{
		var = var + 2;
		cout << var << endl;
	} while (var < 40);
	//prints every even number between 2 and 40
	cout << "------------------------------------------------------------" << endl;
	//border
	string name;
	//name
	cout << "Enter your name :: ";
	cin >> name;
	//asks user to enter their name
	int times;
	cout << "How many times would you like your name printed? :: ";
	cin >> times;

	//asks how many times they would like their name printed
	do
	{
		cout << name << endl;
		times--;
		//counter
	} while (times != 0);
	//do while loop for printing name certain number of times
	double total = 0;
	double num;
	int counter = 0;
	//declaring vars
	do
	{
		cout << "Enter a grade value (0 to exit):: ";
		cin >> num;
		total += num;
		counter++;
	} while (num != 0);
	//asks for grades until user enters 0 (exit)
	counter = counter - 1;
	//counter (doesn't count 0)
	double aver = total / counter;
	//calculates average
	std::cout << std::fixed;
	std::cout << std::setprecision(1);
	std::cout << "Average: " << aver << endl;
	//prints average
}