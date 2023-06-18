#include <iostream>
//include
using namespace std;
//namespace
double times(int num);
double inver(double h1, double h2);
double sq(int n);
double cu(int n);
double fo(int n);
//function definitions
/**
* Name: Humna Sultan
* Program Name: Worksheet Functions Style 3 and 4
* Date: 7 January 2020
* Extra Thing: prints the number that the user entered to the
fourth power - part 3
*/
int main()
//main function
{
	int num = 0;
	//initialization
	cout << "Enter a number :: ";
	cin >> num;
	//asks user for value and stores
	double d = times(num);
	//calls function and stores return value
	cout << "The number you entered doubled is " << d << ".";
	//prints result with label

	cout << "\n-----------------------------------------" <<
		endl;
	//border
	double h1 = 0;
	double h2 = 0;
	//initialization
	cout << "Enter a value for number 1 :: ";
	cin >> h1;
	cout << "Enter a value for number 2 :: ";
	cin >> h2;
	//asks user for values and stores
	double i = inver(h1, h2);
	//calls function and stores return value
	cout << "The harmonic mean of the 2 values that you entered is " << i << ".";
		//prints result with label
		cout << "\n-----------------------------------------" <<
		endl;
	//border
	int j = 0;
	cout << "Enter an integer :: ";
	cin >> j;
	//asks user for value and stores
	int s = sq(j);
	//calls function and stores return value
	cout << "The number your entered squared is " << s << "."
		<< endl;
	//prints result of square with label
	int c = cu(j);
	//callls function and stores return value
	cout << "The number your entered cubed is " << c << "." <<
		endl;
	//prints value of cube with label
	int f = fo(j);
	//calls function and stores return value

	cout << "The number your entered to the fourth power is "
		<< f << ".";
	//prints value of fourth with label
	cout << "\n----------------------------------------\n";
	//border
	cout << "Thank you for utilizing this program :)";
	//thank you message
	return 0;
	//returns
}
double times(int num)
//function for doubling
{
	double two = num * 2;
	return two;
	//doubles value and returns
}
double inver(double h1, double h2)
//function for harmonic mean
{
	double n1 = 1 / h1;
	double n2 = 1 / h2;
	double sum = n1 + n2;
	double aver = sum / 2;
	double fin = 1 / aver;
	//calculates
	return fin;
	//returns result
}
double sq(int n)
//function for squaring
{
	double squared = n * n;
	return squared;
	//squares value and returns
}

double cu(int n)
//function for cubing
{
	double cubed = n * n * n;
	return cubed;
	//cubes value and returns
}
double fo(int n)
//function for fourthing
{
	double fourth = n * n * n * n;
	return fourth;
	//n^4 and returns
}