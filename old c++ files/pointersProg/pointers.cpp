#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
//includes
void ask(int* len, int* wid, int* hei);
int mult(int& len, int& wid, int& hei);
int add(int& len, int& wid, int& hei);
void printing(int& a, int& sum);
//LAB #1
void fill(string& name);
void backwards(string& name);
//LAB #2
void sort(int n[10], int s);
//LAB #3
void fill(string& name);
/**
* Name: Humna Sultan
* Program Name: Unit 10 - Number 1
* Date: 28 May 2020
* Extra Thing: prints sum of values that user gives in part 1
*/
int main()
{
	int len, wid, hei;
	ask(&len, &wid, &hei);
	int a = mult(len, wid, hei);
	int sum = add(len, wid, hei);
	printing(a, sum);
	//LAB #1
	//calls functions
	string name;
	fill(name);
	backwards(name);
	//LAB #2

	//calls functions
	int arr[10] = { 16, 12, 32, 5, 2, 76, 92, 31, 84, 1 };
	sort(arr, 10);
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << std::endl;
	}
	//LAB #3
	//calls functions
}
//main function
void ask(int* len, int* wid, int* hei)
{
	cout << "Enter a value for the length :: ";
	cin >> *len;
	cout << "Enter a value for the width :: ";
	cin >> *wid;
	cout << "Enter a value for the height :: ";
	cin >> *hei;
	//asks user to enter values and stores
}
//LAB #1
//function to get user input
int mult(int& len, int& wid, int& hei)
{
	int ans = len * wid * hei;
	return ans;
	//calculates and returns
}
//LAB #1
//function to calculate cubic feet of air
int add(int& len, int& wid, int& hei)
{
	int ans = len + wid + hei;
	return ans;
	//calculates and returns
}
//LAB #1
//function to add calculations
//extra
void printing(int& a, int& sum)
{
	cout << "Cubic Feet of Air: " << a << endl;
	cout << "Sum of Values Given: " << sum << endl;

	//extra
	//prints answers
}
//LAB #1
//function for printing
void fill(string& name)
{
	name = "Humna";
}
//LAB #2
//fills name
void backwards(string& name)
{
	for (int i = name.length() - 1; i >= 0; i--)
	{
		cout << name.substr(i, 1);
	}
	//prints name backwards
}
//LAB #2
//function for printing name backwards
void sort(int n[10], int s)
{
	int i, j, flag = 1;
	int temp;
	int nLength = s;
	for (i = 1; (i <= nLength) && flag; i++)
	{
		flag = 0;
		for (j = 0; j < (nLength - 1); j++)
		{
			if (n[j + 1] < n[j])
			{
				temp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = temp;
				flag = 1;
			}
		}
	}
}
//LAB #3
//function for sorting array with integers