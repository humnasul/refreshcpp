/**
* Name: Humna Sultan
* Program Name: Worksheet WHILE
* Date: 17 December 2019
* Extra Thing: gives user an option of which message to print 20
times
*/

#include <iostream>
//includes
using namespace std;
//namespace

int main()
//main
{
	int num = 0;
	while (num != 1 && num != 2)
	{
		cout << "Enter which message you would like to print:\n1. 'HAPPY HALLOWEEN!!'\n2. 'HAPPY HOLIDAYS!!'\n";
		cin >> num;
	}
	//asks the user for an option and stores until appropriate
	//extra

	if (num == 1)
	{
		int num2 = 0;
		while (num2 < 20)
		{
			cout << "HAPPY HALLOWEEN!!" << endl;
			num2++;
		}
	}
	//prints 'HAPPY HALLOWEEN!!' 20 times if user enters 1

	if (num == 2)
	{
		int num2 = 0;
		while (num2 < 20)
		{
			cout << "HAPPY HOLIDAYS!!" << endl;
			num2++;
		}
	}
	//prints 'HAPPY HOLIDAYS!!' 20 times if user enters 2

	cout << "------------------------------------------" <<
		endl;
	//border

	int num2 = 10;
	while (num2 >= 1)
	{
		cout << num2 << endl;
		num2--;
	}
	//prints numbers 10 to 1

	cout << "------------------------------------------" <<
		endl;
	//border

	int num3 = 5;
	while (num3 <= 51)
	{
		cout << num3 << endl;
		//prints num
		num3 += 2;
		//increments variable
	}
	//prints odd numbers

	cout << "------------------------------------------" <<
		endl;
	//border

	char key = 'a';
	//initializes variable
	while (key != 'c')
	{
		cout << "Enter a letter :: ";
		cin >> key;
		//takes input
		if (key != 'c')
		{
			cout << "HELLO" << endl;
		}
		//while key != to c, the loop will keep going
	}

	cout << "------------------------------------------" <<
		endl;
	//border

	int num4 = 1;
	int count = 0;
	//initializes variable
	string name = " ";
	cout << "Enter your name :: ";
	cin >> name;
	//takes input

	while (num4 <= name.length())
	{
		cout << num4 << ". " << name.at(count) << endl;
		num4++;
		count++;
	}
	//takes name and prints one letter per line numbered
}