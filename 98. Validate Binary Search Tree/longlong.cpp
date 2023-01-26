class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return recursive(root, LONG_MAX, LONG_MIN);
    }
    
    bool recursive(TreeNode* root, long long max, long long min) {
        if (root == nullptr) return true;
        if (root->val >= max || root->val <= min) return false;
        return recursive(root->right, max, root->val) && \
            recursive(root->left, root->val, min);
    }
};