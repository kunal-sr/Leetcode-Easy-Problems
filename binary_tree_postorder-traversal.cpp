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

// Helper function for postorder traversal
void postorder(TreeNode* root, vector<int>& result) {

    if (root == NULL) {
        return;
    }

    postorder(root->left, result);   // Left
    postorder(root->right, result);  // Right
    result.push_back(root->val);     // Root
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
    postorder(root, result);

    cout << "Postorder Traversal: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
