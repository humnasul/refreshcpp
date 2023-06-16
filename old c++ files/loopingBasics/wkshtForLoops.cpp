/**
* Name: Humna Sultan
* Program Name: Worksheet FOR Loops
* Date: 16 December 2019
* Extra Thing: Printing of "Coco_The_Cat" backwards
*/
#include <iostream>
#include <string>
//includes
using namespace std;
//namespace
int main()
//main
{
	for (int i = 0; i < 5; i++)
	{
		cout << "C++ knows loops." << endl;
	}
	//prints 5 times
	cout << "C++ knows when to stop." << endl;
	//end message
	cout <<
		"------------------------------------------------------------"
		<< endl;
	//border
	int total = 0;

	int in = 0;
	//declaring and initializing variables
	for (int j = 0; j < 5; j++)
	{
		cout << "Enter an integer value :: ";
		cin >> in;
		total = total + in;
	}
	//for loop for taking values and adding to total
	double aver = total / 5;
	//finds average
	cout << "Total: " << total << "\nAverage: " << aver <<
		endl;
	//prints total and average
	cout <<
		"------------------------------------------------------------"
		<< endl;
	//border
	for (int x = 1; x <= 128; x = x * 2)
	{
		cout << x << endl;
	}
	//prints value of x in for loop
	cout <<
		"------------------------------------------------------------"
		<< endl;
	//border
	string livpo = { "LIVERPOOL" };
	//string array declaration
	string word = livpo;
	int o = word.length() - 1;
	//sets variable
	for (o = o; o >= 0; o--)
	{
		cout << word.at(o);

	}
	//prints string array backwards
	cout <<
		"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"
		<< endl;
	//beginning of extra
	string kitty = "Coco_The_Cat";
	//string declaration
	int p = kitty.length() - 1;
	//sets variable
	for (p = p; p >= 0; p--)
	{
		cout << kitty.at(p);
	}
	//prints string backwards
	//extra
}