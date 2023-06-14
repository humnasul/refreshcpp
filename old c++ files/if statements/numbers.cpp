/**
* Name: Humna Sultan
* Program Name: The IF Statement - Part 1
* Date: 14 October 2019
* Extra Thing: N/A; on part 2
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
	if (num < 0)
	{
		cout << "These are COLD numbers!!! Brrrrr!!" << endl;
	}
	//if num < 0; Brrr
	if (num >= 0 && num <= 9)
	{
		cout << "These are DEDO numbers!!" << endl;
	}

	//if num is between 0 and 9; DEDO
	if (num > 9)
	{
		cout << "These are WARM figures!!! Where's the pool?"

			<< endl;
	}
	//if num is neither of the above; WARM

}