/**
* Name: Humna Sultan
* Program Name: Logical Operators Lab Part 2
* Date: 10 October 2019
* Extra Thing: N/A; on part 1
*/
#include <iostream>
//include
using namespace std;
//namespace
int main()
//main
{
	std::cout << "Enter an integer between 50 and 100 :: ";
	int ans;
	cin >> ans;
	//takes input from user and stores
	if (ans >= 50 && ans <= 100)
	{
		cout << "You have won $" << ans << "!";
	}
	//for num that meets range
	else
	{
		cout << "Sorry, not following directions will cost you dearly :-(";
	}
	//for num that does not meet range
}