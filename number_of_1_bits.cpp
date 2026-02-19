#include <iostream>
#include <cstdint>
using namespace std;

// Function to count number of set bits
int hammingWeight(uint32_t n) {

    int count = 0;

    while (n > 0) {

        if (n & 1) {     // check last bit
            count++;
        }

        n = n >> 1;      // shift right
    }

    return count;
}

int main() {

    uint32_t n;

    cout << "Enter a positive integer: ";
    cin >> n;

    int result = hammingWeight(n);

    cout << "Number of set bits: " << result << endl;

    return 0;
}
