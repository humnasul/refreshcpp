#include <iostream>
#include <fstream>
#include <string>
//includes
using namespace std;
//namespace
/**
* Name: Humna Sultan
* Program Name: Worksheet Read Part 1
* Date: 17 January 2020
* Extra Thing: N/A
*/
int main()
//main
{
	ifstream MyInfo2;
	MyInfo2.open("COURSE.txt");
	//opens/creates file
	string name;
	string clas;
	string grad1;
	string grad2;
	string grad3;
	string teach;
	string color;

	double aver1;
	double aver2;
	//declares variables
	getline(MyInfo2, name);
	cout << name << endl;
	getline(MyInfo2, clas);
	cout << clas << endl;
	getline(MyInfo2, grad1);
	cout << grad1 << endl;
	getline(MyInfo2, grad2);
	cout << grad2 << endl;
	getline(MyInfo2, grad3);
	cout << grad3 << endl;
	getline(MyInfo2, teach);
	cout << teach << endl;
	getline(MyInfo2, color);
	cout << color << endl;
	//stores info in variables and prints output
	double new_grad1 = stoi(grad1);
	double new_grad2 = stoi(grad2);
	double new_grad3 = stoi(grad3);
	//converts each grade value to double
	aver1 = new_grad1 + new_grad2 + new_grad3;
	aver2 = aver1 / 3;
	//calculates average of grades
	cout << aver2 << endl;
	//prints average to output screen
	MyInfo2.close();
	//closes file
}