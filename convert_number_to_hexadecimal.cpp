#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string toHex(int num) {
    if(num == 0)
        return "0";
    
    unsigned int n = num;
    string result = "";
    
    while(n != 0) {
        int digit = n & 0xf;
        
        if(digit < 10)
            result += ('0' + digit);
        else
            result += ('a' + (digit - 10));
        
        n >>= 4;
    }
    
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    
    cout << "Hexadecimal: " << toHex(num);
    
    return 0;
}