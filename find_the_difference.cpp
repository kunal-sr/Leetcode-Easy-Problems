#include <iostream>
#include <string>
using namespace std;

char findTheDifference(string s, string t) {
    char result = 0;
    
    for(char c : s) {
        result ^= c;
    }
    
    for(char c : t) {
        result ^= c;
    }
    
    return result;
}

int main() {
    string s, t;
    
    cout << "Enter string s: ";
    cin >> s;
    
    cout << "Enter string t: ";
    cin >> t;
    
    cout << "Added character: " << findTheDifference(s, t);
    
    return 0;
}