#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

// Function to check if two strings are isomorphic
bool isIsomorphic(string s, string t) {

    if (s.length() != t.length()) {
        return false;
    }

    unordered_map<char, char> mapST;
    unordered_map<char, char> mapTS;

    for (int i = 0; i < s.length(); i++) {

        char c1 = s[i];
        char c2 = t[i];

        // check s -> t mapping
        if (mapST.find(c1) != mapST.end()) {
            if (mapST[c1] != c2) {
                return false;
            }
        } else {
            mapST[c1] = c2;
        }

        // check t -> s mapping
        if (mapTS.find(c2) != mapTS.end()) {
            if (mapTS[c2] != c1) {
                return false;
            }
        } else {
            mapTS[c2] = c1;
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

    if (isIsomorphic(s, t)) {
        cout << "The strings are Isomorphic." << endl;
    } else {
        cout << "The strings are NOT Isomorphic." << endl;
    }

    return 0;
}
