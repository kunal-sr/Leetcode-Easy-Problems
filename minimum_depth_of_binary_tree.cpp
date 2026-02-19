class Solution {
public:
    int minDepth(TreeNode* root) {
        // 1. Base Case: If the tree is empty
        if (root == NULL) {
            return 0;
        }

        // 2. Case: If it's a leaf node (no children)
        if (root->left == NULL && root->right == NULL) {
            return 1;
        }

        // 3. Case: If left child is NULL, we have to look at the right side
        if (root->left == NULL) {
            return 1 + minDepth(root->right);
        }

        // 4. Case: If right child is NULL, we have to look at the left side
        if (root->right == NULL) {
            return 1 + minDepth(root->left);
        }

        // 5. Case: Both children exist, take the smaller one
        int leftSide = minDepth(root->left);
        int rightSide = minDepth(root->right);
        
        return 1 + min(leftSide, rightSide);
    }
};