#include <iostream>
using namespace std;

// Function to check if n is a power of two
bool isPowerOfTwo(int n) {

    if (n <= 0) {
        return false;
    }

    if ((n & (n - 1)) == 0) {
        return true;
    }

    return false;
}

int main() {

    int n;

    cout << "Enter an integer: ";
    cin >> n;

    if (isPowerOfTwo(n)) {
        cout << n << " is a Power of Two." << endl;
    } else {
        cout << n << " is NOT a Power of Two." << endl;
    }

    return 0;
}