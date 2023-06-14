/**
* Name: Humna Sultan
* Program Name: Piggy Bank with Classes
* Date: 8 October 2019
* Extra Thing: Solves for amount saved in one year if user saves
25% more per week
*/

#pragma once
#include <iostream>
//includes
using namespace std;
//namespace
class PiggyBank
	//class name
{
private:
	//private vars
	int penny = 0;
	int dime = 0;
	int nickel = 0;
	int quarter = 0;
	int weeks = 0;
	double pbTotal = 0;
	double per;
	double year;
	double year25;
	string name = "";
	//declaring/initialization of diff variables
public:
	//public functions
	PiggyBank();
	void header();
	void info();
	void printInfo(string, int, int, int, int, int);
	void total(string, int, int, int, int, int);
	//declares functions for cpp PiggyBank_class
};