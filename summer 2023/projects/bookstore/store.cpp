#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

/*
* a basic program that shows what books are currently in a bookshelf
 and gives the user the option to add more books
 * reads from a file for books in bookself
 */

void main() {
	ifstream books;
	books.open("inventory.txt");

	vector<string> book_names;
	vector<string> authors;

	int i = 0;

	string line;
	while (std::getline(books, line)) {
		book_names.push_back(line.substr(0, line.find("-")));
		authors.push_back(line.substr(line.find("-") + 1));
		i++;
	}
	books.close();

	int print = book_names.size();
	//cout << print;
	for (int c = 0; c < print; c++) {
		cout << book_names.at(c) << " by ";
		cout << authors.at(c) << endl;
	}

	/*
	while (std::getline(books, lines[i])) {
		i++;
	}
	*/

}