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

* Program Name: Worksheet Create Part 3
* Date: 15 January 2020
* Extra Thing: N/A; on other part of lab
*/
int main()
//main
{
	ofstream num;
	num.open("NUMBERS.txt");
	//opens/creates file
	string val = " ";
	//initializes var
	cout << "How many random numbers would you like generated between 1 and 100 inclusive ? :: ";
		getline(cin, val);
	//asks user for number and stores
	int val2 = stoi(val);
	//changes number entered to an integer for for loop
	int gener = 0;
	//initializes var
	for (int i = 0; i < val2; i++)
		//for loop
	{
		gener = rand() % 100 + 1;
		num << gener << "\n";
		//generates random number and puts in file
	}
	num.close();
	//closes file
}