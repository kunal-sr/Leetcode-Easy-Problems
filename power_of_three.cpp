#include <iostream>
using namespace std;

// Function to check if n is power of three (no loop version)
bool isPowerOfThree(int n) {

    // Largest power of 3 within 32-bit integer
    int maxPowerOfThree = 1162261467;  // 3^19

    return n > 0 && (maxPowerOfThree % n == 0);
}

int main() {

    int n;

    cout << "Enter an integer: ";
    cin >> n;

    if (isPowerOfThree(n)) {
        cout << n << " is a Power of Three." << endl;
    } else {
        cout << n << " is NOT a Power of Three." << endl;
    }

    return 0;
}