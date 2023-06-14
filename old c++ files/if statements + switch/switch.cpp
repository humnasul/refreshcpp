/**
* Name: Humna Sultan
* Program Name: Wksht Switch
* Date: 17 October 2019
* Extra Thing: Makes sure that answer is capitalized and that
answer is appropriate for both programs
*/

#include <iostream>
using namespace std;
//includes and namespace
int main()
//main
{
	cout << "What grade did you recieve? (Make sure that the letter is capitalized) :: ";
	
	char grad;
	cin >> grad;
	//takes input from user

	while (grad != 'A' && grad != 'B' && grad != 'C' && grad !=
		'D' && grad != 'F')
	{
		cout << "What grade did you recieve? (Make sure that the letter is capitalized) :: ";
		cin >> grad;
	}

	//checks if user's response is appropriate
	switch (grad)
		//switch statement for letter grade
	{
	case 'A':
	{
		cout << "Your work is outstanding!" << endl;
		break;
	}
	//A
	case 'B':
	{
		cout << "You are doing good work!" << endl;
		break;
	}
	//B
	case 'C':
	{
		cout << "Your work is satisfactory." << endl;
		break;
	}
	//C
	case 'D':
	{
		cout << "You need to work a little harder." << endl;
		break;
	}
	//D
	case 'F':
	{
		cout << "Please see me for extra help!" << endl;
		break;
	}
	//F
	}

	//----------------------------------------------------------------------
		//start of second part of worksheet
		cout <<
		"\n-----------------------------------------------------";
	cout << "\nEnter a number between 1 and 10 inclusive :: ";
	int num;
	cin >> num;
	//takes user input
	while (num <= 0 || num > 10)
	{
		cout << "Enter a number between 1 and 10 inclusive ::";
		cin >> num;
	}
	//makes sure that the user's response is appropriate
	switch (num)
		//switch statement for numbers
	{
	case 1:
	case 3:
	{
		cout << "Your number is a low odd number.";
		break;
	}
	//1 or 3 = low odd
	case 2:
	case 4:
	{
		cout << "Your number is a low even number.";
		break;
	}
	//2 or 4 = low even
	case 5:
	{

		cout << "Your number is the middle odd number.";
		break;
	}
	//5 = middle odd
	case 6:
	{
		cout << "Your number is the middle even number.";
		break;
	}
	//6 = middle even
	case 7:
	case 9:
	{
		cout << "Your number is a high odd number.";
		break;
	}
	//7 or 9 = high odd
	case 8:
	case 10:
	{
		cout << "Your number is a high even number.";
		break;
	}
	//8 or 10 = high even
	}
	return 0;
}