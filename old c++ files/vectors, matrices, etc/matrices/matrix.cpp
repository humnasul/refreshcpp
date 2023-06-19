#include "matrix.h"
#include <vector>
#include<algorithm>
#include <string>
#include <iostream>
using namespace std;
/*
* matrix {
* }
*/

void matrix::one()
{
	vector<vector<double>> c(3);
	c[0] = { 56.7, 34.2, 89.1, 45.0, 32.1, 56.2 };
	c[1] = { 89.1, 56.4, 32.1, 90.1, 28.6, 78.4 };

	c[2] = { 78.5, 67.2, 56.0, 98.6, 89.2, 34.1 };
	cout << c[0][0];
}

// operation "three()" would have been added here