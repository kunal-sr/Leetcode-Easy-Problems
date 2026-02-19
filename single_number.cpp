#include <iostream>
#include <vector>
using namespace std;

// Function to find the single number
int singleNumber(vector<int>& nums) {

    int result = 0;

    for (int i = 0; i < nums.size(); i++) {
        result = result ^ nums[i];
    }

    return result;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};

    cout << "Array elements: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    int answer = singleNumber(nums);
    cout << "Single number is: " << answer << endl;

    return 0;
}
