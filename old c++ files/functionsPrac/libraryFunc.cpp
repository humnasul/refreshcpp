///Humna Sultan - Library Functions Test: programs
#include <iostream>
#include <ctype.h>
#include <string>
//includes
using namespace std;
//namespace
int main()
//main function
{
	string motto = "cs rocks";
	int motto_len = motto.length();
	for (int i = 0; i < motto_len; i++)
	{
		char c = toupper(motto[i]);
		cout << c;
	}
	//number one - string motto activity
	cout << endl;
	cout << "------------------" << endl;
	//border
	string attendance = "32 students";
	int num = stoi(attendance);
	double papers = num * 3;
	cout << "The " << num << " test takers will prepare " <<
		papers << " exam papers.";
	//number two - string attendance activity

}