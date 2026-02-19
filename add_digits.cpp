#include <iostream>
using namespace std;

// Function to repeatedly add digits until one digit remains
int addDigits(int num) {

    if (num == 0) {
        return 0;
    }

    return 1 + (num - 1) % 9;
}

int main() {

    int num;

    cout << "Enter a number: ";
    cin >> num;

    int result = addDigits(num);

    cout << "Single digit result: " << result << endl;

    return 0;
}
