#include <iostream>
using namespace std;
//includes and namespace
/**
* Name: Humna Sultan
* Program Name: Unit 3 Exam
* Date: 21 October 2019
* Extra Thing: Adds an option for finding the modulus of the
numbers - case 5
*/
int main()
//main
{
	int num1, num2;
	cout << "Enter an intger number:: ";
	cin >> num1;
	//asks for an integer and takes user input
	cout << "Enter another integer number:: ";
	cin >> num2;
	//asks for another integer and takes user input
	if (num1 > num2)
	{
		cout << "\n" << num1 << " is greater than " << num2 << ".";
	}

	//if first num is greater than second num
	if (num2 > num1)
	{
		cout << "\n" << num2 << " is greater than " << num1 <<

			".";
	}
	//if second num is greater than first num
	if (num1 == num2)
	{
		cout << "\nThe values that you entered are equal to each other.";
	}
	//if numbers are equal
	cout <<
		"\n-------------------------------------------------" << endl;
	//border
	num1 = 0;
	//sets num1 to 0
	do {
		cout << "Enter a positive integer:: ";
		cin >> num1;
	} while (num1 <= 0);
	//ensures that user enters positive integer
	do {
		cout << "Enter another positive integer:: ";
		cin >> num2;
	} while (num2 <= 0);
	//ensures that user enters positive integer
	int val = 0;
	//sets val to 0; val is used for selecting an operation to perform
		cout << "\nChoose from the following options:\n1) Add the values\n2) Subtract the values\n3) Multiply the values\n4) Divide the values\n5) Find the modulus when dividing the values\n";
		//lists options
		do {
			cout << "Which operation would you like to do?:: " << endl;
			cin >> val;
		} while (val < 1 || val > 5);
		//asks user for operation and ensures appropriate response
		int calc1, calc2;
		//integers for calculation answers
		switch (val) {
			//switch statement for operations to perform
		case 1:
			calc1 = num1 + num2;
			calc2 = num2 + num1;
			cout << num1 << " + " << num2 << " is " << calc1 <<
				".\n" << num2 << " + " << num1 << " is " << calc2 << ".";

			break;
			//case 1 - adding numbers
		case 2:
			calc1 = num1 - num2;
			calc2 = num2 - num1;
			cout << num1 << " - " << num2 << " is " << calc1 <<
				".\n" << num2 << " - " << num1 << " is " << calc2 << ".";

			break;
			//case 2 - subtracting numbers
		case 3:
			calc1 = num1 * num2;
			calc2 = num2 * num1;
			cout << num1 << " * " << num2 << " is " << calc1 <<
				".\n" << num2 << " * " << num1 << " is " << calc2 << ".";

			break;
			//case 3 - multiplying numbers
		case 4:
			calc1 = num1 / num2;
			calc2 = num2 / num1;

			cout << num1 << " / " << num2 << " is " << calc1 <<
				".\n" << num2 << " / " << num1 << " is " << calc2 << ".";

			break;
			//case 4 - dividing numbers
		case 5:
			calc1 = num1 % num2;
			calc2 = num2 % num1;
			cout << num1 << " % " << num2 << " is " << calc1 <<
				".\n" << num2 << " % " << num1 << " is " << calc2 << ".";

			break;
			//case 5 - finding modulus of numbers
			//extra**
		}
		cout << "\n********************************************" <<
			endl;
		cout << " Thank you for using my program!" << endl;
		cout << "********************************************" <<
			endl;
		//thank you message
		return 0;
		//return statement
}