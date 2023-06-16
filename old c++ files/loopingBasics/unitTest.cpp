/**
* Name: Humna Sultan
* Program Name: Worksheet Do While
* Date: 17 December 2019
* Extra Thing: asks what bank the user goes to
*/

#include <iostream>
//include
using namespace std;
//namespace

int main()
//main function
{
	string bank = " ";
	cout << "Which bank do you frequent? :: ";
	cin >> bank;
	//extra
	cout << "+++++ WELCOME TO " << bank << " +++++" << endl;
	cout << "\n=====FLIPPING A COIN PROGRAM=====\n" << endl;
	//extra

	int times = -1;
	char input = 'a';
	int heads = 0;

	int tails = 0;
	//declaring and initializing variables

	cout << "How many flips would you like analyzed? :: ";
	cin >> times;
	//asks number of flips and stores

	for (int i = 1; i <= times; i++)
	{
		//for loop for taking flips
		do {
			cout << "Flip coin #" << i << " and enter result (H / T) :: ";

				cin >> input;
		} while (input != 'H' && input != 'T');
		//do while loop for error trapping of input

		if (input == 'H')
		{
			heads++;
		}
		//adds to number of heads if user says heads
		if (input == 'T')
		{
			tails++;
		}
		//adds to number of tails if user says tails
	}
	double new_times = times;
	double new_tails = tails * 100;
	double new_heads = heads * 100;
	//multiples value in order to get proper percentages

	double perc1 = new_heads / new_times;
	double perc2 = new_tails / new_times;
	//calculates percentages

	cout << heads << " heads, or " << perc1 << "%" << endl;
	cout << tails << " tails, or " << perc2 << "%" << endl;
	//prints percentages and info for user
}