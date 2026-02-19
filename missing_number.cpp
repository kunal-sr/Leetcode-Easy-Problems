#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int expected = n * (n + 1) / 2;
    
    int actual = 0;
    for (int num : nums) {
        actual += num;
    }
    
    return expected - actual;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Missing number is: " << missingNumber(nums) << endl;

    return 0;
}