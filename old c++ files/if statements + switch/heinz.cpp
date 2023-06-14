/**
* Name: Humna Sultan
* Program Name: The IF Statement - Part 2
* Date: 15 October 2019
* Extra Thing: Has 82 as a valid Heinz number
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
	if (num == 57 || num == 82)
	{
		cout << "This is a Heinz number." << endl;
	}
	//if num is equal to 57 or 82
	if (num != 57 && num != 82)
	{
		cout << "Just a plain, old number." << endl;
	}

	//if num is NOT equal to 57 or 82
}