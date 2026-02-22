#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> resultSet;
    
    for(int num : nums2) {
        if(set1.count(num)) {
            resultSet.insert(num);
        }
    }
    
    return vector<int>(resultSet.begin(), resultSet.end());
}

int main() {
    int n1, n2;
    
    cout << "Enter size of nums1: ";
    cin >> n1;
    vector<int> nums1(n1);
    
    cout << "Enter elements of nums1: ";
    for(int i = 0; i < n1; i++) {
        cin >> nums1[i];
    }
    
    cout << "Enter size of nums2: ";
    cin >> n2;
    vector<int> nums2(n2);
    
    cout << "Enter elements of nums2: ";
    for(int i = 0; i < n2; i++) {
        cin >> nums2[i];
    }
    
    vector<int> result = intersection(nums1, nums2);
    
    cout << "Intersection: ";
    for(int num : result) {
        cout << num << " ";
    }
    
    return 0;
}