/**
* Name: Humna Sultan
* Program Name: Worksheet DESIGN
* Date: 17 December 2019
* Extra Thing: asks what character the user would like to use
*/

#include <iostream>
#include <iomanip>
//inludes
using namespace std;

int main()
//main
{
	int base = 12;
	int i, j, k;
	char symbol;
	char no;
	char q;
	//declaring variables

	cout << "Enter the character that you would like to use to create the triangle shape(#, *, $, &, @) : ";
	cin >> symbol;
	cout << "\n";

	//asks user for the character that they would like to use and skips a line

		for (i = 0; i < base; i++)
		{
			for (j = base; j > i - 14; j--)
				cout << ' ';

			for (k = base; k <= 2 * i; k++)
			{
				if (k != base && k != 2 * i && i != base - 1)
					cout << ' ';
				else
					cout << symbol;

			}

			cout << endl;
		}
	//prints triangle shape; 20 spaces for the tip

}