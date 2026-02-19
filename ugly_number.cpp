#include <iostream>
using namespace std;

// Function to check if number is Ugly
bool isUgly(int n) {

    if (n <= 0) {
        return false;
    }

    while (n % 2 == 0) {
        n /= 2;
    }

    while (n % 3 == 0) {
        n /= 3;
    }

    while (n % 5 == 0) {
        n /= 5;
    }

    return n == 1;
}

int main() {

    int n;

    cout << "Enter an integer: ";
    cin >> n;

    if (isUgly(n)) {
        cout << n << " is an Ugly Number." << endl;
    } else {
        cout << n << " is NOT an Ugly Number." << endl;
    }

    return 0;
}
