class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
    
        if (root == nullptr) return {};
        
        vector<vector<int>> res = {{root->val}} ;
        vector<TreeNode*> cur_level = {root};

        while (!cur_level.empty()) {
            vector<int> vals;
            vector<TreeNode*> next_level;
            for (auto node: cur_level) {
                if (node->left) {
                    next_level.push_back(node->left);
                    vals.push_back(node->left->val);
                }
                if (node->right) {
                    next_level.push_back(node->right);
                    vals.push_back(node->right->val);
                }
            }

            if (!next_level.empty()) {
                cur_level.assign(next_level.begin(), next_level.end());
                res.push_back(vals);
            } else {
                break;
            }
        }
        return res;
    }
};