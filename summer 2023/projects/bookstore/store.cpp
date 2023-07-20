#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>


using namespace std;

/*
* a basic program that shows what books are currently in a bookshelf
 and gives the user the option to add more books
 * reads from a file for books in bookself
 */

bool check_number(string str) {
	for (int i = 0; i < str.length(); i++)
		if (isdigit(str[i]) == false)
			return false;
	return true;
}

void main() {
	ifstream books;
	books.open("inventory.txt");

	vector<string> book_names;
	vector<string> authors;

	int i = 0;
	int option;

	string line;
	while (std::getline(books, line)) {
		book_names.push_back(line.substr(0, line.find("-")));
		authors.push_back(line.substr(line.find("-") + 1));
		i++;
	}
	//putting values into vectors
	books.close();
	//closing file


	//ask options at the start
	cout << "Welcome to Avery's library :)" << endl;
	cout << "Enter what option you would like!!" << endl;
	cout << "1. See current books in library (in order of what's on the shelf)" << endl;
	cout << "2. See current books in library (alphabetical)" << endl;
	cout << "3. Buy a book off of the shelf" << endl;
	cout << "4. Donate a new book to the shelf" << endl;
	cin >> option;

	if (std::cin.fail()) {
		cout << "please enter number roar" << endl;
		std::cin.clear();
		cin >> option;
	}

	if (option == 1) {
		int print = book_names.size();
		for (int c = 0; c < print; c++) {
			cout << book_names.at(c) << " by ";
			cout << authors.at(c) << endl;
		}
	}

	if (option == 2) {
		vector <string> booksAlp;
		vector <string> authAlp;

		std::copy(book_names.begin(), book_names.end(), std::back_inserter(booksAlp));
		std::sort(booksAlp.begin(), booksAlp.end());

		std::copy(authors.begin(), authors.end(), std::back_inserter(authAlp));
		std::sort(authAlp.begin(), authAlp.end());
	}


	/*
	int print = book_names.size();
	//cout << print;
	for (int c = 0; c < print; c++) {
		cout << book_names.at(c) << " by ";
		cout << authors.at(c) << endl;
	}
	//printing out all current books
	*/

	//make a system to add new books and give a list of options to the user

	/*
	while (std::getline(books, lines[i])) {
		i++;
	}
	*/

}