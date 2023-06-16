#include <iostream>
//includes
using namespace std;
//namespace
/**
* Name: Humna Sultan
* Program Name: Worksheet Do While
* Date: 16 December 2019
* Extra Thing: N/A
*/
int main()
//main method
{
	for (int i = 0; i <= 9; i++)
	{
		cout << "C++ Rules!" << endl;
	}
	//for loop for printing 'C++ Rules!'
	cout << "-----------------------------------------------"
		<< endl;
	//border
	int num = 100;
	//decremented num that is printed
	while (num >= 1)
		//while loop for printing value
	{
		cout << num << endl;

		//prints num
		num--;
		//decrements number
	}
}