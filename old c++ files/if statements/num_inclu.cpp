/**
* Name: Humna Sultan

* Program Name: The IF Statement - Part 2
* Date: 15 October 2019
* Extra Thing: Has 9 as a valid lucky number
*/
#include <iostream>
//include
using namespace std;
//namespace
int main()
//main
{
	cout << "Enter a number :: " << endl;
	double num;
	cin >> num;
	//asks for user to enter number and stores
	if (num >= 5 && num <= 10)
	{
		cout << "Yep, a plain old number between 5 and 10." <<

			endl;

		if (num == 7 || num == 9)
		{
			cout << "Lucky number." << endl;
		}
		//if num is 7 or 9 - lucky
	}
	//if num is between 5 and 10
	if (num > 10)
	{
		cout << "Too big!" << endl;
	}
	//if num is greater than 10 - too big
	if (num < 5)
	{
		cout << "Too small!" << endl;
	}
	//if num is less than 5 - too small

}