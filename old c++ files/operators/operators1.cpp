/**
* Name: Humna Sultan
* Program Name: Logical Operators Lab Part 1
* Date: 10 October 2019
* Extra Thing: Asks about ice cream
*/
#include <iostream>
//include
using namespace std;
//namespace
int main()
//main
{
	std::cout << "This program may reformat your hard drive. Do you wish to continue (y / n) ? ";
		char ans = 'a';
	cin >> ans;
	//takes input from user and stores
	if (ans == 'y' || ans == 'Y')
	{
		cout << "Adios data!";
	}
	//if statement for yes response
	if (ans == 'n' || ans == 'N')
	{
		cout << "Wise choice!!";

	}
	//if statement for no response
	if (ans != 'y' && ans != 'Y' && ans != 'n' && ans != 'N')
	{
		cout << "That wasn't a y or n, so I guess I'll trash your drive! HEE HEE";
	}
	//if statement for other response

	//---------------------------------------------------------------------
		cout <<
		"\n---------------------------------------------\n";

	std::cout << "Do you like banana ice cream (y/n)?";
	char ans2 = 'a';
	cin >> ans2;
	//takes input from user and stores
	if (ans2 == 'y' || ans2 == 'Y')
	{
		cout << "It's delicious!";
	}
	//if statement for yes response
	if (ans2 == 'n' || ans2 == 'N')
	{
		cout << "Why not?";
	}
	//if statement for no response
	if (ans2 != 'y' && ans2 != 'Y' && ans2 != 'n' && ans2 !=
		'N')
	{
		cout << "You should really try it!";
	}

	//if statement for other response
	//extra
}