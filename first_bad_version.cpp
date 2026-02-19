#include <iostream>
using namespace std;

// Simulated first bad version
int BAD_VERSION;

// Simulated API
bool isBadVersion(int version) {
    return version >= BAD_VERSION;
}

class Solution {
public:
    int firstBadVersion(int n) {
        long left = 1;
        long right = n;

        while (left < right) {
            long mid = left + (right - left) / 2;

            if (isBadVersion(mid)) {
                right = mid;   // first bad is at mid or before
            } else {
                left = mid + 1; // first bad is after mid
            }
        }

        return left;
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter total number of versions: ";
    cin >> n;

    cout << "Enter first bad version: ";
    cin >> BAD_VERSION;

    cout << "First Bad Version is: " << sol.firstBadVersion(n) << endl;

    return 0;
}