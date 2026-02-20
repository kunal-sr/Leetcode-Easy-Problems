#include <iostream>
using namespace std;

// Function to check if you can win Nim Game
bool canWinNim(int n) {
    return n % 4 != 0;
}

int main() {

    int n;

    cout << "Enter number of stones: ";
    cin >> n;

    if (canWinNim(n)) {
        cout << "You can win the game." << endl;
    } else {
        cout << "You cannot win the game." << endl;
    }

    return 0;
}