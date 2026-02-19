#include <iostream>
#include <vector>
using namespace std;

// Definition of tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

// Helper function for preorder traversal
void preorder(TreeNode* root, vector<int>& result) {

    if (root == NULL) {
        return;
    }

    result.push_back(root->val);   // Root
    preorder(root->left, result);  // Left
    preorder(root->right, result); // Right
}

int main() {
    /*
        Example tree:
            1
             \
              2
             /
            3
    */

    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    vector<int> result;
    preorder(root, result);

    cout << "Preorder Traversal: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}