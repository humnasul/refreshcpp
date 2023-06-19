/**
* Name: Humna Sultan
* Program Name: C++ More Programs - Lab 2
* Date: 24 September 2019
* Extra Thing: N/A; on other part of lab
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
//function
{
	double i;
	int i2;
	double value;
	int value2;
	int value3;
	double value4;
	//variables utilized in program
	cout << "What is your age? :: ";
	cin >> i;
	//asks for age and stores in variable
	value = i * 365;
	//finds number of days
	cout << "Your current age in years - " << i;
	cout << "\nYour current age in days - " << value;

	//prints result
	cout << "\n--------------------------------------------\n";
		//border (completion of part 5)
		int spamMail = 55;
	///declaring var spamMail
	value2 = spamMail * 2;
	//determing spamMail times 2
	value = pow(spamMail, 2);
	//determining spamMail squared
	cout << "spamMail value - " << spamMail;
	cout << "\nspamMail times 2 - " << value2;
	cout << "\nspamMail squared - " << value;
	//printing
	cout << "\n--------------------------------------------\n";
		//border (completion of part 6)
		cout << "How many troy pounds does your precious metal weigh ? :: ";
		cin >> i;
	//asks for troy pounds and stores in variable
	value = i * 12;
	//finds number of troy ounces
	value4 = value * 31.1034768;
	//finds number of grams from number of troy ounces
	cout << "Your precious metal is " << value4 << " grams.";
	//prints result
	cout << "\n--------------------------------------------\n";
		//border (completion of part 7)
}