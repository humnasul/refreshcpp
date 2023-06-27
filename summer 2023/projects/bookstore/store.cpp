#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

/*
* a basic program that shows what books are currently in a bookshelf
 and gives the user the option to add more books
 * reads from a file for books in bookself
 */

void main() {
	ifstream books;
	books.open("inventory.txt");

	string lines[100];
	int i = 0;

	while (true) {
		string line;
		getline(books, line);
		if (books.fail()) break;

		cout << line << endl;
	}
	books.close();

	/*
	while (std::getline(books, lines[i])) {
		i++;
	}
	*/

}