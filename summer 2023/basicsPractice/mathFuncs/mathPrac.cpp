#include <iostream>
#include <cmath>

int main() {
	double x = 3;
	double y = 4;
	double z1, z2;

	z1 = std::max(x, y);
	std::cout << z1;

	z2 = std::min(x, y);
	std::cout << z2;

	double ptest = pow(2, 4);
	double square = sqrt(9);
	double ab = abs(-3);
	double down = round(3.14);
	//gives 3

	double up = ceil(3.14);
	//always rounds up --> 4

	double fl = floor(3.14);
	//always rounds down --> 3

	return 0;
}