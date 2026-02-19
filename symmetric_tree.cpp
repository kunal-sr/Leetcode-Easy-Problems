#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// ... (Paste the Solution class here) ...

int main() {
    // Manually creating Example 1: [1,2,2,3,4,4,3]
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    Solution sol;
    if (sol.isSymmetric(root)) {
        cout << "The tree is symmetric!" << endl;
    } else {
        cout << "The tree is NOT symmetric." << endl;
    }

    return 0;
}