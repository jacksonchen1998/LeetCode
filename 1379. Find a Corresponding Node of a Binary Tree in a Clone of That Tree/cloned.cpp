class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if (!original)
            return nullptr;
        if (original == target)
            return cloned;
        return getTargetCopy(original->left, cloned->left, target) ? : getTargetCopy(original->right, cloned->right, target);
    }
};