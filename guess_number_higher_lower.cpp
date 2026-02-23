#include <iostream>
using namespace std;

int pick; // Global variable to simulate the picked number

// Simulated guess API
int guess(int num) {
    if(num > pick) return -1;
    if(num < pick) return 1;
    return 0;
}

int guessNumber(int n) {
    long long left = 1;
    long long right = n;
    
    while(left <= right) {
        long long mid = left + (right - left) / 2;
        int result = guess(mid);
        
        if(result == 0)
            return mid;
        else if(result == -1)
            right = mid - 1;
        else
            left = mid + 1;
    }
    
    return -1;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    cout << "Enter picked number: ";
    cin >> pick;
    
    cout << "Guessed Number: " << guessNumber(n);
    
    return 0;
}