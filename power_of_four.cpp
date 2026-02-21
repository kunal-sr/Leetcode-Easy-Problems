#include <iostream>
using namespace std;

bool isPowerOfFour(int n) {
    return (n > 0) &&
           ((n & (n - 1)) == 0) &&
           (n & 0x55555555);
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    
    if (isPowerOfFour(n))
        cout << "true";
    else
        cout << "false";
    
    return 0;
}