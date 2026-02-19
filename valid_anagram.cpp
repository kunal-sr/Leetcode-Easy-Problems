#include <iostream>
#include <string>
using namespace std;

// Function to check if t is an anagram of s
bool isAnagram(string s, string t) {

    if (s.length() != t.length()) {
        return false;
    }

    int count[26] = {0};

    for (int i = 0; i < s.length(); i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {

    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    if (isAnagram(s, t)) {
        cout << "They are Anagrams." << endl;
    } else {
        cout << "They are NOT Anagrams." << endl;
    }

    return 0;
}
