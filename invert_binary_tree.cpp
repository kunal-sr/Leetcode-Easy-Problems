#include <iostream>
#include <queue>
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

// Function to invert binary tree (recursive)
TreeNode* invertTree(TreeNode* root) {

    if (root == NULL) {
        return NULL;
    }

    // Swap left and right
    TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;

    // Recursively invert subtrees
    invertTree(root->left);
    invertTree(root->right);

    return root;
}

// Level order print (to see result clearly)
void printLevelOrder(TreeNode* root) {

    if (root == NULL) {
        return;
    }

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();

        cout << node->val << " ";

        if (node->left != NULL) {
            q.push(node->left);
        }

        if (node->right != NULL) {
            q.push(node->right);
        }
    }

    cout << endl;
}

int main() {

    /*
           4
          / \
         2   7
        / \ / \
       1  3 6  9
    */

    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);

    cout << "Original Tree (Level Order): ";
    printLevelOrder(root);

    root = invertTree(root);

    cout << "Inverted Tree (Level Order): ";
    printLevelOrder(root);

    return 0;
}