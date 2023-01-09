class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if (root != NULL) {
            res.push_back(root->val);

            vector<int> left = preorderTraversal(root->left);
            res.insert(res.end(), left.begin(), left.end());

            vector<int> right = preorderTraversal(root->right);
            res.insert(res.end(), right.begin(), right.end()); 
        }   

        return res;
    }
};