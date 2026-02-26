#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int x) {
        val = x;
        left = right = nullptr;
    }
};

int sumOfLeftLeaves(TreeNode* root) {
    if(root == nullptr)
        return 0;
    
    int sum = 0;
    
    if(root->left != nullptr &&
       root->left->left == nullptr &&
       root->left->right == nullptr) {
        sum += root->left->val;
    }
    
    sum += sumOfLeftLeaves(root->left);
    sum += sumOfLeftLeaves(root->right);
    
    return sum;
}

int main() {
    // Example: [3,9,20,null,null,15,7]
    
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    
    cout << "Sum of Left Leaves: "
         << sumOfLeftLeaves(root);
    
    return 0;
}