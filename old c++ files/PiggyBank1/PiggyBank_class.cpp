/**
* Name: Humna Sultan
* Program Name: Piggy Bank with Classes
* Date: 8 October 2019
* Extra Thing: Solves for amount saved in one year if user saves
25% more per week
*/
#include "PiggyBank_class.h"
#include <iomanip>
#include <string>
//includes
using namespace std;
//namespace

PiggyBank::PiggyBank() {
}
void PiggyBank::header()
//function for header
{
	cout << "***PIGGY BANK***";
	cout << "\n--------------------------------------" << endl;
	//prints header
}
void PiggyBank::printInfo(string name, int quart, int dimes, int
	nick, int penny, int weeks) {
	//function for printing info about user
	cout << "\n" << name << endl;
	//prints name
	cout << "Quarters: " << quart << "\nDimes: " << dimes <<
		"\nNickels: " << nick << "\nPennies: " << penny;
	//prints chart for user
	total(name, quart, dimes, nick, penny, weeks);
	//calls function for calculating totals

}
void PiggyBank::info()
//function for obtaining info about user
{
	cout << "Enter your name :: ";
	string name;
	cin >> name;
	//asks for name of user; stores
	cout << "How many quarters do you have? :: ";
	int quart;
	cin >> quart;
	//asks how many quarters; stores
	cout << "How many dimes do you have? :: ";
	int dimes;
	cin >> dimes;
	//asks how many dimes; stores
	cout << "How many nickels do you have? :: ";
	int nick;
	cin >> nick;
	//asks how many nickels; stores
	cout << "How many pennies do you have? :: ";
	int penny;
	cin >> penny;
	//asks how many pennies; stores
	cout << "How many weeks have you been saving money? :: ";
	int weeks;
	cin >> weeks;
	//asks how many weeks; stores
	printInfo(name, quart, dimes, nick, penny, weeks);
	//calls function for printing info in chart
}
void PiggyBank::total(string name, int quart, int dimes, int
	nick, int penny, int weeks) {

	//function for calculating totals
	std::cout << std::fixed;
	std::cout << std::setprecision(2);
	//sets precision - decimal format
	pbTotal = dimes * .1 + penny * .01 + nick * .05 + quart *
		.25;
	cout << "\n\nGrand Total: " << pbTotal << endl;
	//finds grand total and prints
	per = pbTotal / weeks;
	cout << "\n" << name << ", you have saved $" << per << " per week." << endl;
		//finds total per week and prints
		year = per * 52;
	cout << name << ", at this rate, you will save $" << year
		<< " in one year." << endl;
	//finds total per year and prints
	year25 = year * 1.25;
	cout << name << ", if you save 25% more per week, you will save $" << year25 << " in one year.";
		//finds total per year if user saves 25% more per week and prints result
}