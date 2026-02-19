#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// Function to check if array contains duplicate
bool containsDuplicate(vector<int>& nums) {

    unordered_set<int> seen;

    for (int i = 0; i < nums.size(); i++) {

        if (seen.find(nums[i]) != seen.end()) {
            return true;
        }

        seen.insert(nums[i]);
    }

    return false;
}

int main() {

    vector<int> nums = {1, 2, 3, 1};

    cout << "Array elements: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    if (containsDuplicate(nums)) {
        cout << "Array contains duplicate." << endl;
    } else {
        cout << "Array does NOT contain duplicate." << endl;
    }

    return 0;
}
