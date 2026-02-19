#include <iostream>
#include <unordered_set>
using namespace std;

// Function to calculate sum of squares of digits
int getNext(int n) {

    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum = sum + digit * digit;
        n = n / 10;
    }

    return sum;
}

// Function to check if number is happy
bool isHappy(int n) {

    unordered_set<int> seen;

    while (n != 1 && seen.find(n) == seen.end()) {

        seen.insert(n);
        n = getNext(n);
    }

    return n == 1;
}

int main() {

    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (isHappy(n)) {
        cout << n << " is a Happy Number." << endl;
    } else {
        cout << n << " is NOT a Happy Number." << endl;
    }

    return 0;
}
