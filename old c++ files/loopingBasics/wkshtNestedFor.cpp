/**
* Name: Humna Sultan
* Program Name: Worksheet Nested For
* Date: 17 December 2019
* Extra Thing: prints right triangle with numbers
*/

#include <iostream>
#include <string>
#include<iostream>
#include<fstream>
#include<iomanip>
//includes

using namespace std;
//namespace

int main()
//main
{
	char outer, inner;
	//declares characters
	for (outer = 'A'; outer <= 'F'; outer++)
	{
		for (inner = 'A'; inner <= outer; inner++)
		{

			cout << inner;
		}
		cout << "\n";
	}
	//prints triangle using nested loops

	cout << "-------------------------------------------------"
		<< endl;//border

	int e = 7;
	//declares variable
	for (int a = 1; a <= 5; a++)
	{
		for (int b = 0; b < e; b++)
		{
			cout << "*"; // printing asterisk character
		}
		cout << endl;
		e = e - 2;

		for (int c = 0; c < a; c++)
		{
			cout << " "; // printing space here
		}
	}
	//prints upside down triangle

	cout << endl;
	cout << "-------------------------------------------------"
		<< endl;
	//border

	for (int rows = 0; rows < 6; rows++)

	{
		//for loop for rows
		for (int col = 0; col < 20; col++)
		{
			cout << "*";
		}
		//for loop for columns
		cout << endl;
	}
	//prints rectangle

	cout << "-------------------------------------------------";
	cout << endl;
	//border

	int n;
	cout << "Enter a number :: ";
	cin >> n;
	//asks user for a number and stores

	for (int a = 1; a <= n; a++)
	{
		for (int b = 1; b <= a; b++)
		{
			cout << b << " ";
		}

		cout << endl;
	}
	//for loop that prints right triangle
	//Extra
	return 0;

	//return

}