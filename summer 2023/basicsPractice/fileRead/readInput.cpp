#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

void main() {

    ifstream in;
    in.open("input.txt");

    while (true) {
        string line;
        getline(in, line);
        if (in.fail()) break;

        cout << line << endl;
    }
    in.close();
}