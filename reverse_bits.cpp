#include <iostream>
#include <cstdint>
using namespace std;

// Function to reverse 32 bits
uint32_t reverseBits(uint32_t n) {

    uint32_t result = 0;

    for (int i = 0; i < 32; i++) {

        result = result << 1;          // shift result left

        result = result | (n & 1);     // add last bit of n

        n = n >> 1;                   // shift n right
    }

    return result;
}

int main() {

    uint32_t n;

    cout << "Enter a 32-bit unsigned integer: ";
    cin >> n;

    uint32_t reversed = reverseBits(n);

    cout << "Reversed bits number: " << reversed << endl;

    return 0;
}
