#include <iostream>
#include <fstream>
#include <string>
//includes
using namespace std;
//namespace
/**
* Name: Humna Sultan
* Program Name: Worksheet Create Part 1
* Date: 15 January 2020
* Extra Thing: asks user for favorite color and stores in file
*/
int main()
//main
{
	ofstream MyInfo;
	MyInfo.open("COURSE.txt");
	//opens/creates file
	string name = "Humna Sultan";
	//stores name in variable
	MyInfo << name << "\n";
	MyInfo << "Computer Science\n";
	MyInfo << "100, 100, 100\n";
	MyInfo << "DiGiovanna\n";
	//puts information in file

	string color = " ";
	cout << "What is your favorite color? :: ";
	getline(cin, color);
	//asks for user's fav color and stores
	MyInfo << color << "\n";
	//adds user's fav color to file
	//extra
	MyInfo.close();
	//closes file
}