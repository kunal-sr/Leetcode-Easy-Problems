#include <iostream>
#include <vector>
using namespace std;

// Function to find majority element
int majorityElement(vector<int>& nums) {

    int candidate = 0;
    int count = 0;

    for (int i = 0; i < nums.size(); i++) {

        if (count == 0) {
            candidate = nums[i];
        }

        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    return candidate;
}

int main() {

    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    cout << "Array elements: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    int result = majorityElement(nums);

    cout << "Majority Element: " << result << endl;

    return 0;
}
