#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
//includes
/**
* Name: Humna Sultan
* Program Name: Worksheet Append Part 3
* Date: 24 January 2020
* Extra Thing: Prints the name and age of Floofy the Dog
*/
using namespace std;
//namespace
int main()
//main
{
	ofstream fout;
	fout.open("DOG.txt", ios::app);
	//opens file for appending
	fout << "Beatrice 3" << endl;
		fout << "Tasha 4" << endl;
	fout << "Patty 1" << endl;
	fout << "Floofy 5" << endl;
	//appends info
	fout.close();
	//closes ofstream

	return 0;
}