#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Function to check duplicate within k distance
bool containsNearbyDuplicate(vector<int>& nums, int k) {

    unordered_map<int, int> indexMap;

    for (int i = 0; i < nums.size(); i++) {

        if (indexMap.find(nums[i]) != indexMap.end()) {

            int previousIndex = indexMap[nums[i]];

            if (i - previousIndex <= k) {
                return true;
            }
        }

        // update latest index
        indexMap[nums[i]] = i;
    }

    return false;
}

int main() {

    vector<int> nums = {1, 2, 3, 1};
    int k = 3;

    cout << "Array elements: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "k = " << k << endl;

    if (containsNearbyDuplicate(nums, k)) {
        cout << "Contains duplicate within k distance." << endl;
    } else {
        cout << "Does NOT contain duplicate within k distance." << endl;
    }

    return 0;
}
