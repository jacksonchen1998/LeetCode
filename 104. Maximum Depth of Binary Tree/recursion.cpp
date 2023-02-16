/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int res = 0;
    void getDepth(TreeNode* root, int depth) {
        if (root == NULL) return;
        res = max(res, depth);
        if (root->left) {
            getDepth(root->left, depth+1);
        }

        if (root->right) {
            getDepth(root->right, depth+1);
        }
        return;
    }
    int maxDepth(TreeNode* root) {
        getDepth(root, 1);
        return res;
    }
};