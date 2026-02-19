#include <iostream>
#include <string>
using namespace std;

// Function to convert Excel column title to number
int titleToNumber(string columnTitle) {

    int result = 0;

    for (int i = 0; i < columnTitle.length(); i++) {

        result = result * 26;

        int value = columnTitle[i] - 'A' + 1;

        result = result + value;
    }

    return result;
}

int main() {

    string columnTitle;

    cout << "Enter Excel column title: ";
    cin >> columnTitle;

    int number = titleToNumber(columnTitle);

    cout << "Column Number: " << number << endl;

    return 0;
}
