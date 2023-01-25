class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> res;
        traverse(root, res);
        return res;
    }
    
    void traverse(Node* root, vector<int>& res) {
        if (root == nullptr) return;
        
        res.push_back(root->val);
        
        for (auto node: root->children)
            traverse(node, res);
    }
};