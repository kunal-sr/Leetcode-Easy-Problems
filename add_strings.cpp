#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string addStrings(string num1, string num2) {
    int i = num1.length() - 1;
    int j = num2.length() - 1;
    int carry = 0;
    
    string result = "";
    
    while(i >= 0 || j >= 0 || carry) {
        int sum = carry;
        
        if(i >= 0) {
            sum += num1[i] - '0';
            i--;
        }
        
        if(j >= 0) {
            sum += num2[j] - '0';
            j--;
        }
        
        result += (sum % 10) + '0';
        carry = sum / 10;
    }
    
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string num1, num2;
    
    cout << "Enter num1: ";
    cin >> num1;
    
    cout << "Enter num2: ";
    cin >> num2;
    
    cout << "Sum: " << addStrings(num1, num2);
    
    return 0;
}