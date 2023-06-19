#include <iostream>
#include <vector>
#include<algorithm>
#include <iomanip>
#include <stdlib.h>
#include <string>
//inlcudes

/**
* Name: Humna Sultan
* Program Name: Unit 8 Arrays - 5 worksheets
* Date: 4 March 2020
* Extra Things:
1 - gives user the most popular ice cream flavor on the
selected day;
2 - extra palindrome ("tacocat");
3 - asks user which person they would like to know info
about;
4 - raffle goes until user enters "no";
5 - asks for two values from user to search for
*/
using namespace std;
//namespace
int favorite(vector<int> num2, int f_num)
{
	int val = 0;
	int f_count = 0;

	for (int c = 0; c < 10; c++)
	{
		val = num2[c];
		if (val == f_num)
		{
			f_count++;
		}
	}
	return f_count;
}
//function that searches for number of times that user enters favorite number

void printing(string arr[])
{
	for (int y = 0; y <= 4; y++)
	{
		cout << arr[y] << endl;
	}
}
//function that prints an array
void bin1(int key)
{
	int arr[] = { 5, 6, 10, 14, 15, 16, 18, 22 };
	int lowerbound = 0;
	int upperbound = 7;
	int position = (lowerbound + upperbound) / 2;
	while ((arr[position] != key) && (lowerbound <=
		upperbound))
	{
		if (arr[position] > key)
		{
			upperbound = position - 1;
		}
		else
		{
			lowerbound = position + 1;

		}
		position = (lowerbound + upperbound) / 2;
	}
	if (lowerbound <= upperbound)
	{
		cout << "The number was found in array subscript " <<

			position << "." << endl;
	}
	else
	{
		cout << "Sorry, the value was not found in the array."

			<< endl;
	}
}
//function that performs search to find a value

