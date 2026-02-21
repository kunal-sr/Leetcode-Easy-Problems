#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
    int left = 0;
    int right = s.size() - 1;
    
    while(left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}

int main() {
    int n;
    cout << "Enter number of characters: ";
    cin >> n;
    
    vector<char> s(n);
    
    cout << "Enter characters: ";
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    reverseString(s);
    
    cout << "Reversed string: ";
    for(char c : s) {
        cout << c << " ";
    }
    
    return 0;
}