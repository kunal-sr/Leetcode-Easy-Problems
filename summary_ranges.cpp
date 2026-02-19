#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to generate summary ranges
vector<string> summaryRanges(vector<int>& nums) {

    vector<string> result;

    if (nums.size() == 0) {
        return result;
    }

    int start = nums[0];

    for (int i = 1; i <= nums.size(); i++) {

        // If end of array OR sequence breaks
        if (i == nums.size() || nums[i] != nums[i - 1] + 1) {

            if (start == nums[i - 1]) {
                result.push_back(to_string(start));
            } else {
                result.push_back(to_string(start) + "->" + to_string(nums[i - 1]));
            }

            if (i < nums.size()) {
                start = nums[i];
            }
        }
    }

    return result;
}

int main() {

    vector<int> nums = {0, 1, 2, 4, 5, 7};

    cout << "Input array: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    vector<string> result = summaryRanges(nums);

    cout << "Summary Ranges: ";
    for (int i = 0; i < result.size(); i++) {
        cout << "\"" << result[i] << "\" ";
    }
    cout << endl;

    return 0;
}