int main()
{
	//beginning of lab 1
	vector<double> finalGrade = { 85.6, 93.7, 76, 88.5, 100,
	91.3 };
	//initializes grade vector
	double total = 0;
	for (int i = 0; i < 6; i++)
	{
		total += finalGrade[i];
	}
	//adds up values in array
	double average = total / 6;
	//finds average
	cout << std::setprecision(1) << fixed << average << endl;
	//prints average (dec format)
	cout << "------------------------------------------------"
		<< endl;
	//border between lab sections

	vector<int> ra(10);
	//declares vector
	int evens = 0;
	//sets even counter to 0
	for (int i = 0; i < 10; i++)
	{
		ra[i] = rand() % 10 + 1;
	}
	//determines random values
	for (int j = 0; j < 10; j++)
	{
		cout << ra[j] << endl;
	}
	//prints array values
	cout << "++++++++++++++++++++" << endl;
	//border within lab part
	for (int y = 9; y >= 0; y--)
	{
		cout << ra[y] << endl;
		//prints values backwards
		if (ra[y] % 2 == 0)
		{
			evens += 1;
		}
		//adds to evens varaible
	}
	cout << "++++++++++++++++++++" << endl;
	//border within lab part
	cout << "Number of even numbers :: " << evens << endl;
	//prints number of even numbers in array
	cout << "------------------------------------------------"
		<< endl;
	//border between lab sections
	vector<int> ages(20);
	string age = "";
	int age2 = 0;
	//initializations

	for (int k = 0; k < 20; k++)
	{
		cout << "Enter age #" << k + 1 << ": " << endl;
		cin >> age;
		age2 = stoi(age);
		ages[k] = age2;
	}
	//asks user for info and stores into array
	int count = 0;
	//initializes variable to count how many ages are > 15
	cout << "++++++++++++++++++++" << endl;
	//border within lab
	for (int n = 0; n < 20; n++)
	{
		if (ages[n] > 15)
		{
			cout << ages[n] << endl;
			count++;
		}
		//counts number of ages > 15 (adds one to variable)
	}
	cout << "Number of ages greater than 15: " << count <<
		endl;
	//prints number of ages > 15
	cout << "------------------------------------------------"
		<< endl;
	//border between lab sections
	double icream[] = { 67.34, 21.45, 89.90, 78.29, 9.12,
	41.95, 56.28 };
	//arrays for sales
	string flavors[] = { "Chocolate", "Raspberry", "Rainbow Sherbet", "Strawberry", "Cookies and Cream", "Banana", "Vanilla"
	};
	//flavors of popular ice cream per day - extra
	string res = "Yes";
	//variable for user input

	string res_cap = "No";
	string res_lo = "no";
	//constant variables used for comparison
	int num;
	//variable declared for input
	while (res != res_cap && res != res_lo)
	{
		if (res != res_cap && res != res_lo)
			//makes sure that the user wants to continue
		{
			cout << "Which day of the week would you like to know the information for ? :: " << endl;
			cin >> num;
			//stores the day that the user wants in a variable

				cout << fixed << setprecision(2) << icream[num - 1] << endl;

			cout << "Most popular flavor that day: " <<

				flavors[num - 1] << endl;

			//prints sale and flavor for day selected by user -flavor extra

				cout << "Would you like to continue (Yes/No) ? ::" << endl;
				cin >> res;
			//asks user if they want to continue and stores
		}
	}
	//end of lab 1
	cout <<
		"()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()" << endl;
		//separation between labs
	
	//beginning of lab 2
	vector<int> num2(10);
	int val_o = 0;
	int f_num = 0;

	for (int o = 0; o < 10; o++)

	{
		cout << "Enter a value for number #" << o + 1 << "::";

			cin >> num2[o];
	}
	//asks user for a number and puts into an array
	cout << "Enter your favorite number :: ";
	cin >> f_num;
	//asks user for their favorite number
	int fav = 0;
	fav = favorite(num2, f_num);
	//calls function to find number of times that favorite num was entered
	cout << "The user entered their favorite number in the list" << fav << " times." << endl;
	//prints number of times that fav num was entered
	cout << "------------------------------------------------" << endl;
	//border between lab sections

	vector<string> palin(6);
	palin[0] = "radar";
	palin[1] = "warts";
	palin[2] = "evil";
	palin[3] = "racecar";
	palin[4] = "toot";
	palin[5] = "tacocat";
	//declares an array and puts palindromes
	//extra - extra palindrome "tacocat"
	string hold = "";
	for (int p = 0; p <= 5; p++)
	{
		hold = palin[p];
		reverse(palin[p].begin(), palin[p].end());
		if (hold == palin[p])

		{
			cout << hold << " is a palindrome." << endl;;
		}
		else
		{
			cout << hold << " is not palindrome." << endl;
		}
	}
	//finds whether string in array is a palindrome
	//end of lab 2
	cout <<
		"()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()" << endl;
	
	//beginning of lab 3
	int dist[] = { 50, 100, 200, 400, 800, 1000 };
	double time[] = { 7.24, 13.54, 28.03, 71.12, 158.67, 220.15
	};
	//initializes parallel distance arrays
	int select = 0;
	do {
		cout << "What distance would you like to investigate? :: ";

			cin >> select;
	} while (select != 50 && select != 100 && select != 200 &&
		select != 400 && select != 800 && select != 1000);
	//asks user which distance they would like to investigate and error traps
		int dist_n = 0;
	for (int r = 0; r <= 5; r++)
	{
		dist_n = dist[r];
		if (dist_n == select)
		{
			cout << dist_n << " :: " << time[r] << endl;
			break;

		}
	}
	//prints parallel array response for distance that user wants to investigate

	cout << "------------------------------------------------"
		<< endl;
	//border between lab sections

	string names[] = { "Ananya", "Adrianna", "Sharon",
	"Nathaniel", "Poppy" };
	string address[] = { "91 Wartey Street", "67 Yumak Court",
	"102 Jeyrold Lane", "45 Quiad Road", "78 Kiolpa Street" };
	string phone[] = { "790-161-9919", "819-828-8192",
	"912-821-8911", "821-211-2190", "892-829-1210" };
	//initializes parallel arrays for student info
	printing(names);
	cout << endl;
	printing(address);
	cout << endl;
	printing(phone);
	cout << endl;
	//calls functions to print arrays
	cout << "Third Person Info:" << endl << names[2] << endl <<
		address[2] << endl << phone[2] << endl;
	//prints info about third person
	int option = 0;
	cout << endl << "Which person would you like info about? :: ";
		cin >> option;
	option = option - 1;
	//asks user which person they want info for
	cout << names[option] << endl << address[option] << endl <<
		phone[option] << endl;
	//prints user's request

	//extra
	//end of lab 3
	cout <<
		"()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()" << endl;
		
	//beginning of lab 4
	int raffle[] = { 307, 521, 416, 154, 243, 893 };
	int raf = 0;
	bool val = false;
	string n1 = "no";
	string n2 = "No";
	string cont = "";
	//initializes variables for use
	do {
		cout << "Enter your raffle number :: ";
		cin >> raf;
		for (int e = 0; e <= 5; e++)
		{
			if (raffle[e] == raf)
			{
				val = true;
				break;
			}
			else
			{
				val = false;
			}
		}
		//tries to find raffle number in array
		if (val == true)
		{
			cout << "Congratulations! You have a winning raffle ticket!" << endl;

		}

		else
		{
			cout << "Sorry! You didn't win the raffle today. Better luck next time!" << endl;

		}
		//prints appropriate response
		cout << "Would you like to continue? (yes/no) :: ";
		cin >> cont;
		//asks if user wants to keep going - extra
	} while (cont != n1 && cont != n2);
	//while user wants to continue will execute
	cout << "------------------------------------------------"
		<< endl;
	//border between lab sections
	int bin_s;
	cout << "Enter a value for the binary search :: ";
	cin >> bin_s;
	bin1(bin_s);
	//asks user for a value for search and calls function to find
		//end of lab 4
		cout <<
		"()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()" << endl;
		
	//beginning of lab 5
	int ra_ar[50];
	for (int s = 0; s <= 49; s++)
	{
		ra_ar[s] = 3 + rand() % 18;
	}
	//declares array and fills with values
	for (int p = 0; p < 2; p++)

	{
		int k_v = 0;
		cout << "Choose a key value :: ";
		cin >> k_v;
		//takes key value entered by user
		bool fin = false;
		for (int q = 0; q <= 40; q++)
		{
			if (ra_ar[q] == k_v)
			{
				fin = true;
				break;
			}
			else
			{
				fin = false;
			}
		}
		//attempts to find value entered by user in array
		if (fin == true)
		{
			cout << "The key value was found in the random array." << endl;
		}
		else
		{
			cout << "The key value was NOT found in the random array." << endl;

		}
		//prints appropriate response
	}
	//asks user for two key values to find - extra
	for (int y = 0; y <= 49; y++)
	{
		cout << ra_ar[y] << endl;
	}
	//prints array

	int ra_bub[50];
	int ra_ex[50];
	for (int k = 0; k <= 49; k++)
	{
		ra_bub[k] = ra_ar[k];
		ra_ex[k] = ra_ar[k];
	}
	//fills other arrays for use in sorting
	cout << "------------------------------------------------"
		<< endl;
	//border between lab sections
	cout << "Array sorted in descending order by bubble sort."
		<< endl;
	//label
	int flag = 1, i = 0;
	int j = 0;
	int temp;
	int raLength = 50;
	for (i = 1; (i <= raLength) && flag; i++)
	{
		flag = 0;
		for (j = 0; j < (raLength - 1); j++)
		{
			if (ra_bub[j + 1] > ra_bub[j])
			{
				temp = ra_bub[j];
				ra_bub[j] = ra_bub[j + 1];
				ra_bub[j + 1] = temp;
				flag = 1;
			}
		}
	}
	//executes bubble sort of array
	for (int y = 0; y <= 49; y++)
	{

		cout << ra_bub[y] << endl;
	}
	//prints array
	cout << "------------------------------------------------"
		<< endl;
	//border between lab sections
	cout << "Array sorted in descending order by exhange sort."
		<< endl;
	//label
	i = 0, j = 0, temp = 0;
	raLength = 50;
	for (i = 0; i < (raLength - 1); i++)
	{
		for (j = (i + 1); j < raLength; j++)
		{
			if (ra_ex[i] < ra_ex[j])
			{
				temp = ra_ex[i];
				ra_ex[i] = ra_ex[j];
				ra_ex[j] = temp;
			}
		}
	}
	//executes exchange sort of array
	for (int y = 0; y <= 49; y++)
	{
		cout << ra_ex[y] << endl;
	}
	//prints array
	//end of worksheets
}