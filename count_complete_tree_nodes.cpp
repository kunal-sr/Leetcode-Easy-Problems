#include <iostream>
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

// Get height by going left
int getLeftHeight(TreeNode* root) {
    int height = 0;
    while (root != NULL) {
        height++;
        root = root->left;
    }
    return height;
}

// Get height by going right
int getRightHeight(TreeNode* root) {
    int height = 0;
    while (root != NULL) {
        height++;
        root = root->right;
    }
    return height;
}

// Count nodes in complete binary tree
int countNodes(TreeNode* root) {

    if (root == NULL) {
        return 0;
    }

    int leftHeight = getLeftHeight(root);
    int rightHeight = getRightHeight(root);

    // If heights are same → perfect binary tree
    if (leftHeight == rightHeight) {
        return (1 << leftHeight) - 1;
    }

    // Otherwise count recursively
    return 1 + countNodes(root->left) + countNodes(root->right);
}

// Helper to build example tree
int main() {

    /*
            1
           / \
          2   3
         / \  /
        4  5 6
    */

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);

    int totalNodes = countNodes(root);

    cout << "Total Nodes: " << totalNodes << endl;

    return 0;
}
