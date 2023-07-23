using namespace std;
#include <iostream>

int main() {
	char op;
	double num1;
	double num2;
	double result;

	cout << "********************** CALCULATOR ************************" << endl;

	cout << "Enter an operation!! (+, -, *, /)" << endl;
	cin >> op;

	cout << "Enter #1: " << endl;
	cin >> num1;

	cout << "Enter #2: " << endl;
	cin >> num2;

	switch (op) {
		case '+':
			result = num1 + num2;
			cout << "result: " << result << endl;

		case '-':
			result = num1 - num2;
			cout << "result: " << result << endl;

		case '*':
			result = num1 * num2;
			cout << "result: " << result << endl;

		case '/':
			result = num1 / num2;
			cout << "result: " << result << endl;
		default:
			cout << "not valid response aaa" << endl;

	}

	cout << "---------------------------------------------------------" << endl;

	return 0;
}