#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(string s) {

    int left = 0;
    int right = s.length() - 1;

    while (left < right) {

        // skip non-alphanumeric characters from left
        while (left < right && !isalnum(s[left])) {
            left++;
        }

        // skip non-alphanumeric characters from right
        while (left < right && !isalnum(s[right])) {
            right--;
        }

        // compare characters (case-insensitive)
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    if (isPalindrome(s)) {
        cout << "The string is a palindrome" << endl;
    } else {
        cout << "The string is NOT a palindrome" << endl;
    }

    return 0;
}
