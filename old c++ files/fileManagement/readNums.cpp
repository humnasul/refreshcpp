#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <time.h>
//includes
using namespace std;
//namespace
/**
* Name: Humna Sultan
* Program Name: Worksheet Read Part 3
* Date: 17 January 2020
* Extra Thing: N/A; on other part of lab
*/
int main()
//main
{

	ifstream num2;
	num2.open("NUMBERS.txt");
	//opens/creates file
	string val;
	int val2;
	float sum = 0;
	float aver = 0;
	int times = 0;
	int evens = 0;
	int odds = 0;
	//declares or initializes variables
	if (num2.is_open())
	{
		while (getline(num2, val))
			//while and if for if data is still in file
		{
			times += 1;
			//adds to total number of pieces of data
			val2 = stoi(val);
			//converts string number to an integer
			cout << val2 << endl;
			//prints num
			if (val2 % 2 == 0)
			{
				evens++;
			}
			else
			{
				odds++;
			}
			//adds to odds or evens
			sum = sum + val2;
			//adds number to sum
			aver = sum / times;
			//calculates average
		}
	}

	cout << "Evens: " << evens << endl;
	cout << "Odds: " << odds << endl;
	cout << "Sum: " << sum << endl;
	cout << "Average: " << aver << endl;
	//prints ending data
	num2.close();
	//closes file
}