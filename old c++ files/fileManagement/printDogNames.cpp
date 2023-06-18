#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
//includes
/**
* Name: Humna Sultan
* Program Name: Worksheet Append Part 4
* Date: 24 January 2020
* Extra Thing: N/A; on other parts of lab
*/
using namespace std;

//namespace
int main()
//main
{
	ifstream file;
	file.open("DOG.txt");
	//opens file
	string line;
	int pos;
	string sub = "";
	//variables for use
	for (int i = 0; i < 11; i++)
		//for loop for each
	{
		getline(file, line);
		//gets line from file
		pos = line.find(" ");
		sub = line.substr(0, pos);
		//finds substring of name
		cout << sub << "\n";
		//prints dog name
	}
	file.close();
	//closes file
	return 0;
}