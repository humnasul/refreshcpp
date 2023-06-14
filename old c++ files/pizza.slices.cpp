/**
* Name: Humna Sultan
* Program Name: C++ Data Basics - Lab 1 (part 2)
* Date: 23 September 2019
* Extra Thing: N/A; on other part of lab
*/
#include <iostream>
using namespace std;

int main()
{
	double i;
	double value;
	double value2;
	//variables
	cout << "How many slices of pizza have you eaten? :: ";
	cin >> i;
	//asks user for slices of pizza eaten
	value = 375 * i;
	//calculates calories eaten
	value2 = value / 100;
	//figures out how many miles the user must jog
	cout << "You must jog " << value2 << " miles in order to burn the " << value << " calories that you gained.";
		//prints the number of miles that must be jogged to burn x calories
}