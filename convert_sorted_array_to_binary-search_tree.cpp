#include <iostream>
#include <vector>

using namespace std;

// 1. You need the TreeNode structure so VS Code knows what a "node" is
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    // Helper function to build the tree
    TreeNode* buildBST(vector<int>& nums, int left, int right) {
        if (left > right) return NULL;

        int mid = left + (right - left) / 2;
        TreeNode* root = new TreeNode(nums[mid]);

        root->left = buildBST(nums, left, mid - 1);
        root->right = buildBST(nums, mid + 1, right);
        
        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return buildBST(nums, 0, (int)nums.size() - 1);
    }
};

// 2. Simple function to print the tree (In-order traversal)
void printTree(TreeNode* root) {
    if (root == NULL) return;
    printTree(root->left);
    cout << root->val << " ";
    printTree(root->right);
}

int main() {
    Solution sol;
    vector<int> nums = {-10, -3, 0, 5, 9};

    TreeNode* root = sol.sortedArrayToBST(nums);

    cout << "Tree created! In-order traversal (should be sorted): " << endl;
    printTree(root);
    cout << endl;

    return 0;
}