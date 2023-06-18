#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
//includes
/**
* Name: Humna Sultan
* Program Name: Worksheet Append Part 2
* Date: 24 January 2020
* Extra Thing: Prints dog's age and name
*/
using namespace std;
//namespace
int main()
//main
{
	ifstream in1;
	in1.open("DOG.txt");
	//opens file
	string line;
	int age = 0;
	int pos;
	string sub = "";
	//variables for use
	for (int i = 0; i < 7; i++)

		//for loop for each
	{
		getline(in1, line);
		cout << line;
		//gets line from file
		pos = line.find(" ");
		int len = line.length() - 1;
		sub = line.substr(pos, len);
		age = stoi(sub);
		//gets age into integer
		if (age >= 7)
		{
			cout << " OLD DOG" << "\n";
		}
		else
		{
			cout << " YOUNG DOG" << "\n";
		}
		//prints message accordingly
	}
	in1.close();
	//closes file
	return 0;
}