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

	string book_names[100];
	string authors[100];

	int i = 0;

	while (true) {
		string line;
		getline(books, line);
		if (books.fail()) break;

		book_names[i] = line.substr(line.find(":") + 1);
		authors[i] = line.substr(0, line.find(":"));
	}
	books.close();

	int print = std::size(book_names);
	for (int c = 0; c < print; c++) {
		cout << book_names[i];
		cout << authors[i];
	}

	/*
	while (std::getline(books, lines[i])) {
		i++;
	}
	*/

}