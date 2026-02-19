#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Definition of binary tree node
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

// DFS helper function
void dfs(TreeNode* root, string path, vector<string>& result) {

    if (root == NULL) {
        return;
    }

    // Add current node to path
    if (path.empty()) {
        path = to_string(root->val);
    } else {
        path += "->" + to_string(root->val);
    }

    // If leaf node, store path
    if (root->left == NULL && root->right == NULL) {
        result.push_back(path);
        return;
    }

    // Traverse left and right
    dfs(root->left, path, result);
    dfs(root->right, path, result);
}

// Main function to get all paths
vector<string> binaryTreePaths(TreeNode* root) {

    vector<string> result;
    dfs(root, "", result);
    return result;
}

int main() {

    /*
            1
           / \
          2   3
           \
            5
    */

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);

    vector<string> paths = binaryTreePaths(root);

    cout << "Root-to-Leaf Paths:" << endl;
    for (int i = 0; i < paths.size(); i++) {
        cout << paths[i] << endl;
    }

    return 0;
}
