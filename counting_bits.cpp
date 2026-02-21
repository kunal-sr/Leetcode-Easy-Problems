#include <iostream>
#include <vector>
using namespace std;

vector<int> countBits(int n) {
    vector<int> ans(n + 1);
    
    ans[0] = 0;
    
    for(int i = 1; i <= n; i++) {
        ans[i] = ans[i >> 1] + (i & 1);
    }
    
    return ans;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    vector<int> result = countBits(n);
    
    cout << "Output: ";
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}