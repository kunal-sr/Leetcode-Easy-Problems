#include <iostream>
#include <string>
using namespace std;

// Function to convert column number to Excel column title
string convertToTitle(int columnNumber) {

    string result = "";

    while (columnNumber > 0) {

        columnNumber--;   // adjust because Excel starts from 1

        int remainder = columnNumber % 26;

        char ch = 'A' + remainder;

        result = ch + result;   // add character at beginning

        columnNumber = columnNumber / 26;
    }

    return result;
}

int main() {

    int columnNumber;

    cout << "Enter column number: ";
    cin >> columnNumber;

    string title = convertToTitle(columnNumber);

    cout << "Excel Column Title: " << title << endl;

    return 0;
}
