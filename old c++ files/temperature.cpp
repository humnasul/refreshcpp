/**
* Name: Humna Sultan
* Program Name: C++ Data Basics - Lab 1
* Date: 23 September 2019
* Extra Thing: asks user for fahrenheit values and converts to
celcius
*/
#include <iostream>
using namespace std;
int main()
{
	double i;
	double value;
	double i2;
	double value2;
	//variables
	cout << "Please enter a degree value in Celcius :: ";
	cin >> i;
	//asks user for celcius and stores in variable
	value = 1.8 * i + 32;
	//calculates celcius to fahrenheit
	cout << "The degree value in Farenheit is " << value <<
		".\n\n";
	//prints the degree value in fahrenheit
	cout << "Please enter a degree value in Farenheit :: ";

	cin >> i2;
	//asks user for fahrenheit and stores in variable
	value2 = (i2 - 32) * 0.56;
	//calculates fahrenheit to celcius
	cout << "The degree value in Celcius is " << value2 << ".";
	//prints the degree value in celcius
	//extra
}