class Solution {
public:
    TreeNode* first = NULL;
    TreeNode* second = NULL;
    TreeNode* prev = NULL;
    void recoverTree(TreeNode* root) {
        traversal(root);
        int temp = first->val;
        first->val = second->val;
        second->val = temp;
    }

    void traversal(TreeNode* node) {
        if (node) {
            traversal(node->left);
            if (prev && prev->val > node->val) {
                if (!first) first = prev;
                second = node;
            }
            prev = node;
            traversal(node->right);
        }
    }
};