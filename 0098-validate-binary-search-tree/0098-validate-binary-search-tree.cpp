class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return validate(root, LONG_MIN, LONG_MAX);
    }

private:
    bool validate(TreeNode* node, long min, long max) {
        if (!node) return true; // Base case: empty tree is a BST

        // The current node must be within the allowed range
        if (node->val <= min || node->val >= max) return false;

        // Recursively validate left and right subtrees
        return validate(node->left, min, node->val) && validate(node->right, node->val, max);
    }
};